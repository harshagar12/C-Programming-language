#include <stdio.h>
int main() 
{    
    int a,b,c;
    
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    // calculate the sum
    c = a + b;      
    
    printf("%d + %d = %d", a, b, c);
    return 0;
}