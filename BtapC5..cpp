#include<stdio.h>
#include<math.h>
float sum (int n);
int main()
{
    int n;
    printf("nhap n: ");
    scanf("%d", &n);
    float sum1=0, i;
    for(i=1; i<=n; i++)
    {
        sum1+=1/(2*i+1);
    }
    printf("tong cac so: %f", sum1);
    }




