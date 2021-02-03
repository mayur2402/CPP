#include <iostream>
using namespace std;

template <class T>

T Maximum(T iNo1,T iNo2,T iNo3)
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
	int iF2 = 0,iS2 = 0,iT2 = 0,iret2 = 0;
	cout<<"integer Number\n";
	cout<<"Enter First Number";
	cin>>iF2;
	cout<<"Enter Second Number";
	cin>>iS2;
	cout<<"Enter Third Number";
	cin>>iT2;
	
	iret2 = Maximum(iF2,iS2,iT2);

	cout<<"Largest Number is : "<<iret2<<"\n";

	double iF = 0,iS = 0,iT = 0,iret = 0;
	cout<<"Double Number\n";
	cout<<"Enter First Number";
	cin>>iF;
	cout<<"Enter Second Number";
	cin>>iS;
	cout<<"Enter Third Number";
	cin>>iT;
	
	iret = Maximum(iF,iS,iT);

	cout<<"Largest Number is : "<<iret<<"\n";

	char iF3 = 0,iS3 = 0,iT3 = 0,iret3 = 0;
	cout<<"Character Number\n";
	cout<<"Enter First Number";
	cin>>iF3;
	cout<<"Enter Second Number";
	cin>>iS3;
	cout<<"Enter Third Number";
	cin>>iT3;
	
	iret3 = Maximum(iF3,iS3,iT3);

	cout<<"Largest Number is : "<<iret3<<"\n";

	return 0;
}