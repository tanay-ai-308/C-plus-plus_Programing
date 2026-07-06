class base
{
	int bpri;

protected:
	int bpro;

public:
	int bpub;

	void Fun();
	void Display();
};

class derive : private base
{
	int dpri;

protected:
	int dpro;

public:
	int dpub;

	void Fun();
	void Display();
};