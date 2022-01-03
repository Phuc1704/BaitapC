#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    printf("nhap n: ");
    scanf("%d", &n);
    float sum1=0, i;
    for(i=1; i<=n; i++)
    {
    sum1+=1.0/(2*i);
    }
    printf("tong cac so: %f", sum1);
    }
	





