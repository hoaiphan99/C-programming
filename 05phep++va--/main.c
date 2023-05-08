/*a++   a= a+1 giá trị của a thay đổi sau khi kết thúc câu lệnh 
  ++a   a=a+1 giá trị của a thay đổi trước khi kết thúc câu lệnh
  b--   b=b-1 giá trị của b thay đổi sau khi kết thúc câu lệnh 
  --b   b=b-1 giá trị của b thay đổi trước khi kết thúc câu lệnh
*/ 

#include<stdio.h>
int main(){
    int a=5;
    int b=5;
    printf("%d", a++);
    printf("\n");
    printf("%d",a);
    printf("\n");
    printf("%d",++a);


    printf("\n%d", b--);
    printf("\n");
    printf("%d",b);
    printf("\n");
    printf("%d",--b);
}

