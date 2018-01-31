#include<stdio.h>
int  main()
{
int num,original,remainder,result=0;
printf("\n enter a three digit integer");
scanf("%d",&num);
original=num;
while(original!=0)
{
remainder=original%10;
result=remainder*remainder*remainder;
original/=10;
}
if(result==num)
{
printf("\nit is a armstrong number");
}
else
printf("\nit is not a armstrong number");
return 0;
}
