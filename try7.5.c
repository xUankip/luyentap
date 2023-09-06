#include <stdio.h>
float main(){
	float diem;
	printf("Nhap so diem");
	scanf("%f", &diem);
	if(diem>=75){
		printf("Grade A");
	}
		if(diem<=75&&diem>=60){
		printf("Grade B");
	}
		if(diem<60&&diem>=0){
		
		printf("Grade F");
	}
}
