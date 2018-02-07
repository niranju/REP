#include<stdio.h>
int main()
int n,i,num=0;
printf("\n enter the number");
scanf("%d",&n);
for(i=2;i<n;i++)
{
 if(n%i==0)
 {
 num=num+1;
 break;
 }
 if(num==1)
 {
 printf("\n the number is neither prime nor composite");
 }
}
 else
 printf("the number is prime");
 return 0;
 }
