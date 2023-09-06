#include <stdio.h>
#include <math.h>
void main(){
	char ch;
	scanf("%c", &ch);
	switch (ch){
		case 'a':
		case 'A': printf("Ada");
		break;
		case 'b':
		case 'B': printf("Basic");
		break;
		case 'c':
		case 'C': printf("COBOL");
		break;
		case 'd':
		case 'D': printf("dBase III");
		break;
		case 'f': printf("Fortran");
		break;
		default: printf("Do not  match");
		break;
}
}
