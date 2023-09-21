#include <stdio.h>
int chuvi(int a, int b);
int dientich(int a, int b);
int main(){
    int x,y;
    printf("Nhập cạnh dài dài:");
    scanf("%d", &x);
    printf("\nNhập chiều rộng :");
    scanf("%d", &y);
    float s=dientich(x, y);
    printf("Dien tich hinh chu nhat la %f", s);
    float c=chuvi(x, y);
    printf("\nchu vi hinh chu nhat la %f", c);
    return 0;
}
int dientich(int a, int b){
    int s;
    s=a*b;
    return s;
}
int chuvi(int a, int b){
    int c;
    c=2*(a+b);
    return c;
}