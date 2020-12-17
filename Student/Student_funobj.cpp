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
		//Passing object of class as a parameter of function
		int comparePercentage(Student);
};

void Student :: accept()
{
	cout<<"Enter roll number";
	cin>>rollno;
	cout<<"Enter Name";
	cin>>name;
	cout<<"Enter Percentage";
	cin>>per;
}

void Student :: display()
{
	cout<<"\nRoll Number = "<<rollno;
	cout<<"\nName = "<<name;
	cout<<"\nPercentage = "<<per<<"\n";
}

int Student :: comparePercentage(Student other)
{
	if(this->per == other.per)
	{
		return 1;
	}
	else
	{
		return -1;
	}
}

int main()
{
	int ret = 0;
	Student sobj;
	sobj.accept();
	sobj.display();

	Student oobj;
	oobj.accept();
	oobj.display();

	ret = sobj.comparePercentage(oobj);

	if(ret == 1)
	{
		cout<<"Same Percentage\n";
	}
	else
	{
		cout<<"Not same Percentage\n";
	}
	return 0;
}