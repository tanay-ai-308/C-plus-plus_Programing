#include<iostream>
using namespace std;
#include"server.h"

int main(void)
{
	int iNo1;
	int iNo2;
	int iAns;

	calculation Obj1;

	iAns = Obj1.Addition();
	cout<<"OBJ1 : Answer is "<<iAns<<endl;

	cout<<"Enter 2 Numbers :\n";
	cin>>iNo1>>iNo2;

	calculation Obj2(iNo1,iNo2);
	iAns = Obj2.Addition();
	cout<<"OBJ2 : Answer is "<<iAns<<endl;

	return 0;
}

/*
OBJ1 : Answer is 0
Enter 2 Numbers :
20
30
OBJ2 : Answer is 50
*/