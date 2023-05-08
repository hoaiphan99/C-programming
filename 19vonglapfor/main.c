/*
for(exper1;exper2;exper3){
    statement
}
trong do
biểu thức 1: là biểu thức khởi đầu 
biểu thức 2: biểu thức điều kiện- điều kiện lặp
biểu thức 3: bước nhảy- thường dùng với ý nghĩa thay đổi bước nhảy.

*/
#include<stdio.h>
int main(){
    /*int i;
    for(i=0;i<=9;i++){
        printf("\n%d",i);
    }*/
    // xuat từ 0 tới n
    int n;
    int i;
    printf("nhap n=");
    scanf("%d",&n);
    for(i=0;i<=n;i++){
         printf("\n%d",i);
    }

}