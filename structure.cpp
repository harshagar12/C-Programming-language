/*WAP for employee with the members employee, id, name, profession and salary. Give 10% increase to all the members and display the details with anual salary */
#include <stdio.h>
struct employe {
    char name[30];
    char id[15];
    char profession[20];
    int salary;
}a[10];
 
int main()
{
    int i,j,k=0;
    for(i=0;i<10;i++)
    {
        fflush(stdin);
        printf("Enter the ID of Employee %d: \n",(i+1));
        gets(a[i].id);
        printf("Enter the Name of Employee %d: \n",(i+1));
        gets(a[i].name);
        printf("Enter the Profession of Employee %d: \n",(i+1));
        gets(a[i].profession);
        printf("Enter the Salary of Employee %d: \n",(i+1));
        scanf("%d",&a[i].salary);
    }
    for(i=0;i<10;i++)
    {
        a[i].salary=(0.1*a[i].salary)+a[i].salary;
    }
    printf("Employee Details: \n");
    for(i=0;i<10;i++)
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
        printf("Profession: ");
        for(j=0;a[i].profession[j]!='\0';j++)
        {
            printf("%c",a[i].profession[j]);
        }
        printf("\n");
        printf("Salary: %d",(a[i].salary*12));
        printf("\n");
    }
    return 0;
}
