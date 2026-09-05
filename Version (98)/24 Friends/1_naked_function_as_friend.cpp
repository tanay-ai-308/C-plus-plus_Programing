#include<iostream>

using std :: cout;

class demo
{
	int pri;

	protected :
		int pro;

	public :
		int pub;

	friend void Fun1(demo &);		//Friend Declaration
	
	demo()
	{
		pri = 0;
		pro = 0;
		pub = 0;
	}

	void display_demo()
	{
		cout<<"\npri = "<<pri;
		cout<<"\npro = "<<pro;
		cout<<"\npub = "<<pub;
	}
};

void Fun1(demo &obj)
{
	obj.pri = 10;
	obj.pro = 20;
	obj.pub = 30;
}

void Fun2()
{
        demo obj;

//      obj.pri = 40;		error: ‘int demo::pri’ is private within this context
//      obj.pro = 50;		error: ‘int demo::pro’ is protected within this context
        obj.pub = 60;
}

int main (void)
{
	demo obj;

	obj.display_demo();
	Fun1(obj);
	obj.display_demo();

	Fun2();

	return 0;
}
