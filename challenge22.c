#include<stdio.h>
#include<conio.h>
int main()
{
int n,sum=0,rev;
printf("enter a number");
scanf("%d",&n);
while(n>0)
{
rev=n%10;
sum=sum+rev;
n=n/10;
}
printf("sum of all digits is %d",sum);
return 0;
}
