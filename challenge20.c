#include<stdio.h>
#include<conio.h>
int main()
{
int n,lastdigit,firstdigit=0;
printf("enter a number");
scanf("%d",&n);
lastdigit =n%10;
while(n>0){
   firstdigit=n%10;
   n/=10;
      }
        printf("first digit is %d\n",firstdigit);
        printf("last digit is %d\n",lastdigit);
        printf("sum of first and last digit is %d",firstdigit+lastdigit);
return 0;
}
