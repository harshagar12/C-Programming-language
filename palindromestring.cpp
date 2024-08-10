#include<stdio.h>
int main()
{
    int i,j,b;
    printf("Enter The String:");
    char a[50];
    gets(a);
    for(j=0;a[j]!='\0';j++);
    for(i=0;i<j;i++)
    {
        if(a[i]!=a[j-i-1])
        {
        b=0;
        break;
        }
    }
    if(b==0)
    printf("The String is Not Palindrome ");
    else
    printf("The String is Palindrome ");
    return 0;
}
