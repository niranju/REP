#include<stdio.h>
int main()
{
int i,low,high.flag;
printf("enter the two numbers");
scanf("%d,%d",&low,&high);
while(low<hidh)
{
flag=0;
for(i=2;i<low/2;++i)
{
if(low%i==0)
{
flag=1;
break;
}
}
if(flag==0)
{
printf("the output:%d",low);
}
return 0;
}
