#include<stdio.h>
int main()
 {
    struct complex{
      int real;
      int imag;
    };
    struct complex a,b,c; 
    printf("Enter The Value of Real and Imaginary number of Complex Number A: ");
    scanf("%d%d",&a.real,&a.imag);
    printf("\nEnter The Value of Real and Imaginary number of Complex Number B: ");
    scanf("%d%d",&b.real,&b.imag);
    c.real = a.real + b.real; 
    c.imag = a.imag + b.imag; 
    printf("\nThe sum of the two complex numbers is: %d+%di",c.real,c.imag);
    return 0;
}
