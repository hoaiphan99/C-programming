/*
whlie(expression){
    statement
}
sự hoạt động của vòng lặp while
bước 1: Tính giá trị của biểu thức sau while 
bước 2 : Nếu giá trị của biểu thức tính được là sai (==0) thì kết thúc vong lặp while 
bước 3 : Nếu giá trị của biểu thức là đúng(!=0) thì thực hiện khối lệnh sau while 
bước 4 : Quay ngược lại bước 1
*/
#include<stdio.h>
int main(){
    int n;
    int tong =0;
    printf("Nhap vao n=");
    scanf("%d",&n);
    int i=0;
    while (i<=n){
        tong= tong +i;
        i++;
       
    }
     printf("\ntong = %d",tong);
}