#include<iostream>
#define num 100
using namespace::std;
int main()
{
	int count=1,sum=0,avg=0;
	while(count<num)
	{
		sum=sum+count;
		cout<<sum<<"\n";
		count++;
	}
	avg=sum/num;
	cout<<avg<<"\n";
}
