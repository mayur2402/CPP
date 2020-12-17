#include<iostream>
using namespace std;

class Student
{
	int rollno;
	char name[20];
	float per;
	public :
	void accept();
	//inline function
	inline void display()
	{
		cout<<"\nRoll Number = "<<rollno<<"\nName = "<<name<<"\nPercentage = "<<per<<"\n";
	}
};
//class function inline
inline void Student :: accept()
{
	cout<<"Enter roll number";
	cin>>rollno;
	cout<<"Enter Name";
	cin>>name;
	cout<<"Enter Percentage";
	cin>>per;
}

int main()
{
	Student sobj;
	sobj.accept();
	sobj.display();
}