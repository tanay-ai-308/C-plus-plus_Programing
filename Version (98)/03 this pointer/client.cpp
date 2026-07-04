#include<iostream>
#include"server.h"

using std :: cout;
using std :: endl;

int main(void)
{
	demo obj1;

	obj1.Fun1();
	obj1.Display();

	obj1.Fun2();
	obj1.Display();

	cout<<"\nAddress of obj1 = "<<&obj1<<endl;
	demo *ptr = obj1.Fun3();
	obj1.Display();

	cout<<"\nDisplaing using ptr.";	
	ptr->Display();
	//Display(ptr);

	demo obj2 = obj1.Fun4();
	cout<<"\nobj1.";	
	obj1.Display();
	cout<<"\nobj2.";	
	obj2.Display();

	return 0;
}
/*
In Fun1.
iNo1 = 10
iNo2 = 20

In Fun2.
iNo1 = 30
iNo2 = 40

Address of obj1 = 0095FED8

In Fun3.
iNo1 = 50
iNo2 = 60

Displaing using ptr.
iNo1 = 50
iNo2 = 60

In Fun4.
obj1.
iNo1 = 70
iNo2 = 80

obj2.
iNo1 = 70
iNo2 = 80
*/