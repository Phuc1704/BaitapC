//btap8
#include<stdio.h>
int main ()
{
    int n; 
    printf("nhap n: ");
    scanf("%d", &n);
    float sum=0, i;
    for(i=0; i<n; i++)
    {
        sum+=(2*i+1)/(2*i+2);
    }
    printf("tong cac so: %f", sum);
    return 0;
}
