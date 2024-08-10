/*WAP in C to print the division using the given marks out of 100 with the help of else if statement ladder*/
#include<stdio.h>
#include<conio.h>
int main()
{
   int a,b;
   printf("Enter Your Percentage out of 100 \n");
   scanf("%d",&a);
   if(a>75)
   printf("Honours");
   else if(a>60)
   printf("First Division");
   else if(a>45)
   printf("Second Division");
   else if(a>33)
   printf("Third Division");
   else
   printf("Fail");
   return 0;
}