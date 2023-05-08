#include<stdio.h>
int main(){
    int a,b ,min,max;
    printf("nhap gia tri a,b:\n");
    scanf("\n %d%d",&a,&b);
    min = (a<b)? a: b;
    max = (a>b)? a: b;
    printf("max=%d",max);
    printf("\nmin=%d",min);
    //printf("a la so: %s",(a>b)?"max":"min");
    //printf("\nb la so: %s",(b>a)?"max":"min");
}