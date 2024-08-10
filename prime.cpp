/*Prime Number*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,i,b=0,c=0;    
printf("Enter the number to check prime:");    
scanf("%d",&a);    
//b=a/2;    
for(i=2;i<a;i++)    
{    
if(a%i==0)    
{    
c=1;    
break;    
}    
}    
if(c==1)    
printf("The Number is not Prime");     
else
printf("The Number is Prime ");
return 0;  
}