//overloading of operator with defining method of operator outside of the class

#include<iostream>
using namespace std;

class Demo
{
	public :
		int no1, no2;
		Demo(int no1 = 10,int no2 = 20)
		{
			this->no1 = no1;
			this->no2 = no2;
		}
		friend Demo operator +(Demo, Demo);
		friend Demo operator -(Demo, Demo);
		friend Demo operator *(Demo, Demo);
		friend Demo operator /(Demo, Demo);
};
Demo operator +(Demo op1,Demo op2)
{
	Demo ans(0,0);
	ans.no1 = op1.no1 + op2.no1;
	ans.no2 = op1.no2 + op2.no2;
	return ans;
}
Demo operator -(Demo op1,Demo op2)
{
	Demo ans(0,0);
	ans.no1 = op1.no1 - op2.no1;
	ans.no2 = op1.no2 - op2.no2;
	return ans;
}
Demo operator *(Demo op1,Demo op2)
{
	Demo ans(0,0);
	ans.no1 = op1.no1 * op2.no1;
	ans.no2 = op1.no2 * op2.no2;
	return ans;
}
Demo operator /(Demo op1,Demo op2)
{
	Demo ans(0,0);
	ans.no1 = op1.no1 / op2.no1;
	ans.no2 = op1.no2 / op2.no2;
	return ans;
}
int main()
{
	Demo obj1(25,45);
	Demo obj2(20,40);
	Demo ans(0,0);

	//addition
	ans = obj1 + obj2;
	cout<<"addition of two object is \t";
	cout<<ans.no1<<"\t"<<ans.no2<<"\n";

	//substraction
	ans = obj1 - obj2;
	cout<<"substraction of two object is \t";
	cout<<ans.no1<<"\t"<<ans.no2<<"\n";

	//multiplication
	ans = obj1 * obj2;
	cout<<"multiplication of two object is \t";
	cout<<ans.no1<<"\t"<<ans.no2<<"\n";

	//division
	ans = obj1 / obj2;
	cout<<"division of two object is \t";
	cout<<ans.no1<<"\t"<<ans.no2<<"\n";

	return 0;
}


