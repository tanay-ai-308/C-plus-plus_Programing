#include"server.h"

int main(void)
{
	derive dObj;

	base *bp = &dObj;	// UPCASTING...!!!

	bp->Fun1(10);
	bp->Fun2(20);
	bp->Fun3(30);

	return 0;
}

/* Output
 *
 * 	BASE :- Fun1
 *	BASE :- Fun2 (1-Parameter)
 *	Base :- Fun3 (1-Parameter)
 *
 */

