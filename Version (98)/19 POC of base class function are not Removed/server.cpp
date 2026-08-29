#include<iostream>
#include"server.h"

using std :: cout;

void base :: Fun1(int no)
{
	cout<<"\nBASE :- Fun1";
}

void base :: Fun2(int no)
{
	cout<<"\nBASE :- Fun2 (1-Parameter)";
}

void base :: Fun2(int no1, int no2)
{
	cout<<"\nBase :- Fun2 (2-Parameter)";
}

void base :: Fun3(int no)
{
	cout<<"\nBase :- Fun3 (1-Parameter)";
}

void base :: Fun3(int no1, int no2)
{
	cout<<"\nBASE :- Fun3 (2-Parameter)";
}

void derive :: Fun2(int no)
{
	cout<<"\nDERIVE :- Fun2 (2-Parameter)";
}

void derive :: Fun3(int no1, int no2, int no3)
{
	cout<<"\nDERIVE :- Fun3 (3-Parameter)";
}

void derive :: Fun4(int no1)
{
	cout<<"\nDERIVE :- Fun4";
}
