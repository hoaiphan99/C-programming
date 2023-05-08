/* 
cấu trúc 1 
1 if () {
    code được thực hiện khi điều kiện đúng.
}

2 cấu trúc 2 : if else
if () {
    code được thực hiện khi điều kiện đúng.
}
else{
    code được thực hiện khi điều kiện sai.
}

3
if (dk1) {
    code được thực hiện khi điều kiện 1 đúng.
}
else if(dk2){
    code được thực hiện khi điều kiện 1 sai, 2 đúng.
}
else{
    code được thực hiện khi điều kiện sai.
}
*/
#include<stdio.h>
int main(){
    // nhập số n kiểm tra n nhỏ hơn 20, nếu có thông báo ra màn hình 
    int n;
    printf("nhap vao n:");
    scanf("%d",&n);
    if(n<20){
        printf("\n so nhap vao nho hon 20");
    }
    // nhap nao n xuất ra màn hình n là chẵn hay lẻ 
    if(n%2 == 0){
        printf("\n so nhap vao la so chan");
    }
    else{
        printf("\n so nhap vao la so le");
    }

    // nhap vao giờ và cho biết là buổi chiều hay sáng hay tối.
    if(n>=1 & n<=11){
        printf("\n morning");
    }
    else if(n>=12 & n<=18){
        printf("\n afternoon");
    }
    else if(n>=19 & n<=24){
        printf("\n tonight");
    }
    else{
         printf("\n nhap lai gio");
    }
 }