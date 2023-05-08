/*
giai phuon trinh bac 2
ax^2+bx+c=0
*/
#include<stdio.h>
#include<math.h>
int main(){
    // khai bao 
    float a,b,c,x1,x2,delta;
    // nhâp lieu
    printf("nhap vao he so a,b,c:\n");
    scanf("%f%f%f",&a,&b,&c);
    // tinh toan 
    if(a==0){
        printf("he so a phai khac 0");
    }
    else{
        delta = pow(b,2)-4*a*c;
        printf("delta=%.2f",delta);
        if(delta>0){
            x1=(-b-sqrt(delta))/(2*a);
            x2=(-b+sqrt(delta))/(2*a);
            printf("\nphuong trinh co nghiem phan biet: x1=%.2f\n x2=%.2f",x1,x2);
            }
        else if(delta==0){
            x1= -b/(2*a);
            printf("phuong trinh có nghiem kep x1=x2=%.2f",x1);
        }
        else{
            printf("phuong trinh vo nghiem");
        }
    }
    // xuất kết quả

}