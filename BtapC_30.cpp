//Btap30
#include<stdio.h>
#include<math.h>
int main(){
int n, i, sum=0;
printf("Nhap n: ");
scanf("%d",&n);
for(i=1;i<n;i++)
{
if(n%i==0)
{
printf("%d\t", i);   
sum+=i;
}
}
printf("\nTong bang: %d",sum);
if(sum == n)
		printf("\n%d La so hoan thien: ", n);
	else
		printf("\nSo nhap vao khong la so hoan thien");
return 0;
}

