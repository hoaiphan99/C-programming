/*
thực hiện do trước rồi mới kiểm tra điều kiện ở while
do{
    statement
}
while (expresion);
sự hoạt động
bước 1: thực hiện khối lệnh sau do 
bước 2: kiểm tra giá trị biểu thức sau while nếu giá trị đúng khác 0 thì nặp lại bước 1 nếu sai thì kết thúc vòng lặp

*/

#include<stdio.h>
int main(){
    int c;
    do{
        printf("\n menu");
        printf("\nnhap vao so 0 de thoat");
        printf("\nnhap vao so bat ky de tiep tuc");
        scanf("%d",&c);
    }
    while(c!=0);
}