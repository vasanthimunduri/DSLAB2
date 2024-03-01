//* C program for bubble sort *//
#include<stdio.h>
void bubblesort(int [],int );
int main()
{
    int i,n,a[20];
    printf("enter size:");
    scanf("%d",&n);
    printf("enter %d elements:  ",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    bubblesort(a,n);
    printf("sorted list:\n");
      for(i=0;i<n;i++)
          printf("%4d",a[i]);
    return 0;
}
void bubblesort(int a[],int n)
{
    int i,j,temp;
    for(i=0;i<=(n-2);i++)//n-1 passes
    {
      for(j=0;j<=(n-2-i);j++)
      {
        if(a[j] > a[j+1])
         {
           temp = a[j];
           a[j]=a[j+1];
           a[j+1]=temp;
         }
