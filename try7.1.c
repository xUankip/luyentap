#include <stdio.h>
void main(){
	float a, b;
	printf("Nhap 2 so a, b:");
	scanf("%f%f",&a, &b);
	if(a>=b) {
		if((int)a % (int)b==0)
		printf("A chia het cho B");
	}
	else{
		printf("A khong chia het cho B");
	}
	return 0;
}

