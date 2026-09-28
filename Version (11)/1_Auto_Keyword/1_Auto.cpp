#include<iostream>
//#include<initializer_list>

using std :: cout;
//using std :: initializer_list;

int main (void)
{
	auto no1 = 65;
	auto no2 = 10.45;
	auto ch = 'a';

	auto pNo = &no1;
//	auto Arr = {11,12,13,14,15};		// initializer_list
//	auto pArr = &Arr;

	cout<<"\nno1 = "<<no1;
	cout<<"\nno1 = "<<no1;
	cout<<"\nno2 = "<<no2;
	cout<<"\nch = "<<ch;
	cout<<"\npno = "<<pNo;
	cout<<"\n&no1 = "<<&no1;
	cout<<"\n*pno = "<<*pNo;
	

//	cout<<"\nArr[0] = "<<Arr[0];
//	cout<<"\npArr = "<<pArr;	
//	cout<<"\npArr[0] = %d"<<pArr[0];	
	
	cout<<"\n";
	
	return 0;
}
