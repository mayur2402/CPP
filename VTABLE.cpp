#include<iostream>
using namespace std;

class Base
{
	public :
		int i,j;
		virtual void fun()
		{
			cout<<"inside base fun\n";
		}
		virtual void gun()
		{
			cout<<"inside base gun\n";
		}
		void sun()
		{
			cout<<"inside base sun\n";
		}
};
class Derived : public Base
{
	public :
		int x,y;
		void fun()	//Overriding
		{
			cout<<"inside derived fun\n";
		}
		virtual void run()	//Overriding
		{
			cout<<"inside derived run\n";
		}
		void sun()	//Redefination
		{
			cout<<"inside derived sun\n";
		}
};

int main()
{
	Base bobj;
	Derived dobj;

	cout<<"size of base "<<sizeof(bobj)<<"\n";
	cout<<"size of derived "<<sizeof(dobj)<<"\n";

	long *ptr = (long *)&dobj;
	cout<<"value at first position in derived class object "<<*ptr<<"\n";

	long *vptr = (long *)(*ptr);
	cout<<"value at first position in VTABLE "<<*vptr<<"\n";

	void (*fp)();
	fp = (void (*)())(*vptr);
	fp();

	fp = (void (*)())(*(vptr+1));
	fp();

	fp = (void (*)())(*(vptr+2));
	fp();

	return 0;
}

