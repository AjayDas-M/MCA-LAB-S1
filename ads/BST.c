#include <stdio.h>
#include <stdlib.h>
struct node
{
  int key;
  struct node *left, *right;
};
int item, flag = 0;

void search(struct node *root)
{
  if (root != NULL)
  {
    search(root->left);
 
    if (item == root->key)
    {
      flag = 1;
    }
    search(root->right);
  }
}


struct node *newNode(int item)
{
  struct node *temp = (struct node *)malloc(sizeof(struct node));
  temp->key = item;
  temp->left = temp->right = NULL;
  return temp;
}


void inorder(struct node *root)
{
  if (root != NULL)
  {
    inorder(root->left);
    printf("%d -> ", root->key);
    inorder(root->right);
  }
}


struct node* insert(struct node *node, int key)
{
  if (node == NULL)
    return newNode(key);
  if (key < node->key)
    node->left = insert(node->left, key);
  else
    node->right = insert(node->right, key);
  return node;
}
#include <stdio.h>
#include <stdlib.h>
struct node
{
  int key;
  struct node *left, *right;
};
int item, flag = 0;

void search(struct node *root)
{
  if (root != NULL)
  {
    search(root->left);
 
    if (item == root->key)
    {
      flag = 1;
    }
    search(root->right);
  }
}


struct node *newNode(int item)
{
  struct node *temp = (struct node *)malloc(sizeof(struct node));
  temp->key = item;
  temp->left = temp->right = NULL;
  return temp;
}


void inorder(struct node *root)
{
  if (root != NULL)
  {
    inorder(root->left);
    printf("%d -> ", root->key);
    inorder(root->right);
  }
}


struct node *insert(struct node *node, int key)
{
  if (node == NULL)
    return newNode(key);
  if (key < node->key)
    node->left = insert(node->left, key);
  else
    node->right = insert(node->right, key);
  return node;
}


struct node *minValueNode(struct node *node)
{
  struct node *current = node;
  while (current && current->left != NULL)
    current = current->left;
  return current;
}


struct node *deleteNode(struct node *root, int key)
{
  if (root == NULL)
    return root;
  if (key < root->key)
    root->left = deleteNode(root->left, key);
  else if (key > root->key)
    root->right = deleteNode(root->right, key);
  else
  {
    if (root->left == NULL)
    {
      struct node *temp = root->right;
      free(root);
      return temp;
    }
    else if (root->right == NULL)
    {
      struct node *temp = root->left;
      free(root);
      return temp;
    }
    struct node *temp = minValueNode(root->right);
    root->key = temp->key;
    root->right = deleteNode(root->right, temp->key);
  }
  return root;
}

int main()
{
  struct node *root = NULL;
  int i, n, m, d, choice;

  do
  {
    printf("\n1. Insertion\n2. Deletion\n3. Search\n4. Exit\n");
    printf("\nEnter root", &m);
      		root = insert(root, m);
      		printf("\nInorder traversal:\n");
     		inorder(root);
     		break;
   
    	case 2:
      		printf("\nEnter the value to be deleted:\n");
      		scanf("%d", &item);
      		search(root);
     		if (flag == 0)
      		printf("element not found");
     		else
     		{
        		printf("\nAfter deleting %d\n", item);
        		root = deleteNode(root, item);
       			printf("Inorder traversal:\n");
       			inorder(root);
     		}

      		flag = 0;
      		break;
    
    	case 3:
     		printf("\n enter the value to be searched \n");
     		scanf("%d", &item);
     		search(root);
     		if (flag == 0)
     		  printf("element not found");
      	else
      	printf("%d found in binary search tree", item);
      	flag = 0;
	
	case 4:
     		  printf("\nExiting\n");
          break;
    }
  }while (choice != 4);
  return 0;
}



struct node *minValueNode(struct node *node)
{
  struct node *current = node;
  while (current && current->left != NULL)
    current = current->left;
  return current;
}


struct node *deleteNode(struct node *root, int key)
{
  if (root == NULL)
    return root;
  if (key < root->key)
    root->left = deleteNode(root->left, key);
  else if (key > root->key)
    root->right = deleteNode(root->right, key);
  else
  {
    if (root->left == NULL)
    {
      struct node *temp = root->right;
      free(root);
      return temp;
    }
    else if (root->right == NULL)
    {
      struct node *temp = root->left;
      free(root);
      return temp;
    }
    struct node *temp = minValueNode(root->right);
    root->key = temp->key;
    root->right = deleteNode(root->right, temp->key);
  }
  return root;
}

int main()
{
  struct node *root = NULL;
  int i, n, m, d, choice;

  do
  {
    printf("\n1. Insertion\n2. Deletion\n3. Search\n4. Exit\n");
    printf("\nEnter your choice : ");
    scanf("%d", &choice);
    switch (choice)
    {
    	case 1:
      		printf("Enter the element to be inserted : ");
      		scanf("%d", &m);
      		root = insert(root, m);
      		printf("\nInorder traversal:\n");
     		inorder(root);
     		break;
   
    	case 2:
      		printf("\nEnter the value to be deleted : ");
      		scanf("%d", &item);
      		search(root);
     		if (flag == 0)
      		printf("element not found");
     		else
     		{
        		printf("\nAfter deleting %d\n", item);
        		root = deleteNode(root, item);
       			printf("Inorder traversal:\n");
       			inorder(root);
     		}

      		flag = 0;
      		break;
    
    	case 3:
              printf("\n enter the value to be searched \n");
     		      scanf("%d", &item);
     		      search(root);
     		      if (flag == 0)
     		            printf("element not found");
      	      else
      	            printf("%d found in binary search tree", item);
      	      flag = 0;
	
	    case 4:
          exit(0);
    }
  }while (1);
  return 0;
}

