#include<iostream>
#include"server.h"

using std :: cout;
using std :: cin;
using std :: endl;

demo :: demo()
{
	data = 0;
}

demo :: ~demo()
{
	data = 0;
}
demo * demo :: get_object()
{
	if(NULL == p)
	{
		p = new demo;

		if(NULL == p)
		{
			cout<<"Memory allocation failed.\n";
			return NULL;
		}
	}
	else
	{
		bool ret;

		cout<<"You can't create another object as this is single ton class.\n";
		cout<<"Do you want to use existing object? (1/0)\t";
		cin>>ret;

		if (ret == false)
			return NULL;
	}

	return p;
}

void demo :: delete_object()
{
	if(p != NULL)
	{
		delete p;
		p = NULL;
	}
}

void demo :: set_data(int param)
{
	data = param;
}

void demo :: get_data()
{
	cout<<"Data is :- "<<data<<endl;
}

demo * demo :: p = NULL;
