#include<stdio.h>
#include<conio.h>
int main()
{
int n,lastdigit,firstdigit=0,temp;
printf("enter a number");
scanf("%d",&n);
lastdigit =n%10;
while(n>0){
   firstdigit=n%10;
   n/=10;
      }
        printf("first digit is %d\n",firstdigit);
        printf("last digit is %d\n",lastdigit);
  temp=firstdigit;
  firstdigit=lastdigit;
  lastdigit=temp;
  printf("swap firstdigit with lastdigit\n");
  printf("fisrt digit is %d\n",firstdigit);
  printf("last digit is %d",lastdigit);
return 0;
}