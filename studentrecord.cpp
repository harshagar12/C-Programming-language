#include <stdio.h>
struct student {
    char name[30];
    char id[15];
    int percent;
}a[5];
 
int main()
{
    int i,j,k=0;
    for(i=0;i<5;i++)
    {
        fflush(stdin);
        printf("Enter the Name of Student %d: \n",(i+1));
        gets(a[i].name);
        printf("Enter the ID of Student %d: \n",(i+1));
        gets(a[i].id);
        printf("Enter the Percentage of Student %d: ",(i+1));
        scanf("%d",&a[i].percent);
    }
    printf("Student Details: \n");
    for(i=0;i<5;i++)
    {
        printf("Name: ");
        for(j=0;a[i].name[j]!='\0';j++)
        {
            printf("%c",a[i].name[j]);
        }
        printf("\n");
        printf("ID: ");
        for(j=0;a[i].id[j]!='\0';j++)
        {
            printf("%c",a[i].id[j]);
        }
        printf("\n");
        printf("Marks: %d\n",a[i].percent);
    }
    return 0;
}