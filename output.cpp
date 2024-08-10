#include<stdio.h>
int main()
{
    int b,n;
    printf("Enter The String:");
    char a[100];
    gets(a);
    b=0;
    for(int i=0;a[i]!='\0';i++)
    {
       if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
       {
         b=b+1;
       }
    }
    printf("The Number of Vowels in the String is %d",b);
    return 0;
}