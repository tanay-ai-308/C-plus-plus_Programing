class base		//				V-TABLE of Base class	
{			//		      		 ______
			// vptr ----------------------->|______|->Fun2 [2000]
	int iNo1;	// vptr {pointing to 		|______|->Fun4 [4000]
	int iNo2;	//	vtable of base				
			//	virtual Function}	
	public :	

	void Fun1();		//1000
	virtual void Fun2();	//2000
	void Fun3();		//3000
	virtual void Fun4();	//4000
	void Fun5();		//5000
};

class derive : public base
{			//                              V-TABLE of Derive class
                       	//                               ______
                        // vptr ----------------------->|______|->Fun2 [2000]->[6000]
        	       	// vptr {pointing to            |______|->Fun4 [4000]->[8000]
               		//      vtable of derive	|______|->Fun3 [7000]
                        //      virtual Function}
                
	int iNo3;

	public :

	virtual void Fun2();	//6000
	virtual void Fun3();	//7000
	void Fun4();		//8000
	void Fun5();		//9000
	void Fun6();		//10000
};
