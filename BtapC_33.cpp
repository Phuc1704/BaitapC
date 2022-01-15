//Btap33
#include <stdio.h>
#include <math.h>
 int main(){ 
int n;  float sum;
sum = sqrt((float)2);
printf("\nNhap n = "); 
scanf("%d", &n);
for(int i=2; i<=n; i++)
	{
		sum=sqrt(2 + sum);
	}
	printf("\nTong la: %.2f", sum);
	return 0;
 }
