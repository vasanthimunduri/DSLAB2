#include <stdio.h>
#include<stdlib.h>
#define MAX 4

int stackarr[MAX];
int top=-1;


int isfull()
{
if(top==MAX-1)
  return 1;
else
  return 0;
 }
 
int isempty()
{
if(top==-1)
  return 1;
else
return 0;
}

void push(int data)
{

if(isfull()) {
printf("stack overflow");
   return;
  }
top=top+1;
stackarr[top]=data;
}

int pop()
{
int value ;
if (isempty()) {
printf("stack is underflow");
exit(1);
}
value=stackarr[top] ;
top=top-1;
return value ;
}

int peek(){
if (isempty())
{
printf("stack underflow");
exit(1);
}
return stackarr[top];
}

void print() {
int i;
if(top==-1)
{
printf("stack underflow");
return;
}
for(i=top;i>=0;i--)
printf("%d",stackarr[i]) ;
printf("\n");
}

int main(){
int choice,data;
while(1)
{
printf("\n 1.push\n 2.pop\n  3.print the top element\n 4.print all the elements of the stack\n 5.quit\n");
printf("please enter your choice: ");
switch(choice){
case 1:
printf("enter the element to be pushed:");
scanf("%d",&data);
push(data);
break ;
case 2:
data=pop();
printf("deleted element is %d\n",data);
break;
case 3:
printf("the top most element of the stack is %d\n",peek());
break ;
case 4:
print();
break ;
case 5:
exit(1);
 default:
 printf("wrong choice entered");
 }
 }
 return 0;
 }
