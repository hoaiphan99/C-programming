#include<stdio.h>
#include<math.h>
int main(){
    // khai bao
    float xa, ya,xb,yb,xc,yc;
    float AB,BC,CA;
    float chuvi, dientich,p;
    // nhap lieu
    printf("nhap vao toa do dinh A:");
    scanf("%f%f",&xa,&ya);

    printf("\nnhap vao toa do dinh B:");
    scanf("%f%f",&xb,&yb);

    printf("nhap vao toa do dinh C:");
    scanf("%f%f",&xc,&yc);
    //xu ly
    // tinh do dai cac canh tam giac
    AB = sqrt(pow(xa-xb,2)+pow(ya-yb,2));
    BC = sqrt(pow(xb-xc,2)+pow(yb-yc,2));
    CA = sqrt(pow(xc-xa,2)+pow(yc-ya,2));
    
    if(AB+BC>CA && AB+CA > BC && BC+CA > AB){
        printf("\n ABC tao thanh tam giac");
        // kiem tra tam giac can
        if(AB==BC||AB==CA||BC==CA){
            printf("\n ABC la ta gic can");
        } else{
             printf("\n ABC khoong la ta gic can");
        }
        //tinh chu vi
        chuvi = AB+BC+CA;
        printf("\n chu vi tam giac ABC la:%.2f",chuvi);
        // tinh dien tich
        p = chuvi/2;
        dientich = sqrt(p*(p-AB)*(p-BC)*(p-CA));
        printf("\n dien tich tam giac ABC la:%.2f",dientich);



    }else{
        printf("\n ABC khong tao thanh tam giac");
    }


    // xuat ket qua

}