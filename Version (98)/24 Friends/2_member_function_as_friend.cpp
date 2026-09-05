class demo2
{
	public :
		void Fun1();

		void Fun2();
};

class demo1
{
	int pri;

	friend void demo2 :: Fun1();

	protected :
		int pro;

	public :
		int pub;
};

void demo2 :: Fun1()
{
	demo1 obj;

	obj.pri = 10;
	obj.pro = 20;
	obj.pub = 30;
}

void demo2 :: Fun2()
{
        demo1 obj;

//        obj.pri = 40;		// error: ‘int demo1::pri’ is private within this context
//        obj.pro = 50;		// error: ‘int demo1::pro’ is protected within this context
        obj.pub = 60;	//allowed
}

int main(void)
{
	demo2 obj;

	obj.Fun1();
	obj.Fun2();

	return 0;
}
