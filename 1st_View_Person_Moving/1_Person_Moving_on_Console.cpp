#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<Windows.h>

using namespace std ;

int nScreenWidth = 120;
int nScreenHeight = 40;

float fPlayerXPos = 8.0f;
float fPlayerYPos = 8.0f;
float fPlayerAngle = 0.0f;

int nMapHeight = 16;
int nMapWidth = 16;

float fFOV = 3.14159/4.0; 			//Field Of View (pi/4 = why ?)
float fDepth = 16.0f;

int main()
{
	DWORD dwBytesWriten = 0;
	COORD coord;
	coord.X = 0;
	coord.Y = 0;
	
	//-=-=- Creates Screen Buffer -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=--=-=-=-=-=-=-=-=-

	wchar_t *screen = new wchar_t[nScreenWidth*nScreenHeight];
	HANDLE hConsole = CreateConsoleScreenBuffer(GENERIC_READ|GENERIC_WRITE, 0, NULL, CONSOLE_TEXTMODE_BUFFER, NULL);
	SetConsoleActiveScreenBuffer(hConsole);

	wstring Map;

	Map += L"################";				//   
	Map += L"#..............#";				//  Field of View :-  
	Map += L"######.........#";				//   
	Map += L"#..............#";				//   |					|		  |
	Map += L"#..............#";				//   |					|		  |
	Map += L"#..............#";				//   |__________________|		  |
	Map += L"#.....###......#";				//   	 \			   /|+FOV	  |
	Map += L"#.......#......#";				//   	  \			  / |-----	  |	
	Map += L"#.......#......#";				//   	   \		 /	|__2______|
	Map += L"#.......#......#";				//      -FOV\   0   / 					
	Map += L"#..............#";				//   	-----\__^__/}Field of view
	Map += L"#..............#";				//   	  2   \ | /
	Map += L"#..............#";				//   			p  player angle in middle (field of view is 
	Map += L"#........#######";				//   		 (person)				bisected by players angel)
	Map += L"#..............#";				//   
	Map += L"################";				//   

	//auto tp1 = chrono :: system_clock::now();
	//auto tp2 = chrono :: system_clock::now();

	//-=-=- Game loop -=-=-=-=-=-=-=-=-=-=-=--=-=-=-=-=-
	while(1)
	{
		
		// Controls
		// Handle CCW Rotation
		if (GetAsyncKeyState((unsigned short)'A') & 0x8000)
			fPlayerAngle -= (0.001f);
		if (GetAsyncKeyState((unsigned short)'D') & 0x8000)
			fPlayerAngle += (0.001f);

		// To walk forward
		if (GetAsyncKeyState((unsigned short)'W') & 0x8000)
		{
			fPlayerXPos += sinf(fPlayerAngle)*0.008f;
			fPlayerYPos += cosf(fPlayerAngle)*0.008f;

			if (Map[(int)fPlayerYPos * nMapWidth + (int)fPlayerXPos] == '#')
			{
				fPlayerXPos -= sinf(fPlayerAngle) * 1.0f;
				fPlayerYPos -= cosf(fPlayerAngle) * 1.0f;
			}
		}

		// To walk backward
		if (GetAsyncKeyState((unsigned short)'S') & 0x8000)
		{
			fPlayerXPos -= sinf(fPlayerAngle)*0.008f;
			fPlayerYPos -= cosf(fPlayerAngle)*0.008f;

			if (Map[(int)fPlayerYPos * nMapWidth + (int)fPlayerXPos] == '#')
			{
				fPlayerXPos += sinf(fPlayerAngle) * 1.0f;
				fPlayerYPos += cosf(fPlayerAngle) * 1.0f;
			}
		}


		for(int x=0; x<nScreenWidth ; x++)
		{

			// for each column, calculate the projected ray angle into world space
			//				  | find starting angle for|	|Dividing it into small bits|
			//                | the field of view      |	|							|
			float fRayAngle = (fPlayerAngle - fFOV/2.0f) + ((float)x/(float)nScreenWidth)*fFOV;

			float fDistanceToWall = 0;
			bool bHitWall = false;
			
			bool bBoundary = false;
			
			float fEyex = sinf (fRayAngle);		//Unit vector for ray in player space
			float fEyey = cosf (fRayAngle);

			while(!bHitWall && fDistanceToWall<fDepth)
			{

				fDistanceToWall+=0.1f;

				int nTestX = (int)(fPlayerXPos+fEyex*fDistanceToWall);
				int nTestY = (int)(fPlayerYPos+fEyey*fDistanceToWall);

				// Test if ray is out of bounds
				if((nTestX<0 || nTestX>=nMapWidth) || (nTestY<0 || nTestY>=nMapHeight))
				{
					bHitWall = true;					//Just set distance to maximum depth
					fDistanceToWall = fDepth;
				}
				else
				{
					// Ray is inbounds eo test to see if the ray cell is a wall block
					if(Map[ nTestY * nMapWidth + nTestX ] == '#')
					{
						bHitWall = true;

						vector<pair<float,float>> p ;  		// Distance, dot

						for(int tx=0 ; tx<2 ;tx++)
							for(int ty=0 ; ty<2 ;ty++)
							{
								float vy = (float)nTestY + ty - fPlayerYPos;
								float vx = (float)nTestX + tx - fPlayerXPos;
								float d = sqrt(vx*vx + vy*vy);
								float dot = (fEyex*vx/d)+(fEyey*vy/d);

								p.push_back(make_pair(d,dot));
							}

						// Sort pairs from closest to farthest
						sort(p.begin(),p.end(), [](const pair<float,float> &left, const pair<float,float> &right) {return left.first < right.first;});

						float fBound = 0.01;

						if(acos(p.at(0).second)<fBound)
							bBoundary = true;
						if(acos(p.at(1).second)<fBound)
							bBoundary = true;
					}
				}				
			}

			// Calculate distance to celling and floor

			int nCeiling = (float)(nScreenHeight/2.0) - nScreenHeight/((float)fDistanceToWall);
			int nFloor = nScreenHeight - nCeiling;

			wchar_t nShade = ' ';

			if (bBoundary)
				nShade = ' ';		

			if (fDistanceToWall <= fDepth/4.0f)				// Very Close
				nShade = 0x2588;
			else if (fDistanceToWall <= fDepth/3.0f)
				nShade = 0x2593;
			else if (fDistanceToWall <= fDepth/2.0f)
				nShade = 0x2592;
			else if (fDistanceToWall <= fDepth)
				nShade = 0x2591;
			else
				nShade = ' ';								// Too Far

			for(int y=0 ; y<nScreenHeight ; y++)
			{
				if (y<nCeiling)
					screen[y*nScreenWidth+x] = ' ';
				else if(y>nCeiling && y<= nFloor)
					screen[y*nScreenWidth+x] = nShade;
				else
				{
					float b = 1.0f - (((float)y - nScreenHeight/2.0f) / ((float)nScreenHeight/2.0f));
					if (b<0.25)
						screen[y*nScreenWidth+x] = '#';
					else if (b<0.5)
						screen[y*nScreenWidth+x] = 'x';
					else if (b<0.75)
						screen[y*nScreenWidth+x] = '-';
					else if (b<0.9)
						screen[y*nScreenWidth+x] = '.';
					else
						screen[y*nScreenWidth+x] = ' ';
				}
			}
		}

		//-=-=- To Write on the Screen -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-

		screen[nScreenWidth*nScreenHeight-1] = '\0';		//Screen array
		WriteConsoleOutputCharacterW(hConsole, screen, nScreenWidth*nScreenHeight, coord, &dwBytesWriten);
	}
	return 0;
}