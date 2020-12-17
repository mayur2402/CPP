#include<iostream>
using namespace std;

class Student
{
	int rollno;
	char name[20];
	float per;
	static char teacher[20];

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

	static void displayTeacher()
	{
		//static method can access only static members 
		cout<<"\nName of teacher is "<<teacher<<"\n";
	}
};
//static member initialization
char Student::teacher[20] = "Poonam Ponde";

int main()
{
	//accessing static method using class name
	Student::displayTeacher();
	Student sobj;
	sobj.accept();
	sobj.display();

	Student *ptr = NULL;
	ptr = new Student;
	ptr->accept();
	ptr->display();

	return 0;
}