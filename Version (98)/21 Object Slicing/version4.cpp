#include<iostream>

using std :: cout;
using std :: endl;

class base
{
        public :
                int iNo1;
                int iNo2;
		
		base()				// new code
		{
			iNo1 = iNo2 = 50;
		}
                void Fun1()
                {
                        cout<<"In base Fun1"<<endl;
                }
};

class derive : public base
{
        public :
                int iNo1;	//new line
                int iNo2;	//new line

                void Fun2()
                {
                        cout<<"In derive Fun2"<<endl;
                }
};

void Fun(base bObj)
{
        cout<<"bObj.iNo1 = "<<bObj.iNo1<<endl;
        cout<<"bObj.iNo2 = "<<bObj.iNo2<<endl;
//      cout<<"bObj.iNo3 = "<<bObj.iNo3<<endl;          error: ‘class base’ has no member named ‘iNo3’
//      cout<<"bObj.iNo4 = "<<bObj.iNo4<<endl;          error: ‘class base’ has no member named ‘iNo4’

        bObj.Fun1();
//      bObj.Fun2();                                    error: ‘class base’ has no member named ‘Fun2’
}

int main(void)
{
        derive dObj;

        dObj.iNo1 = dObj.iNo2 = 10;
//        dObj.iNo3 = dObj.iNo4 = 20;		//old line

        Fun(dObj);

        return 0;
}

/* output :-
 *
bObj.iNo1 = 50
bObj.iNo2 = 50
In base Fun1

*/
