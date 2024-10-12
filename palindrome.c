#include<stdio.h>
 int main()
{
int num,rev=0,rem,ori;

printf("enter  a number:");
scanf("%d",&num);
ori=num;
while(num>0)
{
rem=num%10;
rev=rev*10+rem;
num/=10;
}
if(ori==rev)
{
printf("it is a palindrome %d",ori);
}
else
{
printf("it is not a palindrome %d",ori);
}
return 0;
}