#include <stdio.h>
int main() {
	int a;
	printf("give number:");
	scanf("%d",&a);
	if (a%2==0){
		printf("it is even");
	}
	else {
		printf("its is odd");
	}
	return 0;
}
