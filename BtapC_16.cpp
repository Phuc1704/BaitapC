//Btap16
#include <stdio.h>
int main()
{
int i,x,n;
printf("nhap so x :");
scanf("%d",&x);
printf("nhap so n :");
scanf("%d",&n);
float luythua =1, tong=0, ketqua ;
for(i=1;i<=n;i++)
{
 luythua*=x;
 tong+=i;
 ketqua+=luythua/tong;
}
printf("ket qua:  %.2f",ketqua);
return 0;
} 
