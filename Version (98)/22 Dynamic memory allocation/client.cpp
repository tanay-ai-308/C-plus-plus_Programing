#include<stdlib.h>
#include"server.h"

int main (void)
{
	demo *p1, *p2, *p3, *p4, *p5, *p6;

	p1 = (demo *)malloc(sizeof(demo));	//allocates 1 object, not calling constructor

	p2 = new demo;				// 1 object, default constructor

	p3 = new demo(10);			// 1 object, parameterzied Constructor 1

	p4 = new demo(10,20);			// 1 object, parameterized Constructor 2

	p5 = new demo [3];			// 3 object, default constructor
						// 	     default constructor
						// 	     default Constructor

	p6 = new demo [3] {{10},{20,30}};	// 3 object, parameterzied Constructor 1
						// 	     parameterzied Constructor 2
						// 	     default constructor

//	free(p1);	//No distructor		free(): double free detected in tcache 2

	delete p1;	//Distructor

	delete p2;	//Distructor

	delete p3;      //Distructor

	delete p4;      //Distructor

//	delete p5;      //Distructor		munmap_chunk(): invalid pointer

	delete []p6;    //Distructor

	return 0;
}
