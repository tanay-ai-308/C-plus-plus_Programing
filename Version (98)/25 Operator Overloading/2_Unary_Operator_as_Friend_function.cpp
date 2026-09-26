#include<iostream>

using std :: cout;
using std :: endl;

class CDemo
{
	int m_iNo1;
	int m_iNo2;

public :
	
	CDemo(int iNo1 = 10, int iNo2 = 20)
	{
		m_iNo1 = iNo1;
		m_iNo2 = iNo2;
	}

	CDemo* This()
	{
		return this; 
	}

	friend CDemo& operator + (CDemo &refObj); 
	friend CDemo operator - (CDemo &refObj);
	friend CDemo operator ~ (CDemo &refObj);
	friend CDemo* operator & (CDemo &refObj);
	friend CDemo& operator ++ (CDemo &refObj);
	friend CDemo operator ++ (CDemo &refObj, int);
	friend CDemo& operator -- (CDemo &refObj);
	friend CDemo operator -- (CDemo &refObj, int);
	
	void display()
	{
		cout<<"m_iNo1 = "<<m_iNo1<<endl;
		cout<<"m_iNo2 = "<<m_iNo2<<endl;
	}

};

CDemo* operator & (CDemo &refObj)
{
	cout<<"In Unary & operator.\n";
	return refObj.This();
}

CDemo& operator +(CDemo &refObj)
{
	cout<<"In Unary + Operator\n";
	return refObj;
}

CDemo operator -(CDemo &refObj)
{
	cout<<"In Unary - Operator\n";
	return CDemo(-refObj.m_iNo1,-refObj.m_iNo2);
}

CDemo operator ~(CDemo &refObj)
{
	cout<<"In Unary ~ Operator\n";
	return CDemo(~refObj.m_iNo1,~refObj.m_iNo2);
}

CDemo& operator ++(CDemo &refObj)
{
	cout<<"In Pre-Increment Operator\n";
	refObj.m_iNo1++;
	refObj.m_iNo2++;
	return refObj;
}

CDemo operator ++(CDemo &refObj, int)
{
    cout<<"In Post-Increment Operator\n";
	CDemo temp (refObj.m_iNo1++,refObj.m_iNo2++);
    return temp;
}

CDemo& operator --(CDemo &refObj)        
{
    cout<<"In Pre-Decrement Operator\n";
    refObj.m_iNo1--;
    refObj.m_iNo2--;
    return refObj;
}

CDemo operator --(CDemo &refObj,int)
{
    cout<<"In Post-Decrement Operator\n";
    CDemo temp(refObj.m_iNo1--,refObj.m_iNo2--);
    return temp;
}


int main(void)
{
	CDemo obj;

	+obj;		//obj.+();
	obj.display();

	CDemo obj1 = -obj;
        obj1.display();

	~obj;
	obj.display();

	++obj;
	obj.display();

	obj++;
	obj.display();

	--obj;
	obj.display();

	obj--;
	obj.display();
	
	return 0;
}
