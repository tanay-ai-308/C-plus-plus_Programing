class demo
{
	int data;
	static demo *p;

	demo();
	~demo();

	public :
		static demo * get_object();
		static void delete_object();	//this can be non static
		void set_data(int);
		void get_data();
};
