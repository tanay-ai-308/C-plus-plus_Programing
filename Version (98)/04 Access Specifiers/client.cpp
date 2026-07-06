#include<iostream>
#include"server.h"

int main(void)
{
	base bobj;
	derive dobj;

//	bobj.pri = 10;		//client.cpp(9) : error C2248: 'base::pri' : cannot access private member declared in class 'base'.
//	bobj.pro = 20;		//client.cpp(10) : error C2248: 'base::pro' : cannot access protected member declared in class 'base'
	bobj.pub = 30;

	bobj.Fun();

	dobj.Fun();	

	return 0;
}