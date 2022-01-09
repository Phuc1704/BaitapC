//Btap19
#include <stdio.h>
#include<math.h>
int main()
{
int i,x,n;
printf("nhap so x :");
scanf("%d",&x);
printf("nhap so n :");
scanf("%d",&n);
float T=1, M=1, K, sum=1+x;
for (i=1; i <= n; i++)
{
T=pow(x,(2*i+1));
K=i*2+1;
M=M*K*(K - 1);
sum=sum+T/M;
}
printf("Sum = %.2f", sum);
return 0;
} 

