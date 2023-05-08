#include<stdio.h>

void innhiphan(int x){
    if(x==0)// điều kiện thoát khỏi hàm đệ quy
        return;
    else{// xử lý thân hàm có hàm đệ quy
        int r=x%2;
        innhiphan(x/2);
        printf("%d",r);
        
       
    }
        
}
int main(){
    int n;
    do{
        printf("nhap vao n=");
        scanf("%d",&n);
    }while(n<0);
    innhiphan(n);

}