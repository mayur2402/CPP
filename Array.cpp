#include<iostream>
using namespace std;
class Array
{
	public :
		int *arr;
		int size = 0;

		Array(int length = 5)	//Parameterized constructor with default value
		{
			arr = new int[length];
			size = length;
		}
		void Accept()
		{
			int i = 0;
			cout<<"Enter elements";
			for(i = 0;i < size;i++)
			{
				cin>>arr[i];
			}
		}
		void Display()
		{
			int i =0;
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

	Array Aobj(size);	//static allocation
	Aobj.Accept();
	Aobj.Display();

	Array *Aobj1 = new Array(size);		//Dyanamic alloctaion
	Aobj1->Accept();
	Aobj1->Display();	

	Array *Aobj2 = new Array();		//Use of default Parameterized 
	Aobj2->Accept();
	Aobj2->Display();

	return 0;
}