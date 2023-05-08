/*
cấu trúc 1 hàm 
return_type fuction_name(parameter){
    // body of the fuction
}
*/
// viết chương trình nhập vào số n, kiẻm tra n có phải số nguyên tố hay không và xuất két quả ra màn hình?
#include<stdio.h>
#include<math.h>
int kie_tra_snt(int x){
    if(x<=1) 
        return 0;
   
    for(int i=2;i<=x-2;i++){
        if(x%i==0)
            return 0;
    }
    return 1;
}
int main(){
    // nhập liệu
    int n;
    printf("nhap vao n=");
    scanf("%d",&n);
    //gọi hàm
    int kt = kie_tra_snt(n);
    //xử lý và xuất kết quả
    if(kt ==0){
        printf("n khong phai so nguyen to");
    }
    else{
        printf("n la so nguyen to");
    }
}