#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    printf("Enter The String:");
    char a[50];
    gets(a);
    printf("Enter Another String:");
    char b[50];
    gets(b);
    i=strcmp(a,b);
    if (i==0)
    printf("The Strings Are Same");
    else
    printf("The Strings Are Diffrent");
    return 0;
}
