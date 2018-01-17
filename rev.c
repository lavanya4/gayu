#include<stdio.h>
int main()
{
int n,rev,num=0;
printf("enter the number");
scanf("%d",&n);
while(n!=0)
{
rev=rev*10;
rev=rev%n;
n=n/10;
}
}
