//Btap39
#include <stdio.h>
#include<math.h>
int main()
{
int i, n;
float S, M;
printf("nhap so n :");
scanf("%d",&n);
S = 0;
M = 1;
for(i=1;i<=n;i++)
{
    M = M * i;
	S = pow((M + S) * 1.0, 1.0/(i + 1));
}
printf("\nTong la %f", S);
return 0;
}


