#include <stdio.h>
#include<ctype.h>
int main(){
	char a;
	printf("give character:");
	scanf("%c",&a);
	if(isalpha(a)){
		a=tolower(a);
	}
	if((a=='a')||(a=='e')||(a=='i')||(a=='o')||(a=='u')){
		printf("vowel");
	}
	else {
	printf("consonant");
	}
	return 0;
	}
