//Btap 7
#include<stdio.h>
int main ()
{
    int n; 
    printf("nhap n: ");
    scanf("%d", &n);
    float sum=0, i;
    for(i=1; i<=n; i++)
    {
        sum+=i/(i+1);
    }
    printf("tong cac so: %f", sum);
    return 0;
}
