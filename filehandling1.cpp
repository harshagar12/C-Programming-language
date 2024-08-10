#include<stdio.h>
#include <stdlib.h>
int main()
{
    FILE *f1;
    int n,i;
    f1=fopen("number.txt","w");
    if (f1 == NULL) 
    {
        printf("Error opening the file.\n");
        exit(1);
    }
    else 
    printf("File Open \n");
    for(i=1;i<=10;i++)
    {
        scanf("%d",&n);
        putw(n,f1);
    }
    fclose(f1);
    f1=fopen("number.txt","r");
    while(!feof(f1))
    {
        n=getw(f1);
        if(n%2!=0)
        printf("%d \t",n);
    }
    fclose(f1);
    printf("File Closed \n");
    return 0;
}


