//Btap26
#include<stdio.h>
#include<math.h>
int main(){
int n, i, tich=1;
printf("Nhap n: ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
if(n%i==0 && i%2!=0)
{
    printf("%d\t", i);   
    tich*=i;
}
}
printf("\ntich uoc le: %d", tich);
return 0;
}
