#include <stdio.h>
#include<math.h>
int main() {
	int p,r,t,n,si,ci;
	printf("1.si or 2.ci");
	scanf("%d",&n);
	printf("enter principle:");
	scanf("%d",&p);
	printf("enter roi:");
	scanf("%d",&r);
	printf("enter time in months:");
	scanf("%d",&t);
	if (n==1)	{
		si=p*r*t;
		printf("the si is %d",si);
	}
	else if (n==2){
		ci=p*(1+(pow((r/100),t)));
		printf("the ci is %d",ci);
	}
	return 0;
	
}
