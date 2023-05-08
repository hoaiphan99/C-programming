// tính gia thừa số(n>=0)được nhập từ bàn phím
#include<stdio.h>
int main(){
    int n, giathua;
    do{
        printf("nhap vao n>=0\n");
        scanf("%d",&n);
    }while(n<0);

    giathua = 1;

    for(int i=1;i<=n;i++){
        giathua= giathua * i;
    }

    printf("\ngia thua=%d",giathua);

}