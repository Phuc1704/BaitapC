//Btap13
#include <stdio.h>
int main()
{
int i,x,n;
printf("nhap so x :");
scanf("%d",&x);
printf("nhap so n :");
scanf("%d",&n);
int ketqua =1, tong=0;
for(i=1;i<=n;i++)
{
 ketqua=ketqua*x*x;
 tong+=ketqua;
}
printf("ket qua:  %d",tong);
return 0;
} 
