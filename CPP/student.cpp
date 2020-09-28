#include<iostream>
#include<iomanip>
using namespace std;
class student
{
	int id;
	char name[20];
	public :
	void accept()
	{
		cout<<"\nEnter the id and name of student\t:";
		cin>>id>>name;
	}
	void display()
	{
		cout<<"\n";
		setw(7);
		cout<<id;
		cout<<"\t";
		setw(7);
		cout<<name;
	}
};
class studentexam : public student
{
	int n,m[20],d,i;
	public :
	void get()
	{
		cout<<"\nEnter the total subject of student\t:";
		cin>>n;
		for(i=0;i<n;i++)
		{
			cout<<"\nEnter marks of sub"<<i;
			cin>>m[i];
		}
	}
	void put()
	{
		cout<<n;
		for(i=0;i<n;i++)
		{
			cout<<"\nmarks of sub"<<m[i];
		}
	}
};
class studentresult : public studentexam
{
	float per;
	int t=0,i;
	char grade;
	public :
	void getper()
	{
		for(i=0;i<n;i++)
		{
			t=t+m[i];
		}
		per=t/n;
		
	}
	void putper()
	{
		cout<<per;
	}
};
int main()
{
	studentresult s[10];	
	int i,n;
	cout<<"\nEnter the total student\t:";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cout<<"\nEnter the"<< i <<"student information\t:";
		s[i].accept();
		s[i].get();
		s[i].getper();
	}
	cout<<"\nStudent information id\n";
	cout<<"\nid\tname\tsubject\tmarks\n";
	for(i=1;i<=n;i++)
	{
		s[i].display();
		cout<<"\t";
		s[i].put();
		cout<<"\t";
		s[i].putper();
	}
	return 0;
}
