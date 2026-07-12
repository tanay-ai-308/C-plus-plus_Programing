class demo
{
	int iNo1;
	static int iNo2;

	public:
		void Fun1();
		void Fun2();
		static void Fun3();
//		static void Fun4();
//		static void Fun5() const;	error: static member function ‘static void demo::Fun5()’ cannot have cv-qualifier
		void display();
};
