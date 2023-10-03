#include <stdio.h>
#include <stdlib.h>
struct node
{
    struct node *left;
    int data;
    struct node *right;
};
typedef struct node node;
node*q;

// Inorder traversal
void inorderTraversal(node*root)
{ 
    printf("the inorder traversal is ");
    if (root==NULL)
        return;
    inorderTraversal((root)->left);
    printf("%d->",root->data);
    inorderTraversal(root->right);
}

// Preorder traversal
void preorderTraversal(node *root)
{
    printf("the preorder traversal is ");
    if (root==NULL)
        return;
    printf("%d->",root->data);
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}

// Postorder traversal
void postorderTraversal(node*root)
{ 
    printf("the postorder traversal is ");
    if (root==NULL)
        return;
    postorderTraversal(root->left);
    postorderTraversal(root->right);
    printf("%d->",root->data);
}

node *Create(node *root)
{
    node*st;
    int x;
    if (root == NULL)
    {
        printf("Input the data of first node");
        scanf("%d", &x);
        q = (node*)malloc(sizeof(node));
        q->left = NULL;
        q->right = NULL;
        q->data = x;
        st = q;
        root = q;
        Create(q);
    }
    else
    {
        int choice;
        printf("Whether left of  root %d exists? (1/0)", root->data);
        scanf("%d", &choice);
        if (choice == 1)
        {
            printf("Input the left of node");
            scanf("%d", &x);
            q = (node *)malloc(sizeof(node));
            q->left = NULL;
            q->right = NULL;
            q->data = x;
            root->left = q;
            Create(q);
        }
        printf("Whether right of root %d exists? (1/0)", root->data);
        scanf("%d", &choice);
        if (choice == 1)
        {
            printf("Input the right  node");
            scanf("%d", &x);
            q = (node *)malloc(sizeof(node));
            q->left = NULL;
            q->right = NULL;
            q->data = x;
            root->right = q;
            Create(q);
        }
    }
    return st;
}
void main()
{
    node *st, *root = NULL;
    st = Create(root);
    printf("\n");
    inorderTraversal(st);
    printf("\n");
    preorderTraversal(st);
    printf("\n");
    postorderTraversal(st);
}
