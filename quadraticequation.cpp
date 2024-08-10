/*To Find Solution of Quadratic Equation*/
#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c; 
    float d,e,f;
    printf("The Standard  Quadratic is ax^2 + bx + c = 0\n");
    printf("Enter the values of a,b,c: ");
    scanf("%lf%lf%lf",&a,&b,&c);
    d=(b*b)-(4*a*c);
    e=(-b-(sqrt(d)))/(2*a);
    f=(-b+(sqrt(d)))/(2*a);
    printf("The root 1 of the Equation is %lf \n",e);
    printf("The root 2 of the Equation is %lf \n",f);
    return 0;
}