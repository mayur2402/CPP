#include<iostream>
using namespace std;

template <class t>

class Array
{
	public :

		t *arr;
		t size = 0;

		Array(t length = 10)	//Parameterized constructor with default value
		{
			arr = new t[length];
			size = length;
		}
		void Accept()
		{
			t i = 0;
			cout<<"Enter elements";
			for(i = 0;i < size;i++)
			{
				cin>>arr[i];
			}
		}
		void Display()
		{
			t i =0;
			for(i = 0;i < size;i++)
			{
				cout<<arr[i]<<"\t";
			}
			cout<<"\n";
		}
		~Array()
		{
			delete []arr;
		}
};

int main()
{
	int size = 0;
	cout<<"How many elements\t";
	cin>>size;

	Array <int> Aobj(size);		//static 
	cout<<"Integer\n";
	Aobj.Accept();
	Aobj.Display();

	Array <char> *Aobj2 = new Array<char>(size);	//dyanamic
	cout<<"Character\n";
	Aobj2->Accept();
	Aobj2->Display();

	return 0;
}