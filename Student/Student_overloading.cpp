#include <iostream>
using namespace std;

class Student
{
	int rollno;
	char name[20];
	public :
		void accept();
		//Function Overloading
		void display(int);
		void display(char *);
		void display();
};

void Student :: accept()
{
	cout<<"\nEnter roll number";
	cin>>rollno;
	cout<<"\nEnter name";
	cin>>name;
}

void Student :: display()
{
	cout<<"Roll number = "<<rollno<<"\nname = "<<name<<"\n";
}

void Student :: display(int roll)
{
	if(this->rollno == roll)
	{
		cout<<"\nname of Student "<< this->name;
	}
	else
	{
		cout<<"\nWrong roll number\n";
	}
}

void Student :: display(char *name)
{
	int i = 0;
	while(*name != '\0' && this->name[i] != '\0')
	{
		if(*name == this->name[i])
		{
			name++;
			i++;
		}
		else
		{
			break;
		}
	}
	if(*name == '\0' && this->name[i] == '\0')
	{
		cout<<"Roll number is "<<this->rollno<<"\n";
	}
	else
	{
		cout<<"\nWrong name\n";
	}
}

int main()
{
	Student sobj;
	sobj.accept();
	sobj.display();

	int roll;
	char name[20];

	cout<<"Enter roll number ";
	cin>>roll;
	sobj.display(roll);

	cout<<"\nEnter name";
	cin>>name;
	sobj.display(name);

	return 0;
}