#include<stdio.h>
int main()
{
    int n,max,divisor,i;
printf("enter n:");
scanf("%d",&n);
max=1;
for(i=1;i<=10;i++)
{
    if(n%i==0)
{
    divisor=i;
}
if(divisor>max)
{
    max=divisor;
}
}
printf("max is %d\n",max);
return 0;
}
