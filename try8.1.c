#include <stdio.h>
#include <math.h>
void main(){
	float x, y;
	printf("Nhap 2 so X va Y");
	scanf("%f %f", &x, &y);
	if (x<2000 || x>3000){
		printf("X");
	}
		if (y>100 && y<500){
		printf("Y");
	}
}

