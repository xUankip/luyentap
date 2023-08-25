#include <stdio.h>
#include <math.h>
int main(){
	float r, c, s;
	printf("ban kinh cua duong tron la : r= \n");
	scanf("%f",&r);
	c=2*3.14*r;
	s=3.14*r*r;
	printf("ket qua tinh chu vi va dien tich la : \n\n");
	printf("ban kinh hinh tron %8f met\n", r);
	printf("chu vi hinh tron %8f met \n", c);
	printf("dien tich hinh  tron %8f met vuong\n\n", s);
	// vi du 2
	printf("Data type  \t| Size of data type \n");
	printf("int \t| %d byte \n", sizeof(int));
	printf("float \t| %d byte \n", sizeof(float));
	printf("unsignint \t| %d byte \n", sizeof(unsigned int));
	printf("shortint \t| %d byte \n", sizeof(short int));
	printf("longint \t| %d byte \n", sizeof(long  int));
	printf("double \t| %d byte \n", sizeof(double));
	return 0;
}
