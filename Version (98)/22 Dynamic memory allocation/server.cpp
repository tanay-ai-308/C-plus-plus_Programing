#include<iostream>
#include"server.h"

using std :: cout;

demo :: demo()
{
	cout<<"default Constructor.\n";
}

demo :: demo(int iNo1)
{
	cout<<"Parameterized Constructor 1.\n";
}

demo :: demo(int iNo1,int iNo2)
{
	cout<<"Parameterized Constructor 2.\n";
}

demo :: ~demo()
{
	cout<<"Distructor.\n";
}
