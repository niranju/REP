#include<stdio.h>
int main()
{
int n,rev=0,rem,original;
printf("\n enter the number");
scanf("%d",&n);
original=n;
while(n!=0)
{
rem=n%10;
rev=rev*10+rem;
n/=10;
}
if(original==rev)
printf("the number is palindrome");
else
printf("the number is not a palindrome");
return 0;
}
