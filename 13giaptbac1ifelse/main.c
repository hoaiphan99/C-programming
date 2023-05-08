#include <stdio.h>
int main(){
    float a,b,x;
    printf("nhap vao he so cua phuong trinh ax+b=0");
    printf("\n a= ");
    scanf("%f",&a);
    printf(" b= ");
    scanf("%f",&b);
    if(a!=0){
        x= -b/a;
        printf("\nphuong trinh co nghiem la: x=%.2f",x);
    }
    else{
        if(b==0){
            printf("\nphuong trinh co vo so nghiem");
        }
        else{
            printf("\nphuong trinh vo nghiem");
        }
    }

}