/*
bài tập : tìm số ngày trong tháng, ngày kế tiếp, ngày trước đó, ngày thứ bao nhiều
trong năm 
viết chương trình nhập ngày, tháng, năm
a. hãy cho biết tháng đó có bao nhiêu ngày 
b. tính xem ngày đó là ngày thứ bao nhiêu trong năm 
c. tìm ngày trước ngày vừa nhập(ngày, tháng,năm)
d. tìm ngày kế ngày vừa nhập (ngày , tháng , nam )
*/
#include<stdio.h>

int so_ngay(int thang , int nam){
    switch (thang){
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            return 31;
        case 4:
        case 6:
        case 9:
        case 11:
            return 30;
        case 2:
            return ((nam%400==0)||(nam%4==0 && nam%100 !=0))? 29 :28;
        default:
            return -1;
    
    }
}

int ngay_trong_nam(int ngay, int thang, int nam){
    //tính tổng tất cả số ngày của những tháng trước nhập vào 
    int ntn =0;
    for(int i = 1; i<thang; i++){
        ntn= ntn + so_ngay(i,nam);
    }
    ntn=ntn + ngay;
    return ntn;
}
void ngay_truoc_do(int ngay, int thang, int nam){
    if (ngay==1){
         if(thang==1){
            ngay = 31;
            thang = 12;
            nam--;
         }
         else{
            thang--;
            ngay=so_ngay(thang, nam);
         }
    } else{
        ngay--;
    }
    printf("\nngay truoc do: %d/%d/%d",ngay,thang,nam);
}

void ngay_sau_do(int ngay, int thang, int nam){
    int nct=so_ngay(thang, nam);
    if (ngay==nct){
         if(thang == 12){
            ngay = 1;
            thang = 1;
            nam++;
         } else{
            ngay = 1;
            thang++;
         }
         }
         
    else{
        ngay++;
    }
    printf("\nngay sau do: %d/%d/%d",ngay,thang,nam);
}


int main(){
    int ngay , thang , nam;
    do{
        printf("nhap vao ngay, thang, nam\n");
        scanf("%d%d%d",&ngay,&thang,&nam);
    }
    while (ngay<1 || ngay>31 || thang<1 || thang>12 || nam<1);
    // a tìm ra so ngay của 1 thang trong nam  
    printf("so ngay cua thang:%d",so_ngay(thang,nam));
    // cau b tim ngay trong năm
    printf("\nNgay trong nam :%d",ngay_trong_nam(ngay,thang,nam));
    // cau c tim ngay truoc đo
    ngay_truoc_do(ngay,thang,nam);
    // cau d tim ngay sau do 
    ngay_sau_do(ngay,thang,nam);
}
