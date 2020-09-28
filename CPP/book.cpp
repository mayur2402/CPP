#include<iostream>
using namespace :: std;
class media
{
	protected : 
	int id;
	char title[50];
	public :
	virtual void accept()
	{
		cout<<"\nEnter the id and title\n";
		cin>>id>>title;
	}
	virtual void display()
	{
		cout<<"ID\t"<<id<<"\nTITLE\t"<<title;
	}
};
class book : public media
{
	protected :
	int isbn;
	public :
	void accept()
	{
		media::accept();
		cout<<"\nEnter isbn code\t:";
		cin>>isbn;
	}
	void display()
	{
		media::display();
		cout<<"\nISBN"<<isbn;
	}
};
class cd:public media
{
	protected :
	int data;
	public :
	void accept()
	{
		media::accept();
		cout<<"\nEnter the data\t:";
		cin>>data;
	}
	void display()
	{
		media::display();
		cout<<"\nDATA"<<data;
	}
};
int main()
{
	media *ptr[20];
	int n,i;
	int t;
	cout<<"\nHow many media\t:";
	cin>>n;
	for(i=0;i<n;i++)
	{
		ptr[i]=new media;
		cout<<"\n1.Book or 2.cd (1/2)";
		cin>>t;
		if(t!=2)
		{
			ptr[i]=new book;
			ptr[i]->accept();
		}
		else
		{
			ptr[i]=new cd;
			ptr[i]->accept();
		}
	}
	for(i=0;i<n;i++)
	{
		ptr[i]->display();
	}
	
	return 0;
}
