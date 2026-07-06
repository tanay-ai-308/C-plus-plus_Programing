#include<iostream>
#include"server.h"

using std :: cout;

void base :: Fun()
{
	bpri = 10;
	bpro = 20;
	bpub = 30;
}

void base :: Display()
{
	cout<<"\n\nIn base fun.\n";
	cout<<"\tbpri = "<<bpri;
	cout<<"\n\tbpro = "<<bpro;
	cout<<"\n\tbpub = "<<bpub;
}

void derive :: Fun()
{
//	bpri = 10;		server.cpp(12) : error C2248: 'base::bpri' : cannot access private member declared in class 'base'
	bpro = 20;
	bpub = 30;
	dpri = 40;
	dpro = 50;
	dpub = 60;
}

void derive :: Display()
{
	cout<<"\n\nIn derive fun.\n";
//	cout<<"\tbpri = "<<bpri;			server.cpp(34) : error C2248: 'base::bpri' : cannot access private member declared in class 'base'
	cout<<"\tbpro = "<<bpro;
	cout<<"\n\tbpub = "<<bpub;
	cout<<"\n\tdpri = "<<dpri;
	cout<<"\n\tdpro = "<<dpro;
	cout<<"\n\tdpub = "<<dpub;
}