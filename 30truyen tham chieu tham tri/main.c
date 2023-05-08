/*
+  truyền tham chiếu: là truyền ĐỊA CHỈ ô nhớ của biến
do đó khi thay đổi giá trị của biến bên trong phương thức thì giá 
trị của biến cũng bị thay đổi bên ngoiaf phương thức.
GIÁ TRỊ BIẾN SẼ THAY ĐỔI Ở NGOÀI HÀM KHI KẾT THÚC
+ Truyền tham trị : là truyền GIÁ TRỊ của biến(không phải là đại chỉ ô nhớ )
GIÁ TRỊ BIẾN KHÔNG BỊ THAY ĐỔI BÊN NGOÀI HÀM(KHI KẾT THÚC)
 

BÀI TẬP : VIẾT CHƯƠNG TRÌNH NHẬP VÀO 2 SỐ NGUYÊN A, B SAU ĐÓ VIẾT HÀM HOÁN ĐỎI GIÁ 
TRỊ GIỮA 2 BIẾN A VÀ B VÀ XUẤT KẾT QUẢ RA MÀN HÌNH.
*/
#include<stdio.h>
// truyền tham trị 
void swap_thamtri(int a, int b){
    int temp= a;
    a=b;
    b=temp;
    // sau khi chạy hàm này xong giá trị biến không bị thay đổi ben ngoài hàm 
}
// truyền tham chiếu

void swap_thamchieu(int *a, int *b){
    int temp = *a;
    *a=*b;
    *b= temp;
}
   

int main(){
    int a,b;
    printf("nhap vao 2 so a,b:");
    scanf("%d%d",&a,&b);
    printf("\ngia tri ban dau:a= %d va b=%d",a,b);
    swap_thamtri(a,b);
    printf("\ngia tri hoan doi truoc:a= %d va b=%d",a,b);
    swap_thamchieu(a,b);
    printf("\ngia tri hoan doi sau:a= %d va b=%d",a,b);
}
