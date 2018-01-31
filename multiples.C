#include<stdio.h>
int main()
{
int i,result=1,num;
printf("enter the number");
scanf("%d",&num);
for(i=1;i<6;i++)
{
result=num*i;
printf("\n%d",result);
}
return 0;
}
