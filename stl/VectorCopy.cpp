#include <iostream>
#include <vector>

using namespace std;

int main(){
	vector<int> v,v2;
	int num = 0,i = 0,n = 0;

	printf("How many elements in vector\t");
	scanf("%d",&num);

	for(i = 0;i < num;i++){
		printf("Enter %d value\t",(i+1));
		scanf("%d",&n);
		v.push_back(n);
	}

	printf("original vector\n");
	for (i = 0;i < num;i++){
		printf("%d\t",v[i]);
		v2.push_back(v[i]);
	}
	printf("\n");

	printf("Copied vector\n");
	for(i = 0;i < num;i++){
		printf("%d\t",v2[i]);
	}
	printf("\n");

	printf("location of first vector %ld\n",(long)&v);
	printf("location of first vector %ld\n",(long)&v2);
}