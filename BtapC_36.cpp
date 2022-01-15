//Btap36
#include <stdio.h>
#include<math.h>
int main()
{
int i, n;
printf("nhap so n :");
scanf("%d",&n);
float M =1, kq=0;
for(i=1;i<=n;i++)
{
 M*=i;
 kq=sqrt(M+kq);
}
printf("ket qua:  %f",kq);
return 0;
} 

