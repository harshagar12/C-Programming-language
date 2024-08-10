#include<stdio.h>
#include <stdlib.h>
int main()
{
    FILE *f1;
    int n,i;
    char ch[50],chr;
    f1=fopen("abc.txt","w");
    if (f1 == NULL) 
    {
        printf("Error opening the file.\n");
        exit(1);
    }
    else 
    printf("File Open: \n");
    printf("Enter Content of File: ");
    gets(ch);
    fprintf(f1,"%s",ch);
    fclose(f1);
    printf("Content of File:\n");
    f1=fopen("abc.txt","r");
    while(!feof(f1))
    {
        chr=getc(f1);
        printf("%c",chr);
    }
    fclose(f1);
    printf("\nFile Closed.");
    return 0;
}