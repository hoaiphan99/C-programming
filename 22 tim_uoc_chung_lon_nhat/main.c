#include <stdio.h>
int main(){
    int a,b,USCNL;
    printf("nhap vao a va b:\n");
    scanf("%d%d",&a,&b);
    if(a==0||b==0){
        USCNL= a+b;
        printf("USCNL=%d",USCNL);
    }
    else
    {
        while(a!=b)
         {
            if(a>b){
                a=a-b;
            }
            else{
                b=b-a;
            }
         }
        printf("uscnl = %d",a);
    }
   
}