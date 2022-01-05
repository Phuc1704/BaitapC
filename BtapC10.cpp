//Btap 10
#include <stdio.h>
int main()
{
int i,x,n;
printf("nhap so x :");
scanf("%d",&x);
printf("nhap so n :");
scanf("%d",&n);
int ketqua =1;
for(i=1;i<=n;i++)
{
 ketqua*=x;
}
printf("ket qua x^n : = %d",ketqua);
return 0;
}

