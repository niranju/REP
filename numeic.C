#include<stdio.h>
int main()
{int i;
char a[10];
printf("\n enter the string");
scanf("%s",a);
for(i=0;i<=10;i++)
{
if(a[i]<='a'||a[i]>='z'||a[i]<='A'||a[i]>='z')
{
printf("\n no");
}
else
{
printf("\n the string is numeric");
}
}
return 0;
}
