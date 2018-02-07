#include<stdio.h>
int main()
{
int a[5],i;
printf("\n enter the numbers:");
for(i=0;i<=5;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<=5;i++)
{
  if(a[i]>a[i+1])
  {
  printf("\n %d",a[i]);
  }
  if(a[i]<a[i+1])
  {
  printf("\n %d",a[i]);
  } 
}
return 0;
}
