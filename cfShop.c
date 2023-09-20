#include <stdio.h>
void displaymenu();
void placeoder(char op);
float caculatorTotalcost(char op,int quantity);
//int coffee shop
int main(){
    char op;
    int quantity;
    do{
        displaymenu();
        printf("Enter your option:");
        scanf("%c", &op);
        if (op != 'd'){
            printf("\n Enter quantity :\n");
            scanf("%d", &quantity);
            placeoder(op);
            float totalcost=caculatorTotalcost(op, quantity);
            printf("total cost :%f\n\n", totalcost);
        }
    }
    while (op!='d');
    return 0;
}
void displaymenu(){
    printf("THe coffee shop menu:\n");
    printf("a. Esspreso -2.50$\n");
    printf("b. cappuchino -3.5$\n");
    printf("c. Americano -2.00$\n");
    printf("d. Quit\n");
}
void placeoder(char(op)){
    switch(op){
        case 'a': printf("Esspreso");
        break;
        case 'b': printf("cappuchino");
        break;
        case 'c': printf("Americano");
        break;
        default: printf("Invalid");
    }
}
float caculatorTotalcost(char op, int quantity){
    float price;
        switch (op){
            case 'a':
            price=2.5;
            break;
            case 'b':
            price=3.5;
            break;
            case 'c':
            price=2.00;
            break;
            default:
            price=0.00;
        }
        return price*quantity;
}