#include"server.h"

int main(void)
{
	derived dObj;

//	dObj.Fun1();		client.cpp(7): error C2248: 'base::Fun1': cannot access private member declared in class 'base'
	dObj.Fun2();
//	dObj.Fun3();		client.cpp(9): error C2248: 'base::Fun3': cannot access protected member declared in class 'base'
	dObj.Fun4();
	dObj.Fun4(10);
//	dObj.Fun5();		client.cpp(12): error C2248: 'base::Fun5': cannot access private member declared in class 'derived'

	return 0;
}
