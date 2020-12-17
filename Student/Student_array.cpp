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

int main()
{
	int no = 0;
	cout<<"How many students";
	cin>>no;
	//array of object
	Student sobj[no];

	int i = 0;
	for(i = 0;i < no;i++)
	{
		sobj[i].accept();
		sobj[i].display();
	}
	return 0;
}