#include<iostream>
#include"server.h"

int main(void)
{
//	demo obj;			 error: ‘demo::demo()’ is private within this context
	demo *p = NULL;

	p = demo :: get_object();
	
	if (p != NULL)
	{
		p->get_data();
		p->set_data(10);
		p->get_data();
	}

	p->delete_object();		// demo :: delete_object();

	p = demo :: get_object();

	if(p != NULL)
	{
		p->get_data();
                p->set_data(20);
                p->get_data();
	}

	return 0;
}
/*
 * output:-
	Data is :- 0
	Data is :- 10
	Data is :- 0
	Data is :- 20
*/
