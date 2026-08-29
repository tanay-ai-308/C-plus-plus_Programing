class base
{
	public:
		void Fun1(int);
		void Fun2(int);
		void Fun2(int,int);
		void Fun3(int);
		void Fun3(int,int);
};

class derive : public base
{
	public:
		void Fun2(int);
		void Fun3(int,int,int);
		void Fun4(int);
};
