#include <stdio.h>
#include <stdlib.h>
#define MAX 5
int dq[MAX];
int front=-1,rear=-1;

void insertionFront(int d){
    if(front==0 && rear==MAX-1) {
         printf("Queue is full\n");
         return;
    }
    if(front==0) {
        printf("Insertion not possible");
        return;
    }
    if(front==-1) {
        front=rear=0;
    }
    else {
        front=front-1;
    }
    dq[front]=d;
}
void insertionRear(int d){
    if(front==0 && rear==MAX-1){
        printf("Queue is full");
        return;
    }
    if(rear==MAX-1) {
        printf("Insertion not possible");
        return;
    }
    if(rear==-1) {
        front=rear=0;
    }
    else {
        rear=rear+1;
    }
    dq[rear]=d;
}
void deleteFront() {
    if(front==-1||front>rear) {
        printf("Queue is emty");
        return;
    }
    if(front==rear) {
        front=rear=-1;
    }
    else {
        front=front+1;
    }
}
void deleteRear() {
    if(front==-1||front>rear) {
        printf("Queue is empty");
        return;
    }
    if(front==rear) {
        front=rear=-1;
    }
    else {
        rear=rear-1;
    }
}
void display() {
    int i;
    for(i=front;i<=rear;i++) {
        printf("%d",dq[i]);
    }
    printf("\n");
}
int main() {
    insertionFront(10);
    display();
    insertionRear(30);
    insertionRear(20);
    display();
    deleteFront();
    display();
    deleteRear();
    display();
    return 0;
}
