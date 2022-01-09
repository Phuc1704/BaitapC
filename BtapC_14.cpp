//Btap14
#include <stdio.h>
int main()
{
int i,x,n;
printf("nhap so x :");
scanf("%d",&x);
printf("nhap so n :");
scanf("%d",&n);
int ketqua =x, tong=x;
for(i=1;i<n;i++)
{
 ketqua=ketqua*x*x;
 tong+=ketqua;
}
printf("ket qua:  %d",tong);
return 0;
} 


