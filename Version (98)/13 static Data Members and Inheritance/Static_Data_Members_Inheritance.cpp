#include<iostream>
using std :: cout;
using std :: endl;

class base
{
	public:
		int iNo1;
		static int iNo2;
};

int base :: iNo2;

class derived : public base
{
	public:
		int iNo3;
};

int main(void)
{
	base bObj;
	derived dObj;

	cout<<"\nSize of base = "<<sizeof(base)<<endl;
	cout<<"Size of derived = "<<sizeof(derived)<<endl;

	cout<<"\nSize of bObj = "<<sizeof(bObj)<<endl;
        cout<<"Size of dObj = "<<sizeof(dObj)<<endl;

	cout<<"\nAccessing members using class name.\n";
//	cout<<"\tbase.iNo1 ="<<base::iNo1<<endl;		error: invalid use of non-static data member ‘base::iNo1’
//	cout<<"\tderived.iNo1 ="<<derived::iNo1<<endl;		error: invalid use of non-static data member ‘base::iNo1’

	cout<<"\tbase.iNo2 ="<<base::iNo2<<endl;
        cout<<"\tderived.iNo2 ="<<derived::iNo2<<endl;
	
	cout<<"\nAccessing members using class object.\n";
	cout<<"\tbObj.iNo1 = "<<bObj.iNo1<<endl;
	cout<<"\tbObj.iNo2 = "<<bObj.iNo2<<endl;

	cout<<"\tdObj.iNo1 = "<<dObj.iNo1<<endl;
	cout<<"\tdObj.iNo2 = "<<dObj.iNo2<<endl;
	cout<<"\tdObj.iNo3 = "<<dObj.iNo3<<endl;

	bObj.iNo1 = 10;
	bObj.iNo2 = 20;
	dObj.iNo3 = 30;

	cout<<"\nAccessing members using class name.\n";
        cout<<"\tbase.iNo2 ="<<base::iNo2<<endl;
        cout<<"\tderived.iNo2 ="<<derived::iNo2<<endl;
	
	cout<<"\nAccessing members using class object.\n";
        cout<<"\tbObj.iNo1 = "<<bObj.iNo1<<endl;
        cout<<"\tbObj.iNo2 = "<<bObj.iNo2<<endl;

        cout<<"\tdObj.iNo1 = "<<dObj.iNo1<<endl;
        cout<<"\tdObj.iNo2 = "<<dObj.iNo2<<endl;
        cout<<"\tdObj.iNo3 = "<<dObj.iNo3<<endl;
	
	return 0;
}

/*
	output:-
   
Size of base = 4
Size of derived = 8

Size of bObj = 4
Size of dObj = 8

Accessing members using class name.
        base.iNo2 =0
        derived.iNo2 =0

Accessing members using class object.
        bObj.iNo1 = 30718
        bObj.iNo2 = 0
        dObj.iNo1 = 192057400
        dObj.iNo2 = 0
        dObj.iNo3 = 32765

Accessing members using class name.
        base.iNo2 =20
        derived.iNo2 =20

Accessing members using class object.
        bObj.iNo1 = 10
        bObj.iNo2 = 20
        dObj.iNo1 = 192057400
        dObj.iNo2 = 20
        dObj.iNo3 = 30
*/
