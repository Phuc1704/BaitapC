//Btap32
#include <stdio.h>
#include <math.h>
int main(){ 
int n; 
printf("\nNhap n = "); 
scanf("%d", &n);
if (sqrt((float)n) == (int)sqrt((float)n))  
	{
		printf("\n%d La so chinh phuong", n);
	}
	else
	{
		printf("\n%d Khong la so chinh phuong", n);
	}
    return 0;
}
