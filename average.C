#include<stdio.h>
int main()
{
int n,i,a,c,sum=0;
printf("enter the no.of values:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("\nenter the %d value:",i);
scanf("%d",&a);
sum=sum+a;
}
c=sum/n;
printf("\n the output is:%d",c);
return 0;
}
