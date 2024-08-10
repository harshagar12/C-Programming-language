#include<stdio.h>
int main()
{
    int a=50,*p;
    p=&a;
    printf("%u\n",p);
    printf("%d",*p);
    return 0;
}