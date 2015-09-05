#include <iostream>
#include <cstdlib>
#include <stddef.h>

using namespace std;

struct node{
    int data;
    struct node * left;
    struct node * right;
};

struct node * newNode(int value){
    struct node * newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = value;
    newNode->left = 0;
    newNode->right = 0;
    return newNode;
};

void inorder(struct node * root){
    if (root==0)
        return;
    inorder(root->left);
    cout<<root->data;
    inorder(root->right);
}

void preorder(struct node * root){
    if(root==0)
        return;
    cout<<root->data;
    preorder(root->left);
    preorder(root->right);
}

void postorder(struct node * root){
    if(root==0)
        return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data;
}

int main()
{
    struct node * root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->right->right = newNode(7);
    inorder(root);
    cout<<endl;
    preorder(root);
    cout<<endl;
    postorder(root);
    return 0;
}
