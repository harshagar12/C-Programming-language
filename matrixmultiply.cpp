#include<stdio.h>
int main() 
{  
   int i, j,k;  
   int a[3][3], b[3][3], c[3][3];  
   printf("Enter the elements of matrix A: \n");  
   for (i=0; i<3; i++) 
   {  
      for (j=0; j<3; j++) 
      {  
         scanf("%d", &a[i][j]);  
      }  
   }  
   printf("Enter the elements of matrix B: \n");  
   for (i=0;i<3; i++) 
   {  
      for (j=0; j<3; j++) 
      {  
         scanf("%d", &b[i][j]);  
      }  
   }  
   printf("The product of the two matrices is: \n");  
   for (i=0; i<3; i++)
    {  
      for (j=0;j<3; j++) 
      {  
         c[i][j]=0;
         for(k=0;k<3;k++)
         {
            c[i][j]=c[i][j]+a[i][k]*b[k][j];
         }
         printf("%d \t",c[i][j]);
      }  
      printf("\n");  
   }  
   return 0;  
}  