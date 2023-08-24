#include <stdio.h>
#include <math.h>
    int main(){
        int i, a, b, c, d;
        scanf("%d%d%d%d%d", &i, &a, &b, &c, &d);
        printf("r1= ++i %% 7= %d\n", ++i % 7 );
        printf("r2= 5*(c-3+d)= %d\n", 5*(c-3+d));
        printf("r3= a*(b+c/d)-22= %d\n", a*(b+c/d)-22);
	return 0;
    }