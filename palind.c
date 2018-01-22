#include<stdio.h>
int main()
{
int n,rev,rem,temp;
printf("enter the val");
scanf("%d",&n);
temp=n;
while(temp!=n)
{
rem=temp%10;
rev=rev*10+n;
n=n/10;
}
if(rev==n)
{
printf("\n palindrome");
}
else
{
printf("\n not palindrome");
}
return 0;
}
