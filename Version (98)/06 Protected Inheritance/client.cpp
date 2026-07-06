#include"server.h"

int main(void)
{
	base bObj;
	derive dObj;

//	bObj.bpri = 10;			client.cpp(11) : error C2248: 'base::bpri' : cannot access private member declared in class 'base'
//	bObj.bpro = 20;			client.cpp(12) : error C2248: 'base::bpro' : cannot access protected member declared in class 'base'
	bObj.bpub = 130;
	bObj.Display();

//	dObj.dpri = 10;			client.cpp(15) : error C2248: 'derive::dpri' : cannot access private member declared in class 'derive'
//	dObj.dpro = 20;			client.cpp(16) : error C2248: 'derive::dpro' : cannot access protected member declared in class 'derive'
	dObj.dpub = 130;
	dObj.Display();

//	dObj.bpri = 40;			client.cpp(18) : error C2248: 'base::bpri' : cannot access private member declared in class 'base'
//	dObj.bpro = 50;			client.cpp(19) : error C2248: 'base::bpro' : cannot access protected member declared in class 'base'
//	dObj.bpub = 160;                client.cpp(20) : error C2247: 'base::bpub' not accessible because 'derive' uses 'protected' to inherit from 'base'
	dObj.Display();

	bObj.Fun();
	bObj.Display();
	dObj.Fun();
	dObj.Display();

	return 0;
}

/*
In base fun.
        bpri = -1234430917
        bpro = -2
        bpub = 130

In derive fun.
        bpro = 11571568
        bpub = 8386980
        dpri = 11571426
        dpro = 11571568
        dpub = 130

In derive fun.
        bpro = 11571568
        bpub = 8386980
        dpri = 11571426
        dpro = 11571568
        dpub = 130

In base fun.
        bpri = 10
        bpro = 20
        bpub = 30

In derive fun.
        bpro = 20
        bpub = 30
        dpri = 40
        dpro = 50
        dpub = 60
*/