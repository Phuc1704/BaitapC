//Btap 28
#include<stdio.h>
#include<math.h>
int main(){
int n, i, sum=0;
printf("Nhap n: ");
scanf("%d",&n);
for(i=1;i<n;i++)
{
if(n%i==0)
{
printf("%d\t", i);   
sum+=i;
}
}
printf("\nTong bang: %d",sum);
return 0;
}

