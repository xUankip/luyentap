#include <stdio.h>
#include <math.h>
	int main(){
		float t, v, a;
		scanf("%f%f%f", &t, &v, &a);
		float s=2*t+2*v+a;
		(s>=40) ? printf("PASS") : printf("FAIL");
		return 0;
	}