/*To Find Leap Year*/
#include<stdio.h>
int main()
{
    int a;
    printf("Enter any Year");
    scanf("%d",&a);
    if(a%400==0)
    {
        printf("The Year %d is a Leap Year",a);
    }
    else if(a%100==0)
    {
        
        printf("The Year %d is not a Leap Year",a);
    }
    else if(a%4==0)
    {
        printf("The Year %d is a Leap Year",a);
    }
    else 
    {
        printf("The Year %d is not a Leap Year",a);
    }
    return 0;
}