#include<iostream>
#include<iomanip>
using namespace std;
class matrix
{
	int r,c;
	int a[20][20];
	public :
	matrix()
	{
		int i,j;
		r=3;
		c=3;
		for(i=0;i<r;i++)
		for(j=0;j<c;j++)
		a[i][j]=-1;
	}
	matrix(int rr,int cc)
	{
		int i,j;
		r=rr;
		c=cc;
		for(i=0;i<r;i++)
		for(j=0;j<c;j++)
		a[i][j]=-1;
	}
	void accept()
	{
		int i,j;
		cout<<"\nEnter a matrix of size "<<r<<"and"<<c;
		for(i=0;i<r;i++)
		for(j=0;j<c;j++)
			cin>>a[i][j];
	}
	void display()
	{
		int i,j;
		cout<<"\nMatrix of size "<<r<<"and"<<c<<"\n";
		for(i=0;i<r;i++)
		{
		for(j=0;j<c;j++)
		{
			cout<<setw(4)<<a[i][j]<<"\t";
		}
		cout<<"\n";
		}
	}
	friend matrix operator +(matrix &,matrix &);
	friend matrix operator -(matrix &,matrix &);
};
matrix operator +(matrix& m1,matrix& m2)
	{
		int i,j,r,c;
		matrix m;
		if(m1.c!=m2.c && m1.r!=m2.r)
		{
			cout<<"\nInvalid size";
		}	
		else
		r=m1.r;
		c=m1.c;
		{
			for(i=0;i<r;i++)
			for(j=0;j<c;j++)
			m.a[i][j]=m1.a[i][j]+m2.a[i][j];
		}
		return m;
	}
matrix operator -(matrix &m1,matrix &m2)
	{
		int i,j,r,c;
		matrix m;
		if(m1.r!=m2.r && m1.c!=m2.c)
		{
			cout<<"\nInvalid size";
		}
		else
		r=m1.r;
		c=m1.c;
		{
			for(i=0;i<r;i++)
			for(j=0;j<c;j++)
			m.a[i][j]=m1.a[i][j]-m2.a[i][j];
		}
		return m;
	}

int main()
{
	matrix m1,m2,m3,m4;
	m1.accept();
	m2.accept();
	m1.display();
	m2.display();

	m3=m1+m2;
	m3.display();

	m4=m1-m2;
	m4.display();
}	
