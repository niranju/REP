#include<stdio.h>
int main()
{
int array[100],min,size,c,location=1;
printf("enter the no.of elements in array\n");
scanf("%d",&size);
printf("enter %d integer\n",size);
for(c=0;c<size;c++)
scanf("%d",&array[c]);
min=array[0];
for(c=1;c<size;c++)

if(array[c]<min)
{
min=array[c];
location=c+1;
}
}
printf("\n element present in loaction %d and its value is %d\n",location,min);
return 0;
}
