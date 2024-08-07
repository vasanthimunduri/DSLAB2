#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node *left;
    struct node *right;
};

struct node *createNode(int d) {
    struct node temp=(struct node)malloc(sizeof(struct node));
    temp->left = NULL;
    temp->right = NULL;
    temp->data = d;
}

struct node *insert(struct node *root,int d) {
    if(root==NULL) {
        return createNode(d);
    }
    else if(d<root->data) {
        root->left=insert(root->left,d);
    }
    else if(d>root->data) {
        root->right=insert(root->right,d);
    }
    return root;
}

void inOrder(struct node *root) {
    if(root != NULL) {
        inOrder(root->left);
        printf("%d\n",root->data);
        inOrder(root->right);
    }
}

void preOrder(struct node *root) {
    if(root != NULL) {
        printf("%d\n",root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
}

void postOrder(struct node *root) {
    if(root != NULL) {
        postOrder(root->left);
        postOrder(root->right);
        printf("%d\n",root->data);
    }
}

struct node *search(struct node *root,int x) {
    if(root==NULL || root->data == x)
    return root;
    if(x<root->data)
    return search(root->left,x);
    return search(root->right,x);
}

int main() {
    struct node *root = NULL;
    root = insert(root,50);
    root = insert(root,20);
    root = insert(root,10);
    root = insert(root,60);
    
    printf("Inorder traversal:\n");
    inOrder(root);
    printf("Preorder traversal:\n");
    preOrder(root);
    printf("Postorder traversal:\n");
    postOrder(root);
    
    int x = 10;
    struct node *result = search(root, x);
    if(result != NULL)
    printf("element %d is found in the tree \n", x);
    else
    printf("element %d not found in the tree \n", x);
    return 0;
}
