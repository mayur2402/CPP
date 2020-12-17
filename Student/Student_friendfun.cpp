#include<iostream>
using namespace std;

class Student
{
	private :
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
	friend void principal(Student,int);
};

void principal(Student sobj, int roll)
{
	if(sobj.rollno == roll)
	{
		cout<<"\nPercentage of roll number = "<<roll<<" is "<<sobj.per<<"\n";
	}
	else
	{
		cout<<"\nwrong roll number\n";
	}
}

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

	principal(sobj,20);

	return 0;
}