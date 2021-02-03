#include<iostream>
#include<string.h>
using namespace::std;
class message
{
	int len;
	char *str;
	public :
	message()
	{
		len=0;
		str=NULL;
	}
	message(char nm[])
	{
		len=strlen(nm);	
		str=new char[len+1];
		strcpy(str,nm);
	}
	void display()
	{
		cout<<str<<endl;
	}
	message operator +(message ob)
	{
		message temp;
		temp.len=len+ob.len;
		temp.str=new char[temp.len];
		strcpy(temp.str,str);
		strcat(temp.str,ob.str);
		return temp;
	}
	char operator [](int index)
	{
		if(index>=0 && index<len)
		{
			return str[index];
		}
		else
		{
			return'_';
		}
	}
	void operator =(message ob)
	{
		len=ob.len;
		str=new char[len];
		strcpy(str,ob.str);
	}
};
int main()
{
	char m1[20],m2[20],m3[20];
	int index;
	cout<<"\nEnter first message\t:";
	cin>>m1;
	cout<<"\nEnter second message\t:";
	cin>>m2;
	message ob1(m1),ob2(m2);
	cout<<"\nfirst message\t:";
	ob1.display();
	cout<<"\nfirst message\t:";
	ob2.display();
	
	cout<<"\nAfter concatenation\t:";
	message ob3;
	ob3=ob1+ob2;
	ob3.display();

	cout<<"\nEnter the position\t:";
	cin>>index;
	char ans=ob1[index];
	if(ans!='_')
	{
		cout<<"\nLetter is\t:"<<ans;
		cout<<"\n";
	}
	else
	{
		cout<<"\nInvalid";
	}

	cout<<"\nEnter the message to be copy\t:";
	cin>>m3;
	message ob4(m3);
	ob1=ob4;
	cout<<"\nCopied message is\t:";
	ob1.display();

	
}

