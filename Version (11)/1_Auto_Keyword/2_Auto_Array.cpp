#include<iostream>

using std :: cout ;
using std :: endl ;

int main(void)
{
	int Arr[] = {10,20,30};

	auto A = Arr;		// int * a
	auto& B = Arr;		// int B[3]
	
	cout<<"A[0] = "<<A[0]<<endl;
	cout<<"B[0] = "<<B[0]<<endl;
	cout<<"Sizeof(Arr) = "<<sizeof(Arr)<<endl;
	cout<<"Sizeof(A) = "<<sizeof(A)<<endl;
	cout<<"Sizeof(B) = "<<sizeof(B)<<endl;
	
	return 0;
}
/*
 * output:-
 *
 * A[0] = 10
 * B[0] = 10
 * Sizeof(Arr) = 12
 * Sizeof(A) = 8
 * Sizeof(B) = 12
 *
 */

