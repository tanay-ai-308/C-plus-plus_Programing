#include<cstddef>
#include"server.h"

int main(void)
{
	base * bp = NULL;
	derive dobj;

	bp = &dobj;

	bp->Fun1();
	bp->Fun2();
	bp->Fun3();
	bp->Fun4();
	bp->Fun5();
//	bp->Fun6();	error: ‘class base’ has no member named ‘Fun6’

	return 0;
}
