#include<stdio.h>
int main()
{  int n,k,i,a[i],sum=0;
printf("\n enter the number of elements:");
scanf("%d",&n);
printf("\n enter the elements:");
for(i=0;i<=10;i++)
{
scanf("%d",&a[i]);
}
printf("\n enter the limit value:");
scanf("%d",&k);
for(i=0;i<=k;i++)
{
sum=sum+a[i];
}
printf("\n %d",sum);
return 0;
}
