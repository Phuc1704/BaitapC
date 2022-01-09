//Btap24
#include<stdio.h>
#include<math.h>
int main(){
int n, i;
printf("Nhap n: ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
if(n%i==0 && i%2!=0)
{
    printf("%d\t", i);   
}
}
return 0;
}

