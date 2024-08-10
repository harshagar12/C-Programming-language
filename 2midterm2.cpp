#include <stdio.h>
int main() 
{
    FILE *f;
    char ch;
    f=fopen("2.txt","w");
    while(ch=getchar()!=EOF)
    {
        scanf("%c",&ch);
        putc(ch,f);
    }
    fclose(f);
    f=fopen("2.txt","r");
    while(!feof(f))
    {
        ch=getc(f);
        printf("%c",ch);
    }
    fclose(f);
    return 0;
}