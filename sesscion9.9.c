#include <stdio.h>
void main(){
	int x;
	char i, ans;
	i =' ';
	do{
		x=0;
		ans='y';
		printf("\nEnter sequence of character:");
		
		do{
			i=getchar();
			x++;
		}
	while (i!= '\n');
	i=' ';
	printf("\nThe number of charecter entered is : %d", --x);
	printf("\nMore sequence (Y/N) ?");
	ans = getchar();
}
while(ans == 'Y'|| ans == 'y');
}
