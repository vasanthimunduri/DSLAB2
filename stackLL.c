#include <stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node*next;
}*top=NULL;

void push(int d )
{
struct node*temp=malloc(sizeof(struct node));
temp->data=d;
temp->next=NULL;
if(temp==NULL)
{
printf("stack is overflow");
}
else{
temp->next=top;
top=temp;
return;
}
}
void pop()
{
int d;
struct node*temp;
if(top==NULL)
{
printf("stack is underflow");
}
else{
temp=top;
top=top->next;
free(temp);
temp=NULL;
return;
}
}
void display()
{
if(top==NULL)
{
printf("stack is empty");
return ;
}
struct node*ptr;
ptr=top;
while(ptr!=NULL)
{
printf(" %d",ptr->data);
ptr=ptr->next;
}
}
int main ()
{
push(1);
push(2);
push(3);
printf("before pop");
display();

printf("\nafter pop");
pop();
display();
return 0 ;
}
