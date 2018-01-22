#include<stdio.h>
int main()
{
int a,b,c=1,i;
printf("enter the base value");
scanf("%d",&a);
printf("\nenter the exponential val");
scanf("%d",&b);
for(i=1;i<=b;i++)
{
c=c*a;
}
printf("\n%d^%d=%d",a,b,c);
return 0;
}
