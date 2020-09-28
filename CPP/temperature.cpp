#include<iostream>
using namespace::std;
int main()
{
	int cel=0,fahr=0,count=1;
	cout<<"Enter till how many celcius you want conversion";
	cin>>cel;
	while(count<cel)
	{
		fahr=(count*1.8)+32;
		cout<<"\ncelcius "<< count <<" in fahrenheit " << fahr;
		count++;
	}
}
