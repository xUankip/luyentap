#include <stdio.h>
#include <math.h>
void main(){
	float luong;
	char ch;
	printf("Nhap muc luong va loai nhan vien");
	fflush(stdin);
	scanf("%f %c", &luong, &ch);
	switch (ch){
		case 'a': printf("Tong luong nhan duoc la %f",luong + 300);
		break;
		case 'b': printf("Tong luong nhan duoc la %f", luong + 200);
		break;
		default: printf("tong luong nhan duoc la %f", luong + 100);
		break;
	}
}
