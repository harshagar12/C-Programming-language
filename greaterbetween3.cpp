/*To Find Greater between 3 Numbers*/
#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("Enter any 3 Numbers");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
        {
            printf("%d is the Greatest Number",a);
        }
        else{
            printf("%d is the Greatest Number",c);
        }
    }
    else{
        if(b>c)
        {
            printf("%d is the Greatest Number",b);
        }
        else{
            printf("%d is the Greatest Number",c);
        }
    }
    return 0;
}
