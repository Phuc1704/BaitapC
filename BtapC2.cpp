#include<stdio.h>
#include<math.h>
int sum(int n);
int main()
{
    int n, tong;
    printf("nhap n: ");
    scanf("%d", &n);
    tong=sum(n);
    printf("tong cac so: %d", tong);
    }
int sum(int n)
{
    int sum1=0, i;
    for(i=0; i<=n; i++)
    {
        sum1+=i*i;
    }
    return sum1;
}


