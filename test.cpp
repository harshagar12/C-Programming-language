#include <stdio.h>
struct employe {
    char name[30];
    char id[15];
    int salary;
}a[5];
 
int main()
{
    int i,j,k=0;
    for(i=0;i<5;i++)
    {
        fflush(stdin);
        printf("Enter the ID of Employee %d: \n",(i+1));
        gets(a[i].id);
        printf("Enter the Name of Employee %d: \n",(i+1));
        gets(a[i].name);
        printf("Enter the Salary of Employee %d: \n",(i+1));
        scanf("%d",&a[i].salary);
    }
    printf("Employee Details: \n");
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
        printf("Salary: %d",a[i].salary);
        printf("\n");
    }
    printf("The Employees whose Name starts from A=\n");
    for(i=0;i<5;i++)
    {
        if (a[i].name[0] == 'A')
        {
            for(j=0;a[i].name[j]!='\0';j++)
            {
                printf("%c",a[i].name[j]);
            }
            printf("\n");
           // puts(a[i].name);
            k=1;
        }
    }
    if(k=0)
    printf("Not Found");
    return 0;
}
