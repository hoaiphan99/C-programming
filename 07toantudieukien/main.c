/*toán tủ điều kiện
cấu trúc: biểu thức 1 ?  biểu thức 2: biểu thức 3;
 kết quả được quyết định như sau
 + Nếu biểu thức 1 là true , thì biểu thức 2 được tính toán trở thành giá trị của toàn bộ biểu thức?
 + ngược lại nếu biêu thức 1 là flase thì biểu thức 3 được tính toán trở thành toàn bộ giá trị của toàn bộ biểu thức ?
 ví dụ
 x=(5>=3)?1:0
 diễn giải 5>=3(biểu thức 1) đúng trả về x=1 
 y=(5<=3)?1:0 y trả về kết quả 0.
*/
#include<stdio.h>
int main(){
    int a;
    printf("nhap a=");
    scanf("%d",&a);
    printf("%d la so %s",a,(a%2==0)? "chan":"le");// chan lẻ là 1 chuôi truyền vô %s

}