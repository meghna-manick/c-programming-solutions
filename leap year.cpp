#include<stdio.h>
	int main() {
		int y;
		printf("ENTER TH YEAR:");
		scanf("%d",&y);
		if ((y%400==0)||(y%4==0&& y%100!=0)) 
		{
			printf("it is leap year");
		}
		else {
			printf("it is not a leap year");
		}
		return 0;
	}
