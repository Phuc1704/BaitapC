//Btap 9
#include<stdio.h>
int main ()
{
    int n; 
    printf("nhap n: ");
    scanf("%d", &n);
    float tich=1, i;
    for(i=1; i<=n; i++)
    {
        tich*=i;
    }
    printf("tich cac so: %.2f", tich);
    return 0;
}
