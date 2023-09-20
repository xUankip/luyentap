#include <stdio.h>
void displaymenu();//hàm display hiện ra menu ngay từ đầu
void placeoder(char op);// hàm char để oder
float caculatorTotalcost(char op,int quantity);//hàm tính tôgr tiền
//int coffee shop
int main(){
    char op;
    int quantity;//khai báo sự lựa chọn và số lượng
    do{
        displaymenu();
        printf("Enter your option:");
        scanf("%c", &op);//nhập giá trị chữ vì là char op
        if (op != 'd'){
            printf("\n Enter quantity :\n");
            scanf("%d", &quantity);
            placeoder(op);
            float totalcost=caculatorTotalcost(op, quantity); //in ra hàm caculatortotal
            printf("total cost :%f\n\n", totalcost);
        }
    }
    while (op!='d');//khi giá trị nhập vào khác d kết thúc trương trình và in ra Invalid
    return 0;
}
//nội dung hàm menu hiện ra ngay từ đầu
void displaymenu(){
    printf("THe coffee shop menu:\n");
    printf("a. Esspreso -2.50$\n");
    printf("b. cappuchino -3.5$\n");
    printf("c. Americano -2.00$\n");
    printf("d. Quit\n");
}
void placeoder(char(op)){ //sử dụng switch case để tuỳ biến và in ra sự lựa chọn
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
float caculatorTotalcost(char op, int quantity){// tính toán giá tiền dựa trên hàm char op và int quantity
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