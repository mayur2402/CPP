#include<iostream>
#define N 4
using namespace::std;
int main()
{
	int quantity[5]={0},rate[5]={0},price=0,total=1,i=0;
	char code[5][5]={'\0'};
	for(i=0;i<N;i++)
	{
		cout<<"\nEnter code of "<<i+1<<" item";
		cin>>code[i];
		cout<<"\nEnter quantity of "<<i+1<<" item";
		cin>>quantity[i];
		cout<<"\nEnter rate of "<<i+1<<" item";
		cin>>rate[i];
	}
	cout<<"\n------------------------------------------";
	cout<<"\nCode\tQuantity\tRate\tPrice\n";
	cout<<"\n------------------------------------------";
	for(i=0;i<N;i++)
	{
		price=quantity[i]*rate[i];
		cout<<"\n"<<code[i]<<"\t"<<quantity[i]<<"\t\t"<<rate[i]<<"\t"<<price;
		total=total+price;
	}
	cout<<"\n------------------------------------------";
	cout<<"\n\t\TTotal="<<total;
	cout<<"\n------------------------------------------";
}
