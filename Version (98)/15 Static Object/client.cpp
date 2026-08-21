#include<iostream>
#include"server.h"

using std :: cout;

void Fun1();
void Fun2();

int main(void)
{
	cout<<"\nIn Main.";

	cout<<"\nCalling Fun1.";
	Fun1();

	cout<<"\nCalling Fun2.";
        Fun2();
	
//	cout<<"\nCalling Fun2 Again...";
//      Fun2();

	cout<<"\nLeaving Main.";

	return 0;

}

void Fun1()
{
	cout<<"\nIn Fun1.";
	demo obj;
	cout<<"\nLeaving Fun1.";
}

void Fun2()
{
        cout<<"\nIn Fun2.";
        static demo obj2;
        cout<<"\nLeaving Fun2.";
}

/*
 *
 * OUTPUT 
 *
 *
 *   when fun2 is called only once    |	   when Fun2 is called twise  
 *
 *
 *	In Main.		      |		In Main.
	Calling Fun1.		      |		Calling Fun1.
	In Fun1.		      |		In Fun1.
	In Constructor.		      |		In Constructor.
	Leaving Fun1.		      |		Leaving Fun1.
	In Distructor.		      |		In Distructor.
	Calling Fun2.		      |		Calling Fun2.
	In Fun2.		      |		In Fun2.
	In Constructor.		      |		In Constructor.			//only one time object gets created(means constructor is called)
	Leaving Fun2.		      |		Leaving Fun2.
	Leaving Main.		      |		Calling Fun2 Again...
	In Distructor.		      |		In Fun2.
				      |		Leaving Fun2.
				      |		Leaving Main.
				      |		In Distructor.			//when program gets terminated object call distructor.
*/
