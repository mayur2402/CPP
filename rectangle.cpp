#include<iostream>
using namespace std;
class rectangle
{
	float l,b;
	public :
	void setlength(float len)
	{
		l=len;
	}
	void setwidth(float bre)
	{
		b=bre;
	}
	float perimeter()
	{
		float p;
		p=2*(l+b);
		return p;
	}
	float area()
	{
		float a;
		a=l*b;
		return a;
	}
	void show()
	{
		cout<<"\nlength="<<l<<"\nbreadth="<<b;
	}
	void compare(rectangle ob)
	{
		if(l<ob.l)
		{
			cout<<"\nSecond rectangle length is greater";
		}
		else
		{
			cout<<"\nFirst rectangle length is greater";
		}
		if(b<ob.b)
		{
			cout<<"\nSecond rectangle breadth is greater";
		}
		else
		{
			cout<<"\nFirst rectangle breadth is greater";
		}
		
	}
	void compare(float a1,float a2)
	{
		if(a1<a2)
		{
			cout<<"\nArea of second rectangle is large";
		}
		else
		{
			cout<<"\nArea of first rectangle is large";
		}
	}	
};
int main()
{
	rectangle ob1,ob2,ob3;
	float l1,b1,l2,b2,a1,a2,p1,p2;
	cout<<"\nEnter the length and breadth of rectangle\t:";
	cin>>l1>>b1;
	cout<<"\nEnter the length and breadth of rectangle\t:";
	cin>>l2>>b2;
	ob1.setlength(l1);
	ob2.setlength(l2);
	ob1.setwidth(b1);
	ob2.setwidth(b2);
	
	ob1.show();
	ob2.show();
	
	p1=ob1.perimeter();
	cout<<"\nPerimeter1="<<p1;
	p2=ob2.perimeter();
	cout<<"\nPerimeter2="<<p2;
	
	a1=ob1.area();
	cout<<"\nArea1="<<a1;
	a2=ob2.area();
	cout<<"\nArea2="<<a2;

	ob1.compare(ob2);
	ob3.compare(a1,a2);
	return 0;
}
