#include <stdio.h>
int convergence(int x)
{
  int y=0;
  while(x!=0)
  {
    y++;
    if (x%2==0)
      x/=2;
    else 
      x= 3*x+1;
  }
  return y;
}
int main()
{
  int n,m;
  printf("Enter a Number: ");
  scanf("%d",&n);
  m=convergence(n);
  printf("%d",m);
  return 0;
}
/*#include <stdio.h>
int collatz_sequence(int n) {
  int count = 0;
  while (n != 1) {
    count++;
    if (n % 2 == 0) {
      n /= 2;
    } else {
      n = 3 * n + 1;
    }
  }
  return count;
}
int main() 
{
  int n;
  scanf("%d", &n);
  int steps = collatz_sequence(n);
  printf("%d", steps);
  return 0;
}*/
