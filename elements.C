#include<stdio.h>
int main()
{
int i,N;
int a[20];
printf("\n enter the number of elements:");
scanf("%d",&N);
printf("\n enter the elements");
for(i=0;i<=N;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<=N+1;i++)
{
 if(a[i]<a[i+1])
 {
 continue;
 }
 printf("%d is the output",a[i]
}
return 0;
}
