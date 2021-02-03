#include<iostream>
using namespace::std;
int main()
{
	char ch='\0';
	cout<<"\nPress any key\t";
	cin>>ch;
	if(isalpha(ch))
	{
		cout<<"\nAlphabet\n";
		if(isupper(ch))
		{
			cout<<"\nUppercase\tIn Lowercase\t";
			cout<<char(tolower(ch));
		}
		else if(islower(ch))
		{
			cout<<"\nLowercase\tIn Uppercase\t";
			cout<<char(toupper(ch));
		}
	}
	else if(isdigit(ch))
	{
		cout<<"\nDigit\n";
	}
	else
	{
		cout<<"\nSymbol\n";
	}
}
