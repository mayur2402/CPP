#include <iostream>
#include <stdlib.h>
using namespace  std;

int main(int argc,char const *argv[]) {

	if (argc == 1) {
		printf("Enter numbers to sort\n");
		exit(-1);
	}
	int len = argc-1,j = 0;

	long arr[len];
	char *ch;

	for (int i = 0,j = 1;i < len;i++,j++) {
		arr[i] = strtol(argv[j],&ch,10);
	}
	
	if(*ch != 0){
		cout<<"Enter valid numbers\n";
		exit(-1);
	}

	long key;

	// 7 6 5 4 3 

	for(int i = 1;i < len;i++) {
		key = arr[i];
		for(j = i-1;j >= 0;j--) {
			if(arr[j] > key) {
				arr[j+1] = arr[j];
			}
			else{
				break;
			}
		}
		arr[j+1] = key;
	}

	for(int i = 0;i < len;i++) {
		printf("%ld\t",arr[i]);
	}
	printf("\n");
}