#include<stdio.h>
#include<math.h>
int main() {
	int n,m;
	float pi,s,l,area,peri;
	printf("ENTER THE SHAPE 1.SQUARE 2.RECTANGLE 3.CIRCLE 4.TRIANGLE");
	scanf("%d",&n);
	if (n==1){
		printf("1.AREA OR 2.PERIMETER:");
		scanf("%d",&m);
		printf("ENTER SIDE:");
		scanf("%f",&s);
		if (m==1){
			area=pow(s,2);
			printf("THE AREA ID %f",area);
		}
		if (m==2){
			peri=4*s;
			printf("THE PERIMETER IS %f",peri);
		}
	}
	if (n==2){
		printf("1.AREA OR 2.PERIMETER:");
		scanf("%d",&m);
		printf("ENTER LENGTH:");
		scanf("%f",&l);
		printf("ENTER BREADTH: ");
		scanf("%f",&s);
		if (m==1){
			area=l*s;
			printf("THE AREA IS %f",area);
		}
		if (m==2) {
			peri= 2*(l+s);
			printf("THE PERIMETER IS: %f",peri);
		}
	}
	if (n==3){
		printf("1.AREA OR 2.PERIMETER:");
		scanf("%d",&m);
		printf("ENTER RADIUS:");
		scanf("%f",&s);
		if (m==1) {
			pi=22/7;
			area=pi*(pow(s,2));
			printf("THE AREA IS %f",area);
		}
		if (m==2) {
			pi=22/7;
			peri=2*pi*s;
			printf("THE PERIMETER IS: %f",peri);
		}	
	}
	if (n==4){
		printf("1.AREA OR 2.PERIMETER:");
		scanf("%d",&m);
		printf("ENTER THE LENGTH");
		scanf("%f",&s);
		printf("ENTER THE HEIGHT: ");
		scanf("%f",&l);
		if (m==1) {
			area=(l*s)/2;
			printf("THE AREA IS: %f",area);
		}
		if(m==2) {
			peri=3*l;
			printf("THE PERIMETER IS: %f",peri);
		}
	}
	return 0;		
}
