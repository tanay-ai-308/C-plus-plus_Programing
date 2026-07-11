#include<iostream>
#include"server.h"

using std :: cout;
using std :: endl;

demo :: demo() : iNo2(20)
{
	iNo1 = 10;
}

void demo :: Fun1()
{
	iNo1 = 30;
//	iNo2 = 40;			error: assignment of read-only member ‘demo::iNo2’
}

void demo :: Fun2() const
{
//	iNo1 = 50;			 error: assignment of member ‘demo::iNo1’ in read-only object
//	iNo2 = 60;			 error: assignment of member ‘demo::iNo2’ in read-only object
}

void demo :: Fun3(demo *p) const
{
//	this ->iNo1 = 70;		 error: assignment of member ‘demo::iNo1’ in read-only object
//	this ->iNo2 = 80;		 error: assignment of member ‘demo::iNo2’ in read-only object
	
	p ->iNo1 = 90;
//	p ->iNo2 = 100;			error: assignment of read-only member ‘demo::iNo2’
}

void demo :: display() const
{
	cout<<"iNo1 = "<<iNo1<<endl;
	cout<<"iNo2 = "<<iNo2<<endl;
}
