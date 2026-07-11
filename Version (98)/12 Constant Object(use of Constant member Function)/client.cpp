#include"server.h"

int main(void)
{
	demo obj1;
	const demo obj2;

	obj1.Fun1();
	obj1.display();

//	obj2.Fun1();			error: passing ‘const demo’ as ‘this’ argument discards qualifiers
	obj2.display();

	obj1.Fun2();
	obj1.display();

	obj2.Fun2();
	obj2.display();

	obj1.Fun3(&obj1);
	obj1.display();

//	obj2.Fun3(&obj2);		error: invalid conversion from ‘const demo*’ to ‘demo*’
	obj2.display();

//	obj1.Fun3(&obj2);		error: invalid conversion from ‘const demo*’ to ‘demo*’
	obj1.display();

	obj2.Fun3(&obj1);
	obj2.display();

	return 0;
}

/*
 *output

	iNo1 = 30
	iNo2 = 20
	iNo1 = 10
	iNo2 = 20
	iNo1 = 30
	iNo2 = 20
	iNo1 = 10
	iNo2 = 20
	iNo1 = 90
	iNo2 = 20
	iNo1 = 10
	iNo2 = 20
	iNo1 = 90
	iNo2 = 20
 *
*/
