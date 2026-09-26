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

	CDemo& operator +()
	{
		cout<<"In Unary + Operator\n";
		return *this;
	}

	CDemo operator -()
	{
		cout<<"In Unary - Operator\n";
		return CDemo(-m_iNo1,-m_iNo2);
	}

	CDemo operator ~()
	{
		cout<<"In Unary ~ Operator\n";
		return CDemo(~m_iNo1,~m_iNo2);
	}

	CDemo & operator ++()
	{
		cout<<"In Pre-Increment Operator\n";
		m_iNo1++;
		m_iNo2++;

		return *this;
	}

	CDemo operator ++(int)
        {
                cout<<"In Post-Increment Operator\n";
                
		CDemo temp(m_iNo1,m_iNo2);
		m_iNo1++;
                m_iNo2++;

                return temp;
        }

	CDemo & operator --()
        {
                cout<<"In Pre-Decrement Operator\n";
                m_iNo1--;
                m_iNo2--;

                return *this;
        }

        CDemo operator --(int)
        {
                cout<<"In Post-Decrement Operator\n";

                CDemo temp(m_iNo1,m_iNo2);
                m_iNo1--;
                m_iNo2--;

                return temp;
        }

	void display()
	{
		cout<<"m_iNo1 = "<<m_iNo1<<endl;
		cout<<"m_iNo2 = "<<m_iNo2<<endl;
	}
};

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
