#include<stdio.h>
int main()
{
  int n,i,s,m;
  s=0;
  scanf("%d",&n);
  int a[n];
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
    s=s+a[i];
  }
  m=s/n;
  s=0;
  for(i=0;i<n;i++)
  {
    if(a[i]>m)
      s=s+a[i];
  }
  printf("%d",s);
  return 0;
}