class demo2;

class demo1
{
	int pri;

	protected :
	
		int pro;

	public :

		int pub;
		friend class demo2;
};

class demo2
{
	public :
		void fun1()
		{
			demo1 obj;

			obj.pri = 10;
			obj.pro = 20;
			obj.pub = 30;
		}

		void fun2()
		{
			demo1 obj;

			obj.pri = 20;
			obj.pro = 30;
			obj.pub = 40;
		}
};

int main(void)
{
	demo2 obj;

	obj.fun1();
	obj.fun2();

	return 0;
}
