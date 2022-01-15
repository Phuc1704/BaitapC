//Btap29
#include<stdio.h>
#include<math.h>
int main(){
int n, i=1, max=1;
printf("Nhap n: ");
scanf("%d",&n);
while(i <= n)
	{
		if((n % i == 0 && i % 2 == 1))
		{
			if(i > max)
			{
			max = i;
			}
			printf("%4d", i);
		}
			i++;
	}
	printf("\nUoc so le lon nhat la %d", max);
return 0;
}

