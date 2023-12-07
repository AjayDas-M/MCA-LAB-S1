#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *left;
    struct node *right;
};

void insert()
{
   int data;
   printf("Enter the element to be inserted : ");
   scanf("%d",&data);
   node *newnode = (node *)malloc(sizeof(node));
   node->data=data
   newnode->left = NULL;
   newnode->right = NULL;
   
   
   
   
   
    return;
}

void delete()
{
    return;
}

void search()
{
    return;
}

void display()
{
    return;

}




int main()
{
    int ch;
    do
    {
        printf("\n 1.Insertion \n 2.Deletion \n 3.Search \n 4.Dispaly \n 5.Exit \n");
        printf("Enter your choice : ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                    insert();
                    break;
            case 2:
                    delete();
                    break;
            case 3:
                    search();
                    break;
            case 4:
                    display();
                    break;
            case 5:
                    exit(0);
            default:
                    printf("Wrong choice!!!");
            
        }
    }while(1);
    return 0;
}