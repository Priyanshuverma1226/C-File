#include<stdio.h>
#include<malloc.h>

struct node{
    int data;
    struct node *left;
    struct node *right;

};


struct node * create(int data){
    struct  node *ptr=NULL;
    ptr=(struct node *) malloc(sizeof(struct node));
    ptr->data=data;
    ptr->left=NULL;
    ptr->right=NULL;
    return ptr;
}


void inorder(struct node *root)
{


    if(root!=NULL){
        inorder(root->left);
        printf("%d -> ", root->data);
        inorder(root->right);

    }


}


int main(){
    struct node *p=NULL;
    struct node *p2=NULL;
    struct node *p3=NULL;
    struct node *p4=NULL;

    p=create(9);
    p2=create(4);
    p3=create(11);
    p4=create(2);

    p->left=p2;
    p->right=p3;
    p2->left=p4;

    inorder(p);

    return 0;
}