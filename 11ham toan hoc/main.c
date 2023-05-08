/*
- thư viện math.h 
+ ceil (number) : làm tròn lên một số đã cho nó trả về 
giá trị số nguyên lớn hơn hoặc bằng 1 số đã cho
+ floor (number): làm tròn xuống một số đã cho nó trả về 
giá trị số nguyên nhỏ hơn hoặc bằng 1 số đã cho
+ sprt (number) trả về căn bậc 2 của một số đã cho
+ pow (base, exponent) trả về một số mũ của một số đã cho
+ abs (number)  trả về giá trị tuyết đối của số đã cho 
+ fabs trị tuyệt đối cho số thực 
*/
#include<stdio.h>
#include<math.h>
int main(){
    int a= 5;
    int b= 2;
    float kq= (float)a/b;
    printf("\nket qua lam tron xuong(a/b)=%f",floor(kq));
    printf("\nket qua lam tron len(a/b)=%f",ceil(kq));
    printf("\nsqrt(9)=%f",sqrt(9));
    printf("\n5^2=%f",pow(5,2));
    printf("\n|-5|=%d",abs(-5));
    printf("\n|-5.2|=%f",fabs(-5.2));

}