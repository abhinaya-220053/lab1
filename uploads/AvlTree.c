#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node* left;
    struct node* right;
};

struct node* newnode(int x) {
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->data = x;
    temp->left = temp->right = NULL;
    return temp;
}

struct node* insert(struct node* root, int data) {
    if (root == NULL) {
        root = newnode(data);
        return root;
    }

    if (data <= root->data) {
        root->left = insert(root->left, data);
    }
    else {
        root->right = insert(root->right, data);
    }

    return root;
}

void inorder(struct node* root) {
    if (root!=NULL) {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}
int height(struct node *root)
{
	int lst,rst;//left sub tree,right sub tree
	if(root==NULL)
	{
		return 0;
	}
	else
	{
		lst=height(root->left);
		rst=height(root->right);
	}
	if(lst>rst)
		{
			printf("%d",lst+1);
		}
		else
		{
			printf("%d",rst+1);

		}
}

int main() 
{
    struct node* root = NULL;
    int choice;
    printf("enter an element:");
	scanf("%d",&choice);
    while(choice)
	{
    root = insert(root, choice);
	printf("enter an element:");
	scanf("%d",&choice);
	}
    printf("\nInorder traversal of the BST: ");
    inorder(root);
    printf("\nthe height of the BS:");
	height(root);
}
