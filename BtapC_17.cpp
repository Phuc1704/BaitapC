//Btap17
#include <stdio.h>
int main()
{
int i,x,n;
printf("nhap so x :");
scanf("%d",&x);
printf("nhap so n :");
scanf("%d",&n);
float luythua =1, tich=1, ketqua ;
for(i=1;i<=n;i++)
{
 luythua*=x;
 tich*=i;
 ketqua+=luythua/tich;
}
printf("ket qua:  %.2f",ketqua);
return 0;
} 
