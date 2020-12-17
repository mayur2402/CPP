#include<iostream>
using namespace std;

class Student
{
	int rollno;
	char name[20];
	float per;
	
	public :
	//Nested class
	class Birthdate
	{
		int dd,mm,yyyy;
		public :
			void acceptdate()
			{
				cout<<"\nEnter date";
				cin>>dd;
				cout<<"\nEnter month";
				cin>>mm;
				cout<<"\nEnter year";
				cin>>yyyy;
			}
			void displaydate()
			{
				cout<<dd<<"/"<<mm<<"/"<<yyyy<<"\n";
			}
	};

	void accept()
	{
		cout<<"Enter roll number";
		cin>>rollno;
		cout<<"Enter Name";
		cin>>name;
		cout<<"Enter Percentage";
		cin>>per;
	}
	void display()
	{
		cout<<"\nRoll Number = "<<rollno;
		cout<<"\nName = "<<name;
		cout<<"\nPercentage = "<<per<<"\n";
	}
};

int main()
{
	Student sobj;
	sobj.accept();

	Student::Birthdate birthdate;
	birthdate.acceptdate();

	sobj.display();
	birthdate.displaydate();
	return 0;
}