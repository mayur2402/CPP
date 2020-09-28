/*
A computer manufacturing company has the following monthly compensation policy to their sales-persons:

Minimum base salary			: 1500.00
Bonus for every computer sold		: 200.00
Commission on the total monthly sales	: 2 per cent

calculate salesman total salary the inputs necessary to calculate the gross
salary are, the price of each computer and the number sold during the month
*/
#include<iostream>

#define SALARY 1500
#define BONUS 200
#define COMMISION 0.02

using namespace::std;

class Salary
{
	private:

	int quantity = 0,price = 0;
	
	public :
	Salary(int quantity,int price)
	{
		this->quantity = quantity;
		this->price = price;
	}

	float Total_Salary()
	{
		float bonus = 0,commision = 0,total = 0;

		bonus = BONUS * this->quantity;
		commision = COMMISION * (this->price * this->quantity);
		total = SALARY + bonus + commision;
		return total;
	}	
};

int main()
{
	int quantity = 0;
	float salary = 0.0f,price = 0.0f;

	cout<<"\nEnter quantity of computer\t:";
	cin>>quantity;
	cout<<"\nEnter price of each computer\t";
	cin>>price;

	Salary s(quantity,price);

	salary = s.Total_Salary();
	
	cout<<"\nTotal salary of Salesman is \t:"<<salary<<"\n";
}

