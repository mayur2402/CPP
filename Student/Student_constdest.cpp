#include <iostream>
using namespace std;

class Student
{
	private :
	int rollno,mobile;
//	char *name,*email;
	float per;

	char *name = new char[50];
	char *email = new char[50];
	public :
	Student()
	{
		rollno = 0;
		mobile = 0;
		name = NULL;
		email = NULL;
		per = 0.0f;
	}
	Student(int rollno,char name[],int mobile,float per)
	{
		this->rollno = rollno;
		this->mobile = mobile;
		this->name = name;
		this->per = per;
		this->email = NULL;
	}
	Student(int rollno,char name[],char email[],float per)
	{
		this->rollno = rollno;
		this->name = name;
		this->email = email;
		this->per = per;
		this->mobile = 0;
	}
	Student(int rollno,char name[],int mobile,char email[],float per)
	{
		this->rollno = rollno;
		this->mobile = mobile;
		this->name = name;
		this->email = email;
		this->per = per;
	}
	void display()
	{
		cout<<"\nRoll Number = "<<rollno;
		cout<<"\nName = "<<name;
		cout<<"\nMobile number = "<<mobile;
		cout<<"\nEmail = "<<email;
		cout<<"\nPercentage = "<<per<<"\n";
	}
	~Student()
	{
	}
};

int main()
{
	int rollno,mobile;
	char name[20],email[20];
	float per;
	int ch = 0;
	cout<<"\nEnter roll number";
	cin>>rollno;
	cout<<"\nEnter name ";
	cin>>name;
	cout<<"\nEnter Percentage";
	cin>>per;
	cout<<"\nEnter your choice\n1.mobile\n2.email\n3.both\n";
	cin>>ch;
	switch(ch)
	{
		case 1:
		cout<<"\nEnter mobile number";
		cin>>mobile;
		break;

		case 2:
		cout<<"\nEnter email";
		cin>>email;
		break;

		case 3:
		cout<<"\nEnter mobile number";
		cin>>mobile;
		cout<<"\nEnter email";
		cin>>email;
		break;

		default :
		cout<<"Enter valid choice";
		break;
	}
	if(ch == 1)
	{
		Student sobj1(rollno,name,mobile,per);
		sobj1.display();
	}
	else if(ch == 2)
	{
		Student sobj2(rollno,name,email,per);
		sobj2.display();
	}
	else
	{
		Student sobj3(rollno,name,mobile,email,per);
		sobj3.display();
	}
	return 0;
}
