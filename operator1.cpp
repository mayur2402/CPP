//overloading of operator with defining method of operator in class

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
		Demo operator +(Demo op2)
		{
			Demo ans(0,0);
			ans.no1 = this->no1 + op2.no1;
			ans.no2 = this->no2 + op2.no2;
			return ans;
		}
		Demo operator -(Demo op2)
		{
			Demo ans(0,0);
			ans.no1 = this->no1 - op2.no1;
			ans.no2 = this->no2 - op2.no2;
			return ans;
		}
		Demo operator *(Demo op2)
		{
			Demo ans(0,0);
			ans.no1 = this->no1 * op2.no1;
			ans.no2 = this->no2 * op2.no2;
			return ans;
		}
		Demo operator /(Demo op2)
		{
			Demo ans(0,0);
			ans.no1 = this->no1 / op2.no1;
			ans.no2 = this->no2 / op2.no2;
			return ans;
		}
};
int main()
{
	Demo obj1(25,45);
	Demo obj2(20,40);
	Demo obj3(35,55);
	Demo ans(0,0);

	//addition
	ans = obj1 + obj2;
	cout<<"addition of two object is \t";
	cout<<ans.no1<<"\t"<<ans.no2<<"\n";

	ans = obj1 + obj2 + obj3;
	cout<<"addition of three object is \t";
	cout<<ans.no1<<"\t"<<ans.no2<<"\n";

	//substraction
	ans = obj1 - obj2;
	cout<<"substraction of two object is \t";
	cout<<ans.no1<<"\t"<<ans.no2<<"\n";

	ans = obj1 - obj2 - obj3;
	cout<<"substraction of three object is \t";
	cout<<ans.no1<<"\t"<<ans.no2<<"\n";

	//multiplication
	ans = obj1 * obj2;
	cout<<"multiplication of two object is \t";
	cout<<ans.no1<<"\t"<<ans.no2<<"\n";

	ans = obj1 * obj2 * obj3;
	cout<<"multiplication of three object is \t";
	cout<<ans.no1<<"\t"<<ans.no2<<"\n";

	//division
	ans = obj1 / obj2;
	cout<<"division of two object is \t";
	cout<<ans.no1<<"\t"<<ans.no2<<"\n";

	ans = obj1 / obj2 / obj3;
	cout<<"division of three object is \t";
	cout<<ans.no1<<"\t"<<ans.no2<<"\n";

	return 0;
}


