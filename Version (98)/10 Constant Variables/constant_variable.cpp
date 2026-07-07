#include<iostream>

using std :: cout;
using std :: cin;
using std :: endl;

int main(void)
{
	const int no = 10;
	const int * p = &no;
//	int *p1 = &no;					 error: invalid conversion from ‘const int*’ to ‘int*’ [-fpermissive]

	int arr[no];

	cout<<"\nAddress of no = "<<&no<<endl;		//Address will print because we have used '&' opertor , Hence memory will be allocated.
	
	switch(10)
	{
		case no : cout<<"\nNo = "<<no<<endl;
			 
		default : cout<<"\nIn default\n";
	}
	

	return 0;
}

/*

output:-
	
	Address of no = 0x7ffe16c99b44

	No = 10

	In default

*/
