#include<stdio.h>
#include<math.h>
int tong(int n);
int main()
{
int n, S;
printf("nha n: ");
scanf("%d", &n);
S=tong(n); 
printf("tong cac so: %d", S);
}
int tong(int n)
{
    int tong1=0;
    for(int i=0; i<=n; i++)
    {
       tong1+=i; 
    }
    return tong1;
}

