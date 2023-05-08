/*
- loại 1 nới rộng 
short -- int -- long -- float-- double 
làm tròn dữ liệu có kích thước nhỏ hơn sang kiểu dữ liệuu có kích 
thước lớn hơn 
vd 
long x=5
float y=x
- thu hẹp 
double -- float -- long -- int -- short 
là quá trình làm tròn kiểu dữ liệu có kích thước lớn hơn sang kiểu dữ liệu
có kích thước nhỏ hơn. kiểu này có thể làm mất thông tin
float x= 5.3
long y= (long )5.3   lúc này y chỉ là 5 và mất đi 0.3
*/
#include <stdio.h>
int main(){
    int a,b;
    printf("nhap vao a,b:\n");
    scanf("\n%d%d",&a,&b);
    
    float ketqua = (float)a/(float)b;// ép kiêu a,b để chia lấy được số thực.
    int ketqua2= (int)ketqua;
    printf("ket qua %d/%d= %.2f", a,b,ketqua);
    printf("\nket qua2=%d ",ketqua2);


}