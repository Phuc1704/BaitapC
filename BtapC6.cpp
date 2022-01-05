//Btap 6
#include<stdio.h>
int main ()
{
    int n; 
    printf("nhap n: ");
    scanf("%d", &n);
    float sum=0, i;
    for(i=1; i<=n; i++)
    {
        sum+=1.0/(i*(i+1));
    }
    printf("tong cac so: %.2f", sum);
    return 0;
}


