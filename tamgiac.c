#include <stdio.h>
 
int main() {
   int n,i,j;
	n = 0;
	printf("Ve tam giac sao :\n");
	scanf("%d", &n);
   for(i = 0; i <= n; i++) {
      for(j = 0; j <= n-i; j++)
         printf(" ");
 
      for(j = 0; j <= i; j++)
         printf("* ");
      printf("\n");
   }
   return 1;
}
