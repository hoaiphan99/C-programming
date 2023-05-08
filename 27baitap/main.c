/* viết chương trình sử dụng hàm để nhập vào số n(n>1) xuất
ra tất cả các số nguyên tố nhỏ hơn hoặc bằng n? 
*/
#include<stdio.h>
#include<math.h>

int ktr_snt(int x){
    if(x<=1)
     return 0;
    for(int j = 2;j<=sqrt(x);j++){
        if(x%j==0)
        return 0;
    }
    return 1;

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
        if(ktr_snt(i)){
            printf("\n%d",i);
        }

    }
}
