#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;

};
struct node *head=NULL;

void deteteatend()
{
	struct node *temp = head;
	struct node *pre;
	while(temp->next!= NULL)
		{
		 pre=temp;
		 temp = temp->next;
		 
		}
	pre-> next = NULL;
	printf("%d element is deleted  ",temp->data);
	free(temp);
	return;
}

void deleteatfront()
{
	struct node *temp;
	temp=head;
	if(temp!=NULL)
	{	
		head=temp->next;
		printf("%d has been deleted",temp->data);
		free(temp);
		
	}
	else
		printf("linked list is empty");
	
	return;
}

void insertatend()
{
	int data;
	printf("eneter the data: ");
	scanf("%d",&data);
	struct node *newnode = (struct node *)malloc(sizeof(struct node));
	struct node *temp = head;
	newnode->data = data;
	newnode->next = NULL;
	while(temp->next!=NULL)
		temp = temp->next;
	temp->next=newnode;
	return;
	
}
void insertatfront()
{
	int data;
	printf("enter the element: ");
	scanf("%d",&data);
	struct node *newnode = (struct node *)malloc(sizeof(struct node));
	newnode->data = data;
	newnode->next = head;
	head = newnode;
	return;
}

void display()
{
	node *temp = head;
	while(temp!=NULL)
	{
		printf("%d  ",temp->data);
		temp = temp->next;
	}
	printf("\n");
}

void insertatpos()
{
	int data,pos,i;
	struct node *ptr,*swap,*temp;
	printf("\nenter the value to input : ");
	scanf("%d",&data);
	printf("\n enter the possition");
	scanf("%d",&pos);
	temp=(struct node*)malloc(sizeof(struct node));
	temp->data=data;
	temp->next=NULL;
	if(head==NULL)
	  {
	    head=temp;
	  }
	else
	  {
	    ptr=head;

	    for(i=1;i<(pos-1)&&(ptr->next!=NULL);i++)
	       {
		 printf("%d",ptr->data);
		 ptr=ptr->next;
	       }
	    if(i==(pos-1))
	       {
		 swap=ptr->next;
		 ptr->next=temp;
		 temp->next=swap;
	       }
	     else
	       {
		 printf("invalid position");
	       }
	  }
}

void deleteatpos()
{
	int pos,i=1;
		struct node *dlt,*pre;
		dlt=head;
		printf("enter the postion of element to be deleted");
		scanf("%d",&pos);
		if(dlt!=NULL)
		 {
			while(dlt->next!=NULL&&i<(pos))
			  {
				i++;
				pre=dlt;
				dlt=dlt->next;
				printf("\n %d   %d",1,dlt->data);


			  }
			  if(i==pos && dlt==head)
			    {
					head=dlt->next;
					printf("head is changed");
					printf("\n the deleting elements is %d th value %d",i,dlt->data);
					free(dlt);

				}
			  else if(i==pos)
			    {
					pre->next=dlt->next;
					printf("\n the deleting elements is %d th value %d",i,dlt->data);
					free(dlt);
				}
			  else
			      printf("invalid possition");	
		 }
		else
		printf("the linked list is empty"); 
}

void search()
{
	struct node *temp;
	int item,flag=0,i=1;
	printf("Enter the item to be searched : ");
	scanf("%d",&item);
	temp=head;
	while((temp->next!=NULL || temp->next==NULL)&& flag==0)
	{
		if(temp->data==item)
		{
			flag++;
		}
		else
		{
			temp=temp->next;
			i++;
		}
	}
	if(flag==1)
	{
		printf("item found at postiton %d",i);
	}
	else
		printf("Item not found!!!");
}

int main()
{
	int ch;
	do
	{
		printf("\n 1. insert from front \n 2. insert at end \n 3. insert at position \n 4. delete at end \n 5. delete at front \n 6. delete from a position \n 7. display \n 8.search \n 9. exit\n ");
		printf("enter your choice: ");
		scanf("%d",&ch);
		switch(ch)
		{
	 	 case 1:
			insertatfront();
			break;
		 case 2: 
			insertatend();
			break;
		 case 3: 
			insertatpos();
			break;
		 case 4:
		 	deteteatend();
		 	break;
		 	
		 case 5:
		 	deleteatfront();
		 	break;
		 case 6:
		 	deleteatpos();
		 	break;	
		 case 7:	
			display();
			break;
		 case 8:
		 	search();
		 	break;
		 case 9:
			exit(0);
		default: 
			printf("wrong option");
			
		}
	}while(1);
	
	
	
	
	
	
	
	return 0;
}
