#include<iostream>
#include"server.h"

using std :: cout;

base :: base()
{
	cout<<"In base Constructor\n";
}

base :: ~ base()
{
	cout<<"In base distructor\n";
}

derive :: derive()
{
	cout<<"In derive Constructor\n";
}

derive :: ~derive()
{
	cout<<"In derive distructor\n";
}
