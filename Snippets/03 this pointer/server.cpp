#include<iostream>
#include"server.h"
using std :: cout;
using std :: endl;

void demo::Fun1()
{
	cout<<"\nIn Fun1.";
	iNo1 = 10;
	iNo2 = 20;
}

void demo::Fun2()
{
	cout<<"\nIn Fun2.";
	this->iNo1 = 30;
	this->iNo2 = 40;
}

demo * demo::Fun3()
{
	cout<<"\nIn Fun3.";
	iNo1 = 50;
	iNo2 = 60;
	
	return this;
}

demo demo::Fun4()
{
	cout<<"\nIn Fun4.";
	iNo1 = 70;
	iNo2 = 80;

	return *this;
}

void demo::Display()
{
	cout<<"\niNo1 = "<<iNo1<<endl;
	cout<<"iNo2 = "<<iNo2<<endl;
}