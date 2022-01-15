//Btap38
#include <stdio.h>
#include<math.h>
int main()
{
int i, n;
float S;
printf("nhap so n :");
scanf("%d",&n);
S = pow(1.0, 1.0/2);
for(i=1;i<=n;i++)
{
    S = pow((i + S) * 1.0, 1.0/(i + 1));
}
printf("\nTong la %f", S);
return 0;
}
