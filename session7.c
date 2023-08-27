#include <stdio.h>
void main(){
	char ch;
	printf("\nENter a character:");
	scanf("%c",&ch);
	if (ch < 'a'||ch > 'z' ){
	printf("The character is not available\n");
}
	else{
		switch (ch){
			case 'a':
			case 'i':
			case 'e':
			case 'u':
			case 'o':
				printf("The character is a vowel \n");
				break;
			case 'z':
				printf("The last character");
				break;
			default :
				printf("unavailable");
				break;		
		}
	}
}
