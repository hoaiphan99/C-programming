#include<stdio.h>
 int main(){
    int x;
    float y;
    char c;
    
    // nhap vao ky tu
    printf("\nnhap vao ky tu c:");
    scanf("%c",&c); 
    printf("\n ky tu c da nhap la: %.c",c);
    // nhap vao so nguyen
    printf("\nnhap vao gia tri cua x:");
    scanf("%d",&x); 
    printf("\ngia tri x da nhap la: %d",x);
    // nhap vao so thuc
    printf("\nnhap vao gia tri so thuc y:");
    scanf("%f",&y); 
    printf("\ngia tri x da nhap la: %.2f",y);
    // nhap nhieu du lieu cung 1 ham
    
    float x1,x2,x3;
    printf("nhap vao gia tri cua x1,x2,x3");
    scanf("%f%f%f",&x1,&x2,&x3);
    printf("x1=%f, x2=%f,x3=%f",x1,x2,x3);

    
 }