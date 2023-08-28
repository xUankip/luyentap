#include <stdio.h>
#include <math.h>
	void main(){
		float com=0, sale_amt;
		char grade;
		printf("Enter the sale amout:");
		scanf("%f", &sale_amt);
		printf("\nEnter the grade");
		scanf(" %c", &grade);
		if (sale_amt > 10000)
			if (grade =='A')
				com=sale_amt*0.1;			
			else
				com=sale_amt*0.08;		
		else
			com=sale_amt*0.05;
			printf("\n Commission = %f", com);
		
		return 0;
	}
