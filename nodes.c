#include<stdio.h>
#include<stdlib.h>
struct node {
int data ;
struct node*next;
};
int main()
{
struct node*head=NULL;
head=malloc(sizeof(struct node*));
head->data=10;
head->next=NULL;
struct node * current=malloc(sizeof(struct node*));
current->data=20;
current->next=NULL;
head->next=current;
struct node * current1=malloc(sizeof(struct node*));
current1->data=30;
current1->next=NULL;
head->next->next=current1;
current=malloc(sizeof (struct node*));
current->data=40;
current->next=NULL;
head->next->next->next=current;
struct node *ptr=head;
while (ptr!=NULL){
printf("%d",ptr->data);
ptr=ptr->next;
}
}


