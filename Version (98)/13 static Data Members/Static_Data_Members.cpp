#include<iostream>

using std :: cout;
using std :: endl;

class demo
{
	public:
		int iNo1;
		static int iNo2;
};

int demo::iNo2;			//default value zero

int main (void)
{
	demo obj1;
	demo obj2;

	cout<<"\nsize of obj1 = "<<sizeof(obj1)<<endl;
	cout<<"size of obj2 = "<<sizeof(obj2)<<endl;

	cout<<"\nAccessing data members using class name :- \n";
//	cout<<demo::iNo1;			 error: invalid use of non-static data member ‘demo::iNo1’`:wq
	cout<<demo::iNo2<<endl;

	cout<<"\nAccessing data members using object :- \n";
	cout<<"\tobj1\tobj2\n";
	cout<<"iNo1\t"<<obj1.iNo1<<"\t"<<obj2.iNo1<<endl;
	cout<<"iNo2\t"<<obj2.iNo2<<"\t"<<obj2.iNo2<<endl;

	obj1.iNo1 = 10;
	obj1.iNo2 = 20;

	cout<<"\nAccessing data members using object :- \n";
        cout<<"\tobj1\tobj2\n";
        cout<<"iNo1\t"<<obj1.iNo1<<"\t"<<obj2.iNo1<<endl;
        cout<<"iNo2\t"<<obj2.iNo2<<"\t"<<obj2.iNo2<<endl;

	return 0;
}

/*
output

size of obj1 = 4
size of obj2 = 4

Accessing data members using class name :-
0

Accessing data members using object :-
        obj1    obj2
iNo1    952447320       32766
iNo2    0       0

Accessing data members using object :-
        obj1    obj2
iNo1    10      32766
iNo2    20      20

*/
