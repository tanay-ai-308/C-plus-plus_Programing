#include"server.h"

int main (void)
{
	demo obj;

	obj.Fun1();
	obj.display();

	obj.Fun2();
        obj.display();

	obj.Fun3();
        obj.display();

//	obj.fun4();
//      obj.display();

	return 0;
}
/*
OUTPUT:-

iNo1 = 10
iNo2 = 20

iNo1 = 30
iNo2 = 40

iNo1 = 30
iNo2 = 60
*/
