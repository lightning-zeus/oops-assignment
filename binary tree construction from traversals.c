#include <stdio.h>
#include <stdlib.h>
 

struct Node
{
    int key;
    struct Node *left, *right;
};
 

struct Node* newNode(int key)
{
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->key = key;
    node->left = node->right = NULL;
 
    return node;
}
 

void inorder_func(struct Node* root)
{
    if (root == NULL)
        return;
 
    inorder_func(root->left);
    printf("%d ", root->key);
    inorder_func(root->right);
}
 

void preorder_func(struct Node* root)
{
    if (root == NULL)
        return;
 
    printf("%d ", root->key);
    preorder_func(root->left);
    preorder_func(root->right);
}
 

struct Node* construct(int inorder[], int start, int end,
                int preorder[], int *pIndex)
{
   
    if (start > end)
        return NULL;
 
    
    struct Node *node = newNode(preorder[(*pIndex)++]);
 
  
    int i;
    for (i = start; i <= end; i++) {
        if (inorder[i] == node->key)
            break;
    }
 

    node->left = construct(inorder, start, i - 1, preorder, pIndex);
 
    node->right = construct(inorder, i + 1, end, preorder, pIndex);
 
   
    return node;
}
 

struct Node* constructTree(int inorder[], int preorder[], int n)
{
   
    int *pIndex;
 
  
    pIndex = 0;
 
    return construct(inorder, 0, n - 1, preorder, &pIndex);
}
 
int main()
{
   
 
    int inorder[]  = { 4, 2, 1, 7, 5, 8, 3, 6 };
    int preorder[] = { 1, 2, 4, 3, 5, 7, 8, 6 };
    int n = sizeof(inorder)/sizeof(inorder[0]);
 
    struct Node* root = constructTree(inorder, preorder, n);
 
   
    printf("Inorder  : "); inorder_func(root);
    printf("\nPreorder : "); preorder_func(root);
 
    return 0;
}