#include<stdio.h>
struct student{
    char roll_no[10];
    int marks;
    char name[20];
}a[2];
int main()
{
    int i,j;
    for(i=0;i<2;i++)
    {
        printf("Enter Details of Student %d",i+1);
        fflush(stdin);
        printf("\nEnter the Roll No: ");
        gets(a[i].roll_no);
        printf("\nEnter The Name: ");
        gets(a[i].name);
        printf("\nEnter the Total Marks: ");
        scanf("%d",&a[i].marks);
    }
    printf("\nStudent Details: ");
    for(i=0;i<2;i++)
    {
        printf("\nRoll No of Student %d: ",i+1);
        for(j=0;a[i].roll_no[j]!='\0';j++)
        printf("%c",a[i].roll_no[j]);
        printf("\nMarks of Student %d: %d",i+1,a[i].marks);
        printf("\nName of Student %d: ",i+1);
        for(j=0;a[i].name[j]!='\0';j++)
        printf("%c",a[i].name[j]);
    }
    return 0;
}