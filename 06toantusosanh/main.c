 #include<stdio.h>
 int main(){
    int a,b;
    printf("nhap vao gai tri a,b :\n");
    scanf("%d%d",&a,&b);
    printf("a=%d, b=%d",a,b);
    // printf("nhap vao gai tri b= :\n");
    // scanf("%d",&b);
    printf("\n%d==%d la %d", a,b, a==b);
    printf("\n%d>%d la %d", a,b, a>b);
    printf("\n%d<%d la %d", a,b, a<b);
    printf("\n%d>=%d la %d", a,b, a>=b);
    printf("\n%d<=%d la %d", a,b, a<=b);
    printf("\n%d!=%d la %d", a,b, a!=b);

 }