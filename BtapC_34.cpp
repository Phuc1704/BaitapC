//Btap34
#include <stdio.h>
#include <math.h>
int main(){ 
int n;  float sum=0;
printf("\nNhap n = "); 
scanf("%d", &n);
for(int i=1; i<=n; i++)
{sum = sqrt(i + sum);
	}
	printf("\nTong la: %f", sum);
	return 0;
 }

