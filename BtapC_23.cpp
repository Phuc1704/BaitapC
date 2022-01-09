//Btap23
#include<stdio.h>
#include<math.h>
int main(){
int n, i, count=0;
printf("Nhap n: ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
if(n%i==0)
{
printf("%d\t", i);   
count++;
}
}
printf("\nso luong uoc: %d", count);
return 0;
}
