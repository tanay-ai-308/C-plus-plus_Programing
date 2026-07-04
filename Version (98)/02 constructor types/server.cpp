#include<iostream>
#include"server.h"

using std :: cout;
using std :: cin;

demo::demo()
{
	cout<<"\nDefault Constructor.";
	iNo1 = 0;
	iNo2 = 0;
}

demo::demo(int iParam)
{
	cout<<"\nPramerterized Constructor 1.";
	iNo1 = iParam;
	iNo2 = iParam;
}

demo::demo(int iParam1 , int iParam2)
{
	cout<<"\nPramerterized Constructor 2.";
	iNo1 = iParam1;
	iNo2 = iParam2;
}

demo::demo(demo &ref)
{
	cout<<"\nCopy Constructor 1.";
	iNo1 = ref.iNo1;
	iNo2 = ref.iNo2;
}

demo::demo(demo &ref , int iParam)
{
	cout<<"\nCopy Constructor 2.";
	iNo1 = ref.iNo1 + iParam;
	iNo2 = ref.iNo2 + iParam;
}

/*
demo::demo(demo &ref , int iNo1)
{
	cout<<"\nCopy Constructor 2.";
	iNo1 = ref.iNo1 + iNo1;
	iNo2 = ref.iNo2 + iNo1;
}
*/

demo::~demo()
{
	cout<<"\nDestructor.";
	iNo1 = 0;
	iNo2 = 0;
}

void demo::Display()
{
	cout<<"\n\tiNo1 = "<<iNo1;
	cout<<"\n\tiNo2 = "<<iNo2;
}

/*
											|
output if uncomment the commented code 		|original output
											|
Default Constructor.						|Default Constructor.
        iNo1 = 0 							|        iNo1 = 0
        iNo2 = 0 							|        iNo2 = 0 
Pramerterized Constructor 1.				|Pramerterized Constructor 1
        iNo1 = 10							|        iNo1 = 10
        iNo2 = 10							|        iNo2 = 10
Pramerterized Constructor 2.				|Pramerterized Constructor 2.
        iNo1 = 20							|        iNo1 = 20
        iNo2 = 30							|        iNo2 = 30
Copy Constructor 1.							|Copy Constructor 1.	
        iNo1 = 20							|        iNo1 = 20
        iNo2 = 30							|        iNo2 = 30
Copy Constructor 2.							|Copy Constructor 2.
        iNo1 = -2							|        iNo1 = 60
        iNo2 = 90							|        iNo2 = 70
Destructor.									|Destructor.
Destructor.									|Destructor.
Destructor.									|Destructor.
Destructor.									|Destructor.
Destructor.									|Destructor.
											|
*/ 