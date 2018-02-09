#include<stdio.h>
int main()
{
int a,b,s;
printf("\n enter the two numbers");
scanf("%d,%d",&a,&b);
s=a-b;
if(s%2==0)
{
printf("the difference is even");
}
else
{
printf("the difference is odd");
}
return 0;
}

