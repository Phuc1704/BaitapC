#include<stdio.h> // Tong phan so
#include<math.h>
double sum(int n)
{
    double sum1=1;
    for(double i=2; i<=n; i++)
    {
        sum1+=1/i;
    }
    return sum1;
}
int main()
{
    int n;
    double tong;
    printf("nhap n: ");
    scanf("%d", &n);
    tong=sum(n);
    printf("tong cac so: %lf", tong);
    return 0;
    }




