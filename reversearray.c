#include <stdio.h>
int main() 
{
int arr[100],i,n,j=0,rev[100];
   printf ("enter size ");
   scanf("%d",&n);
   printf("enter elements");
 for (i=0;i<n;i++)
{
  scanf("%d",&arr[i]);
}
  printf( "the reverse array is :");
 for (j=n-1;j>=0;j--)
  printf ("% d",arr[j]);
}

