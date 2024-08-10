#include<stdio.h>
int main()
{
    int b,i;
    printf("Enter The String:");
    char a[50];
    gets(a);
    for(i=0;a[i]!='\0';i++);
    printf("The Length of the String is %d",i);
    return 0;
}
