//Btap20, 21, 22
#include<stdio.h>
#include<math.h>
int main(){
int n, i, sum=0, tich=1;
printf("Nhap n: ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
if(n%i==0)
{
printf("%d\t", i);   
sum+=i;
tich*=i;
}
}
printf("\nTong bang: %d",sum);
printf("\nTich bang: %d", tich);
return 0;
}
