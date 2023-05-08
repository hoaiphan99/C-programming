/*
    cấu truc 
    switch(case-value){
        case1:
        // execute you code 
        break;
        case n:
         // execute you code 
        break;
        default:// xư ly tình huống ngược lại
         // execute you code 
        break;
    }
    break : kết thúc 1 vòng lặp hoặc 1 câu lệnh;

*/
#include<stdio.h>
int main(){
    int n;
    printf("nhap vao so n=");
    scanf("%d",&n);

    switch(n){
        case 1:
            printf("\n chu nhat");
            break;
        case 2:
             printf("\n thu hai");
            break;
        case 3:
             printf("\n thu ba");
            break;
        case 4:
             printf("\n thu tu");
            break;
        case 5:
             printf("\n thu nam");
            break;
        case 6:
             printf("\n thu sau");
            break;
        case 7:
             printf("\n thu bay");
            break;
        default:
            printf("\n n nhap khong hop le");
            break;
    }
}