/*
	Accept N numbers from user and display all such elements which are
	divisible by 5.
	Input :N	: 6
	Elements	: 85 66 3 80 93 88
	Output		: 85
*/

#include<iostream>
using namespace std;
class Five
{
	public :
		int *arr,iNo;
		Five(int *ptr,int iLength)
		{
			this->arr = ptr;
			this->iNo = iLength;
		}
		void DivisibleByFive()
		{
			int iCnt = 0;
			for(iCnt = 0;iCnt < this->iNo;iCnt++)
			{
				if(this->arr[iCnt] % 5 == 0)
				{
					cout<<this->arr[iCnt]<<"\t";
				}
			}
			cout<<"\n";
		}
};

int main()
{
	int iNo = 0,iCnt = 0;
	int* iArr;
	cout<<"\nHow many numbers\t:";
	cin>>iNo;
	if(iNo <= 0)
	{
		return -1;
	}
	iArr =  new int[iNo];
	if(iArr == NULL)
	{
		cout<<"\nError : Unable to allocate memory\n";
		return -1;
	}
	cout<<"\nEnter elements\n";
	for(iCnt = 0;iCnt < iNo;iCnt++)
	{
		cin>>iArr[iCnt];
	}
	Five fObj1(iArr,iNo);
	fObj1.DivisibleByFive();

	return 0;
}
