#include <stdio.h>
int fibonacci(int a)
{
    if (a==0)
    return 0; 
    else if (a==1)
    return 1; 
    else
    return fibonacci(a-1)+fibonacci(a-2); 
}
int main()
{
    int n; 
    printf("Enter the number of elements in the series: ");
    scanf("%d", &n); 
    int i;
    for (i=0;i<n;i++)
    {
        int j=fibonacci(i);
        printf("%d", j); 
        if(i<n-1)
        printf(", ");
    }
    return 0;
}