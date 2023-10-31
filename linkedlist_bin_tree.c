#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* lchild;
    struct Node* rchild;
};

struct Node* getNode(int data){
    struct Node *p = (struct Node *)malloc(sizeof(struct Node));
    p->data = data;
    p->lchild=p->rchild=NULL;
    return p;
}


void Rinsert(struct Node** root, int data) {
    if (*root == NULL) {
        *root = getNode(data);
        return;
    }

    if (data < (*root)->data) {
        insert(&((*root)->lchild), data);
    } else if (data > (*root)->data) {
        insert(&((*root)->rchild), data);
    }
}

void Rinsert(struct Node** root, int data) {
    if (*root == NULL) {
        *root = getNode(data);
        return;
    }

    if (data < (*root)->data) {
        insert(&((*root)->lchild), data);
    } else if (data > (*root)->data) {
        insert(&((*root)->rchild), data);
    }
}


// Function to insert a new node into the BST
void insert(struct Node** root, int data) {
    struct Node* t = *root;
    struct Node* r, *p;

    if (t == NULL) {
        p = getNode(data);
        *root = p;
        return;
    }

    while (t != NULL) {
        r = t;
        if (data < t->data) {
            t = t->lchild;
        } else if (data > t->data) {
            t = t->rchild;
        } else {
            return;
        }
    }

    p = getNode(data);

    if (p->data < r->data) {
        r->lchild = p;
    } else if (p->data > r->data) {
        r->rchild = p;
    }
}

int height(struct Node * root){
    int x,y;
    if(root == NULL){
        return 0;
    }
    x = height(root->lchild);
    y = height(root->rchild);
    return x>y?x+1:y+1;
}

struct Node * inPre(struct Node *p){
    while(p && p->rchild != NULL){
        p = p->rchild;
    }
    return p;
}
struct Node * inSucc(struct Node *p){
    while(p && p->lchild != NULL){
        p = p->lchild;
    }
    return p;
}

struct Node * Delete (struct Node *p,int key){
    struct Node *q;
    struct Node * root = p;
    if(p == NULL){
        if(p==root){
            root = NULL;
        }
        return NULL;
    }
    if(p->lchild == NULL && p->rchild == NULL){
        free(p);
        return NULL;
    }
    if(key < p->data){
        p->lchild = Delete(p->lchild,key);
    }else if(key > p->data){
        p->rchild = Delete(p->rchild,key);
    }else{
        if(height(p->lchild) > height(p->rchild)){
            q = inPre(p->lchild);
            p->data = q->data;
            p->lchild = Delete(p->lchild,q->data);
        }else{
            q = inSucc(p->rchild);
            p->data = q->data;
            p->rchild = Delete(p->rchild,q->data);
        }
    }
    return p;
}

// Function to search for a node in the BST
struct Node* search(struct Node* root, int key) {
    struct Node* t = root;
    while (t != NULL) {
        if (key == t->data) {
            return t;
        } else if (key > t->data) {
            t = t->rchild;
        } else {
            t = t->lchild;
        }
    }
    return NULL; // Node not found
}



int count(struct Node * root){
    if(root == NULL){
        return 0;
    }
    return count(root->lchild) + count(root->rchild) + 1;
}   

int height(struct Node * root){
    int x,y;
    if(root == NULL){
        return 0;
    }
    x = height(root->lchild);
    y = height(root->rchild);
    return x>y?x+1:y+1;
}

int sum(struct Node * root){
    if(root == NULL){
        return 0;
    }
    return sum(root->lchild) + sum(root->rchild) + root->data;
}

int num_leaf_nodes(struct Node * root){
    if(root == NULL){
        return 0;
    }
    if(root->lchild == NULL && root->rchild == NULL){
        return 1;
    }
    return num_leaf_nodes(root->lchild) + num_leaf_nodes(root->rchild);
}

void inOrder(struct Node * root){
    if(root != NULL){
        inOrder(root->lchild);
        printf("%d  ",root->data);
        inOrder(root->rchild);
    }
}

int main() {
    struct Node* root = NULL;

    // Insert nodes into the BST
    insert(&root, 50);
    insert(&root, 30);
    insert(&root, 70);
    insert(&root, 20);
    insert(&root, 40);
    insert(&root, 60);
    insert(&root, 80);
    inOrder(root);

    // Search for a node
    int key = 30;
    struct Node* result = search(root, key);
    
    if (result != NULL) {
        printf("Node with key %d found: %d\n", key, result->data);
    } else {
        printf("Node with key %d not found.\n", key);
    }

    // You can now perform various operations on the BST.

    return 0;
}
