#include<stdio.h>
#include<math.h>
int sum(int n);

int main()
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
        sum1+=i/(2*n);
    }
    return sum1;
}
