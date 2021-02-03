#include<iostream>
#include <bits/stdc++.h>
using namespace std;

class Armstrong
{
	int iNo = 0,count = 0,temp = 0;
	public :
		Armstrong(int iNo)
		{
			this->iNo = iNo;
			while(iNo != 0){
				this->count++;
				iNo /= 10;
			}
		}
		bool ChkArmstrong()
		{
			int iDigit = 0,iCube = 0,iSum = 0;
			int iN = this->iNo;
			while(iN != 0)
			{
				iDigit = iN % 10;
				iCube = pow(iDigit,count);
				iSum = iSum + iCube;
				iN = iN / 10;
			}
			if(iSum == this->iNo)
			{
				return true;
			}
			else
			{
				return false;
			}
		}

};

int main()
{
	int iNo = 0;
	bool isArmstrong = false;
	cout<<"\nEnter number \t:";
	cin>>iNo;

	Armstrong Aobj(iNo);
	isArmstrong = Aobj.ChkArmstrong();

	if(isArmstrong)
	{
		cout<<"Number is Armstrong\n";
	}
	else
	{
		cout<<"Number is not Armstrong\n";
	}

}
