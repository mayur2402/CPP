#include <iostream>
#include <stdlib.h>

using namespace std;

int main(int argc,char const *argv[]){

	if (argc != 2) {
		cout<<"Enter only one argunment\n";
		exit(-1);
	}

	char *ch;
	long toLong = strtol(argv[1],&ch,10);

	if (*ch != 0) {
		cout<<"Enter valid number\n";
		exit(-1);
	}

	for (int i = 1; i <= 10; i++) {
		cout<<i*toLong<<"\n";
	}

	return 0;
}