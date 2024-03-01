include<stdio.h>
int rev( int a[  ],int n){
int i;
printf("enter the elements");
for (i=n-1;i>=0;i--)
{
printf(" % d",a[i]);
}
}
int main()
{
int a[100],n;
int i;
printf("enter the size of array");
scanf("%d",&n);
for (i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
rev(a,n);
