#include<iostream>
#include<math.h>
using namespace::std;
int main()
{
	int n1=0,n2=0,ans=0;
	cout<<"Enter two numbers";
	cin>>n1>>n2;
	ans=((n1+n2)+(abs(n1-n2)))/2;
	cout<<"Max is "<<ans;
}
