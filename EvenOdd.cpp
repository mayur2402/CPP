#include<iostream>
using namespace std;
class Difference
{
	public :
		int No = 0,*Arr = NULL;
		Difference(int iArr[],int iNo)
		{
			this->Arr = iArr;
			this->No = iNo;
		}
		int Calculate()
		{
			int iCnt = 0,iAns = 0;
			for(iCnt = 0;iCnt < this->No;iCnt++)
			{
				if(this->Arr[iCnt] % 2 == 0)
				{
					iAns = iAns + this->Arr[iCnt];
				}
					else
				{
					iAns = iAns -this->Arr[iCnt];
				}
			}
			return iAns;
		}
};
int main()
{
	int iNo = 0,iCnt = 0,iSum = 0;
	int *iArr = NULL;
	cout<<"\nHow many numbers\t";
	cin>>iNo;
	iArr = new int[iNo];
	if(iArr == NULL)
	{
		cout<<"\nError : Unable to allocate memory"<<"\n";
		return -1;
	}
	cout<<"\nEnter "<<iNo<<" elements\n";
	for(iCnt = 0;iCnt < iNo;iCnt++)
	{  
		cin>>iArr[iCnt];
	}
	Difference dObj(iArr,iNo);
	iSum = dObj.Calculate();
	cout<<"Difference between sum of even elements and sum of odd elements are "<<iSum<<"\n";
	delete iArr;
	return 0;
}
