//Btap11
#include<stdio.h>
int main ()
{
    int n; 
    printf("nhap n: ");
    scanf("%d", &n);
    int tich=1, i, tong=0;
    for(i=1; i<=n; i++)
    {
        tich*=i;
        tong+=tich;
    }
    printf("tong cac so: %d", tong);
    return 0;
}
