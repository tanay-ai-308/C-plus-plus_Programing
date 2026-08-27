#include"server.h"

int main(void)
{
	derive obj;

	obj.Fun1(10);

	obj.Fun2(10);
//	obj.Fun2(10,20);	error: no matching function for call to ‘derive::Fun2(int, int)’

//	obj.Fun3(10);		error: no matching function for call to ‘derive::Fun3(int)’
//	obj.Fun3(10,20);	error: no matching function for call to ‘derive::Fun3(int, int)’
	obj.Fun3(10,20,30);

	obj.Fun4(10);

	return 0;
}
/*
 * output
 * 	
 * 	BASE :- Fun1
 *	DERIVE :- Fun2 (2-Parameter)
 *	DERIVE :- Fun3 (3-Parameter)
 *	DERIVE :- Fun4
 *
 */

