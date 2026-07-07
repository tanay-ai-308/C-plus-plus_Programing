class base
{
	void Fun1();
	
protected:

	void Fun2();
	void Fun3();
	
public:

	void Fun4();
	void Fun4(int);
	void Fun5();

};

class derived : private base
{
public:
//	using base::Fun1;		 error: 'void base::Fun1()' is private within this context
	using base::Fun2;
	using base::Fun4;

};