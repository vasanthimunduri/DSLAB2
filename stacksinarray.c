#include<stdio.h>
#include<stdlib.h>
#define MAX 3  
int arr[MAX];
int top=-1;
void push (int d)
{
if(top==MAX-1)
{
printf("stack overflow");
exit(1);
}
top++;
arr[top]=d;
}
int main()
{
int i,d;
push(10);
push(20);
push(30);
 
 for(i=MAX-1;i>=0;i--)
 printf(" %d",arr[i]);
}
