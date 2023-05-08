/*
số chính phương là những số có thể khai căn bậc 2 ra
bài tập : viết chương trình sử dụng hàm nhập
vào số (n>!), xuát ra tất cả các số chính phương nhỏ hơn hoặc bằng n
*/
#include<stdio.h>
#include<math.h>

int ktr_scp(int x){
    int kc =(int)sqrt(x);
    if(pow(kc,2)==x) 
        return 1;
    else 
        return 0;

}

int main(){
    int n;
    do{
        printf("nhap vao n\n");
        scanf("%d",&n);
    }
    while(n<1);
    printf("so nguyen so nho hon n la:");
    for(int i=2; i<=n; i++){
        if(ktr_scp(i)){
            printf("\n%d",i);
        }

    }
}