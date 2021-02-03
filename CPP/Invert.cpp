#include<iostream>
#include<string.h>
using namespace std;
class invertdata
{
	public :
	int invert(int n)
	{
		int temp=0,r;
		while(n!=0)
		{
			r=n%10;
			n=n/10;
			temp=temp*10+r;
		}return temp;
	}
	char *invert(char *str)
	{
		int i,j,len;
		char *str1;
		len=strlen(str);
		str1=new char[len+1];
		for(j=(len-1),i=0;j>=i,i<len;j--,i++)
		{
			str1[j]=str[i];
		}
		str1[j]='0';
		return str1;
	}
	void invert(int *p,int n)
	{
		int i;
		for(i=n-1;i>=0;i--)
		{
			cout<<"\t"<<p[i];
		}
	}
};
int main()
{
	int n,i,j,num,a[20],b[20];
	char *p,*q;
	invertdata ob1;
	cout<<"\nEnter the number to invert\t:";
	cin>>num;
	cout<<"\nReverse"<<ob1.invert(num);
	
	p=new char[20];
	q=new char[20];
	cout<<"\nEnter the string";
	cin>>p;
	q=ob1.invert(p);
	cout<<"\nReverse"<<q;

	cout<<"\nhow many numbers";
	cin>>n;
	cout<<"\nEnter the nos";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"\nReverse nos are";
	ob1.invert(a,n);

}


