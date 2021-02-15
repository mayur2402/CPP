#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	for (int i = 0; i < argc; i++)
	{
		cout<<argv[i]<<"\n";
	}
	cout<<"Length is "<<argc<<"\n";
	return 0;
}