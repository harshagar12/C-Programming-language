/*Temprature from Farehnite to Celcius*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int c,f;
    printf("Enter Temprature in Farehnite: ");
    scanf("%d",&f);
    c=(f-32)*5/9;
    printf("The Temprature in Celcius is= %d",c);
    getch();
    return 0;
}