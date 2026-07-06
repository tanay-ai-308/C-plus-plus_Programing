#include"server.h"

void base ::Fun()
{
	pri = 10;
	pro = 20;
	pub = 30;
}

void derive ::Fun()
{
//	pri = 40;		//server.cpp(12) : error C2248: 'base::pri' : cannot access private member declared in class 'base'
	pro = 50;
	pub = 60;
}