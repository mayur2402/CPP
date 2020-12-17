#include<iostream>
using namespace std;

class Student
{
	int rollno;
	char name[20];
	float per;
	public :
		void accept();
		void display();
};
//function defination outside class body
void Student :: accept()
{
	cout<<"Enter roll number";
	cin>>rollno;
	cout<<"Enter Name";
	cin>>name;
	cout<<"Enter Percentage";
	cin>>per;
}
//function defination outside class body
void Student :: display()
{
	cout<<"\nRoll Number = "<<rollno;
	cout<<"\nName = "<<name;
	cout<<"\nPercentage = "<<per<<"\n";
}

int main()
{
	Student sobj;
	sobj.accept();
	sobj.display();
	return 0;
}