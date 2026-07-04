#include "server.h"

calculation::calculation()
{
	iNo1 = 0;
	iNo2 = 0;
}

calculation::calculation(int iParam1, int iParam2)
{
	iNo1 = iParam1;
	iNo2 = iParam2;
}

int calculation::Addition(void)
{
	return iNo1 + iNo2;
}