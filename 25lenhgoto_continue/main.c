/*
lệnh goto : cung cấp một bước nhảy vô điều kiện từ (goto)đên 
một câu lệnh có nhãn trong cùng 1 hàm.
lệnh continue là lệnh mà khi gặp nó thì chương trình sẽ bỏ qua những 
câu lệnh phía dưới (trong cùng 1 câu lệnh lặp)để thực hiện 1 vòng lặp mới 
cú pháp : continue;
*/

#include<stdio.h>
int main(){
    int n;
    nhap:
        printf("nhap n=");
        scanf("%d",&n);
    if(n<=0) goto nhap;
    printf("\n day so le:");
    for(int i= 1;i<=n;i++){
        if(i%2==0) continue;
        printf("\n%d",i);
    }
}