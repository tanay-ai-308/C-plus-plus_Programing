#include<iostream>
#include"server.h"

using std::cout;

void base :: Fun1(int no)
{
	cout<<"\nBase :- In Fun1.";
}

void base :: Fun2(int no)
{
	cout<<"\nBase :- In Fun2.";
}

void derived :: Fun2(int no)
{
	cout<<"\nDerive :- In Fun2.";
}

void derived :: Fun3(int no)
{
        cout<<"\nDerive :- In Fun3.\n";
}
