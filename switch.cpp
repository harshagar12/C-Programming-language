#include<stdio.h>
#include<conio.h>
int main()
{
   int a,b,i,c;
   c=0;
   for(i=1;i<=5;i++)
   {
    printf("\nEnter Your Marks out of 100: ");
    scanf("%d",&a);
    c=c+a;
   }
   b=c/50;
   switch (b)
   {
   case 10: printf("A"); 
   break; 
   case 9: printf("A"); 
   break;
   case 8: printf("A"); 
   break;
   case 7: printf("B"); 
   break;
   case 6: printf("B"); 
   break;
   case 5: printf("C"); 
   break;
   case 4: printf("D"); 
   break;
   default: printf("Fail"); 
   }
return 0;
}