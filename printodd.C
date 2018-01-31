#include<stdio.h>
int main()
{
int i,n1,n2;
printf("\n enter the start value");
scanf("%d",&n1);
printf("\n enter the stop value");
scanf("%d",&n2);
for(i=n1+1;i<n2;i++)
{
 if(i%2==1)
 {
 printf("\n%d",i);
 }
}
return 0;
}

