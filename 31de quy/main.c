/*
kieu_tra_ve hamdequy(){
    hamdequy();/*gọi lại chinh no
 }

 int main(){
    hamdequy();
 }
 hàm đẹ quy gồm 2 phần:
 - điều kiện thoát khỏi hàm đệ quy 
 - các bước xử lý(thân hàm )có chứa lời gọi đẹ quy
 Bài tập : tính gia thừa của 1 số n bằng hàm đê quy
*/
#include<stdio.h>
int giaithua(int n){
   if(n==0||n==1)
        return 1;
    else return n*giaithua(n-1);

}
int main(){
    int n, gt;
    do{
        printf("nhap vao n(n>1):");
        scanf("%d",&n);
    }while(n<0);
   
    gt= giaithua(n);
    printf("%d!=%d",n,gt);
}