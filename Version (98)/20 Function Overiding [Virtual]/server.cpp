#include<iostream>
#include"server.h"

using std :: cout;

void base :: Fun1()
{
	cout<<"\nBASE :- Fun1 addr[1000]\n";
}

void base :: Fun2()
{
	cout<<"\nBASE :- Fun2 addr[2000]\n";
}

void base :: Fun3()
{
        cout<<"\nBASE :- Fun3 addr[3000]\n";
}

void base :: Fun4()
{
        cout<<"\nBASE :- Fun4 addr[4000]\n";
}

void base :: Fun5()
{
        cout<<"\nBASE :- Fun5 addr[5000]\n";
}

void derive :: Fun2()
{
        cout<<"\nDERIVE :- Fun2 addr[6000]\n";
}

void derive :: Fun3()
{
        cout<<"\nDERIVE :- Fun3 addr[7000]\n";
}

void derive :: Fun4()
{
        cout<<"\nDERIVE :- Fun4 addr[8000]\n";
}

void derive :: Fun5()
{
        cout<<"\nDERIVE :- Fun5 addr[9000]\n";
}

void derive :: Fun6()
{
        cout<<"\nDERIVE :- Fun6 addr[10000]\n";
}
