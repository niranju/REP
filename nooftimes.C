#include<stdio.h>
int main()
{
char a[20];
int i,n;
printf("\n enter the string");
scanf("%s",a);
printf("\n enter the no.of times:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("\n%s",a);
}
return 0;
}
