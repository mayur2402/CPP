#include <iostream>
#include <string.h>
using namespace std;

class Project
{
	protected :
	int pno = 0;
	char pname[50];
	char plang[20];
	public :
	Project()
	{
		pno = 0;
		strcpy(pname," ");
		strcpy(plang," ");
	}
	Project(int pno,char pname[],char plang[])
	{
		this->pno = pno;
		strcpy(this->pname,pname);
		strcpy(this->plang,plang);
	}
	void display()
	{
		cout<<"\nProject Number\t"<<this->pno;
		cout<<"\nProject Name\t"<<this->pname;
		cout<<"\nProject Language\t"<<this->plang<<"\n";
	}
};

class Student : public Project
{
	private :
	int rollno = 0;
	char name[50];
	public :
	Student()
	{
		rollno = 0;
		strcpy(name," ");
	}
	Student(int pno,char pname[],char plang[],int rollno,char name[]) : Project(pno,pname,plang)
	{
		this->rollno = rollno;
		strcpy(this->name,name);
	}

	void displaystudent()
	{
		cout<<"\nRoll Number of student is "<<this->rollno;
		cout<<"\nName of student is \t"<<this->name;
		display();
	}
};

int main()
{
	int rollno = 0,pno = 0;
	char name[50],pname[50],plang[20];

	cout<<"\nEnter Student Roll number";
	cin>>rollno;
	cout<<"\nEnter Student name";
	cin>>name;
	cout<<"\nEnter Project number";
	cin>>pno;
	cout<<"\nEnter Project name";
	cin>>pname;
	cout<<"\nEnter Project language name";
	cin>>plang;

	Student sobj(pno,pname,plang,rollno,name);
	sobj.displaystudent();
	return 0;
}