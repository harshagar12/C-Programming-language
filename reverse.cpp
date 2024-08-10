#include<stdio.h>
#include<string.h>
int main()
{
    int b,i;
    printf("Enter The String:");
    char a[50];
    gets(a);
    printf("The Reverse of the String is %s",strrev(a));
    return 0;
}
