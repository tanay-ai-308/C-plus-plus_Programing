#include"server.h"

int main(void)
{
	base bobj;
	derived dobj;

	bobj.Fun1(10);
	bobj.Fun2(10);
//	bobj.Fun3(10);		 error: ‘class base’ has no member named ‘Fun3’; did you mean ‘Fun1’
	dobj.Fun1(10);
	dobj.Fun2(10);
	dobj.Fun3(10);

	return 0;
}

/*
 * output when redefination of fun2 is not present
 *
 *
 *	Base :- In Fun1.
 *	Base :- In Fun2.
 *	Base :- In Fun1.
 *	Base :- In Fun2.
 *	Derive :- In Fun3.
 */

/*
 * output when redefination of fun2 is present
 *
 *
 *      Base :- In Fun1.
 *      Base :- In Fun2.
 *      Base :- In Fun1.
 *      Derive :- In Fun2.
 *      Derive :- In Fun3.
 */
