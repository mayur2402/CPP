#include <iostream>
using namespace std;

int Maximum(int iNo1,int iNo2,int iNo3)
{
	if(iNo1 > iNo2)
	{
		if(iNo3 > iNo1)
		{
			return iNo3;
		}
		else
		{
			return iNo1;
		}
	}
	else
	{
		if(iNo3 > iNo2)
		{
			return iNo3;
		}
		else
		{
			return iNo2;
		}
	}
}

int main()
{
	int iF = 0,iS = 0,iT = 0,iret = 0;

	cout<<"Enter First Number";
	cin>>iF;
	cout<<"Enter Second Number";
	cin>>iS;
	cout<<"Enter Third Number";
	cin>>iT;
	
	iret = Maximum(iF,iS,iT);

	cout<<"Largest Number is : "<<iret<<"\n";

	return 0;
}