#include<iostream>
using namespace std;
class Clock
{
	public :
	int h,m,s;
	public :
	Clock()
	{
	}
	Clock(int hh,int mm,int ss)
	{
		h=hh;
		m=mm;
		s=ss;
	}
	Clock operator ++()
	{
		++s;
		if(s>=60)
		{
			s=s-60;
			++m;
			if(m>=60)
			{
				m=m-60;
				++h;
			}
		}
	return *this;	
	}
	Clock operator --()
	{
		if(s==0)
		{
			s=59;
			if(m>0)
			{
				--m;
			}
			if(m==0)
			{
				--h;
				m=59;
			}
		}
		else if(s>0)
		{
			--s;
		}
		return *this;
	}
	friend istream& operator >>(istream &,Clock &);
	friend ostream & operator<<(ostream &,const Clock &);
};
istream & operator >>(istream& in,Clock& t)
{
	cout<<"\nEnter hours\t:";
	in>>t.h;
	cout<<"\nEnter minutes\t:";
	in>>t.m;
	cout<<"\nEnter second\t:";
	in>>t.s;
	return in;
}
ostream &operator <<(ostream &out,Clock& t)
{
	out<<t.h<<":"<<t.m<<":"<<t.s;
	return out;
}
int main()
{
	Clock t,t1,t2;
	cin>>t;
	t1=t;

	t2=++t;
	cout<<"\nAfter one second\t:";
	cout<<t2;
	
	t2=--t1;
	cout<<"\nbefore one second\t:";
	cout<<t2;
	
}
