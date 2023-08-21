#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* left;
    struct node* right;
};

struct node* createnode(int value)
{
    struct node* nnode;
    nnode=(struct node*)malloc(sizeof(struct node));
    nnode->data=value;
    nnode->left=NULL;
    nnode->right=NULL;
    return nnode;
}

struct node* insert_at_left(struct node *root,int value)
{
    root->left=createnode(value);
    return root->left;
}

struct node* insert_at_right(struct node *root,int value)
{
    root->right=createnode(value);
    return root->right;
}


void preorder(struct node* root)
{
    if(root==NULL)
    return;
    else
    {
        printf(" %d ",root->data);
        preorder(root->left);
        preorder(root->right);
    }
}
void postorder(struct node* root)
{
    if(root==NULL)
    return;
    else
    {
        postorder(root->left);
        postorder(root->right);
        printf(" %d ",root->data);
    }
}
void inorder(struct node* root)
{
    if(root==NULL)
    return;
    else
    {
        inorder(root->left);
        printf(" %d ",root->data);
        inorder(root->right);       
    }
}
int main()
{
    struct node* root=NULL;
    int number,value;
    printf("Enter number of elements to be inserted:\n");
    scanf("%d",&number);
    for (int i=0;i<number;i++)
    {
        printf("Enter data%d",(i+1));
        scanf("%d",&value);
        root=insert_at_left(root,value);
        root=insert_at_right(root,value);
    }
    printf("Inorder Traversal:");
    inorder(root);
    printf("\nPreorder Traversal:");
    preorder(root);
    printf("\nPostorder Traversal:");
    postorder(root);
    return 0;
}
    
