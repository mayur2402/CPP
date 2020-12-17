#include<iostream>
using namespace std;

class Student
{
	int rollno;
	char name[20];
	float per;
	public :
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
	sobj.display();

	//Creating object of class using pointer
	Student *ptr = NULL;
	ptr = new Student;
	ptr->accept();
	ptr->display();

	return 0;
}