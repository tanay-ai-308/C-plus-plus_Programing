#include<iostream>
#include"server.h"

using std :: cout;
using std :: cin;
using std :: endl;

demo :: demo():iNo2(0),iNo3(0)
{
	iNo1 = 0;
}

demo :: demo(int param) : iNo2(param), iNo3(param)
{
	iNo1 = param;
}

void demo :: display()
{
	cout<<iNo1<<endl;
	cout<<iNo2<<endl;
	cout<<iNo3<<endl;
}
