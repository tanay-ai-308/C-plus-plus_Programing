#include<iostream>

using std :: cout;
using std :: cin;

#include"server.h"

int main(void)
{
	demo Obj1;
	Obj1.Display();

	demo Obj2(10);
	Obj2.Display();

	demo Obj3(20,30);
	Obj3.Display();

	demo Obj4(Obj3);
	Obj4.Display();

	demo Obj5(Obj4,40);
	Obj5.Display();

	return 0;
}
/*

Default Constructor.
        iNo1 = 0
        iNo2 = 0
Pramerterized Constructor 1.
        iNo1 = 10
        iNo2 = 10
Pramerterized Constructor 2.
        iNo1 = 20
        iNo2 = 30
Copy Constructor 1.
        iNo1 = 20
        iNo2 = 30
Copy Constructor 2.
        iNo1 = 60
        iNo2 = 70
Destructor.
Destructor.
Destructor.
Destructor.
Destructor.
*/