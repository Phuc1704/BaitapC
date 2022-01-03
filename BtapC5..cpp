#include<stdio.h>
#include<math.h>
int tong(int n);
void main()
{
    int n;
    float tong;
    printf("nhap n: ");
    scanf("%d", &n);
    tong=sum(n);
    printf("tong cac so: %.2f", tong);
    }
int sum(int n)
{
    float sum1=0, i;
    for(i=0; i<=n; i++)
    {
        sum1+=i/(2*n+1);
    }
    return sum1;
}




