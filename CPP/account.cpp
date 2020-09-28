#include<iostream>
using namespace std;
class account
{
	long int a_no;
	static int count;
	char a_type[20];
	int ammount;
	char o_name[20];
	public :
	void get()
	{
		a_no=++count;
		//cout<<"\nEnter the account no\t:";
		//cin>>a_no;
		cout<<"\nEnter the account type\t:";
		cin>>a_type;
		cout<<"\nEnter the ammount\t";
		cin>>ammount;
		cout<<"\nEnter the owner name\t";
		cin>>o_name;
	}
	void display()
	{
		cout<<"\nAccount no\tAccount type\tAmmount\towner name\n";
		cout<<a_no<<"\t\t"<<a_type<<"\t\t"<<ammount<<"\t\t"<<o_name;
	}
};
int account :: count=820000;
int main()
{
	int i,n;
	class account a[10];
	cout<<"\nHow many accounts";
	cin>>n;
	for(i=0;i<n;i++)
	{
		a[i].get();
	}
	for(i=0;i<n;i++)
	{
		a[i].display();
	}
	

}
