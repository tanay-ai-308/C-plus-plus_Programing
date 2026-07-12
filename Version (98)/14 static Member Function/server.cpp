#include<iostream>
#include"server.h"

using std :: cout;
using std :: endl;

int demo :: iNo2;

void demo :: Fun1()
{
         iNo1 = 10;
         iNo2 = 20;
}

void demo :: Fun2()
{
         this->iNo1 = 30;
         this->iNo2 = 40;
}

void demo :: Fun3()		//this is static function see server.h file
{
//       iNo1 = 50;		 error: invalid use of member ‘demo::iNo1’ in static member function
	 iNo2 = 60;
}
/*
void demo :: Fun4()		static function
{
         this->iNo1 = 70;	: error: ‘this’ is unavailable for static member functions
         this->iNo2 = 80;	: error: ‘this’ is unavailable for static member functions
}
*/
void demo :: display()
{
	cout<<"\niNo1 = "<<iNo1<<endl;
	cout<<"iNo2 = "<<iNo2<<endl;
}
