/*
A class of n students take an annual examination in m subjects.Write A program to read the
marks obtained by each student in various subjects and to compute and print the total marks
obtained by each of them.
*/

#include<iostream>
using namespace std;

class Exam
{
	public :
		int iExamNo = 0,i = 0,j = 0,Total = 0;
		int Marks[6] = {0};
		char Name[20] = {'\0'};

		void Result(int iSub)
		{
			cout<<"Marks obtain by Exam Number "<<iExamNo<<" is ";
			for(j = 0;j < iSub;j++)
			{
				Total = Total + Marks[j];
			}
			cout<<Total<<"\n";
			Total = 0;
		}
};

int main()
{
	int iSub = 0,i = 0,j = 0,iNo = 0;

	cout<<"\nHow many student appeared for an annual examination\t";
	cin>>iNo;

	cout<<"\nHow many subjects are there in annual examination\t";
	cin>>iSub;

	Exam E[iNo];
	cout<<"\n----------------------------------------------------\n";
	for(i = 0; i< iNo;i++)
	{
		cout<<"\nEnter Name of "<<(i+1)<<" student\t";
		cin>>E[i].Name;

		cout<<"\nEnter Exam Number of "<<E[i].Name<<"\t";
		cin>>E[i].iExamNo;

		for(j = 0;j < iSub;j++)
		{
			cout<<"\nEnter Marks of "<<(j+1)<<" Subject\t";
			cin>>E[i].Marks[j];
		}
		cout<<"\n----------------------------------------------------\n";
	}

	cout<<"\n----------------------------------------------------\n";
	cout<<"Result of annual examination";
	cout<<"\n----------------------------------------------------\n";
	for(i = 0;i < iNo;i++)
	{
		E[i].Result(iSub);
	}
	cout<<"----------------------------------------------------\n";
	return 0;
}