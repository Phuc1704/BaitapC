//Btap15
#include<stdio.h>
int main ()
{
    int n; 
    printf("nhap n: ");
    scanf("%d", &n);
    float tong1=0, i, tong2=0;
    for(i=1; i<=n; i++)
    {
        tong1+=i;
        tong2+=1.0/tong1;
    }
    printf("tong cac so: %.2f", tong2);
    return 0;
}
