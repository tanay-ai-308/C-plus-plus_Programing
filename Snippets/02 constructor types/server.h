class demo
{
	int iNo1;
	int iNo2;

public:

	demo();
	~demo();
	void Display();
	demo(demo &ref);
	demo(int iParam);
	//demo(demo &ref , int iNo1);
	demo(demo &ref , int iParam);
	demo(int iParam1 , int iParam2);
};