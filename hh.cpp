#include<stdio.h>
int main()
{
    int i,j;
    char a[3][3], b[3][3], c[3][3];
    printf("Enter the Elements of A:");
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=3;j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter the Elements of B:");
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=3;j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    printf("The Sum of Matrix is:");
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=3;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
            printf("%d \t",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}