#include <stdio.h>
int fibonacci(int x)
{
    if (x==0)
    return 0; 
    else if (x==1)
    return 1; 
    else
    return fibonacci(x-1)+fibonacci(x-2); 
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
        printf("%d ", j); 
    }
    return 0;
}