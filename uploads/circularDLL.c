#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
/*
//deletion at the specified position in CDLL
struct node{
	int data;
	struct node *prev;
	struct node *next;
};
void main()
{
	struct node *temp,*start,*p,*ptr;
	int choice=1,x;
	start=NULL;
	while(choice)
	{
		temp=(struct node*)malloc(sizeof(struct node));
		printf("enter a number:");
		scanf("%d",&x);
		temp->data=x;
		temp->prev=NULL;
		temp->next=NULL;
		if(start==NULL)
		{
			start=temp;
			start->next=start;
			start->prev=start;
			p=temp;
		}
		else
		{
			p->next=temp;
			temp->prev=p;
			temp->next=start;
			p->prev=temp;
			p=p->next;
		}
		printf("do you want to continue");
		scanf("%d",&choice);
	}
	p=start;
	while(p->next!=start)
	{
		printf("%d",p->data);
		p=p->next;
	}
	printf("%d",p->data);
	printf("\n deletion at the specified position\n");
	int pos,i;
	printf("enter a position");
	scanf("%d",&pos);
	p=start;
	for(i=1;i<pos-1;i++)
	{
		p=p->next;
	}
	temp=p->next;
	p->next=temp->next;
	temp->next->prev=p;
	temp->next=NULL;
	free(temp);
	p=start;
	while(p->next!=start)
	{
		printf("%d",p->data);
		p=p->next;
	}
	printf("%d",p->data);
	
	
/*
//deletion at the end in CDLL
struct node{
	int data;
	struct node *prev;
	struct node *next;
};
void main()
{
	struct node *temp,*start,*p,*ptr;
	int choice=1,x;
	start=NULL;
	while(choice)
	{
		temp=(struct node*)malloc(sizeof(struct node));
		printf("enter a number:");
		scanf("%d",&x);
		temp->data=x;
		temp->prev=NULL;
		temp->next=NULL;
		if(start==NULL)
		{
			start=temp;
			start->next=start;
			start->prev=start;
			p=temp;
		}
		else
		{
			p->next=temp;
			temp->prev=p;
			temp->next=start;
			p->prev=temp;
			p=p->next;
		}
		printf("do you want to continue");
		scanf("%d",&choice);
	}
	p=start;
	while(p->next!=start)
	{
		printf("%d",p->data);
		p=p->next;
	}
	printf("%d",p->data);
	printf("\n deletion at the end\n");
	while(p->next->next!=start)
	{
		p=p->next;
	}
	temp=p->next;
	p->next=temp->next;
	temp->prev=NULL;
	free(temp);
	p=start;
	while(p->next!=start)
	{
		printf("%d",p->data);
		p=p->next;
	}
	printf("%d",p->data);
	*/
	
	
/*
//deletion at the begining in CDLL
struct node{
	int data;
	struct node *prev;
	struct node *next;
};
void main()
{
	struct node *temp,*start,*p,*ptr;
	int choice=1,x;
	start=NULL;
	while(choice)
	{
		temp=(struct node*)malloc(sizeof(struct node));
		printf("enter a number:");
		scanf("%d",&x);
		temp->data=x;
		temp->prev=NULL;
		temp->next=NULL;
		if(start==NULL)
		{
			start=temp;
			start->next=start;
			start->prev=start;
			p=temp;
		}
		else
		{
			p->next=temp;
			temp->prev=p;
			temp->next=start;
			p->prev=temp;
			p=p->next;
		}
		printf("do you want to continue");
		scanf("%d",&choice);
	}
	p=start;
	while(p->next!=start)
	{
		printf("%d",p->data);
		p=p->next;
	}
	printf("%d",p->data);
	printf("\n deletion at the begining\n");
	temp=start;
	start=temp->next;
	p->next=start;
	start->prev=NULL;
	free(temp);
	p=start;
	while(p->next!=start)
	{
		printf("%d",p->data);
		p=p->next;
	}
	printf("%d",p->data);
	*/
	
	
/*
//insertion at begining in DCLL
struct node{
	int data;
	struct node *prev;
	struct node *next;
};
void main()
{
	struct node *temp,*start,*p,*ptr,*newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	int choice=1,x;
	start=NULL;
	while(choice)
	{
		temp=(struct node*)malloc(sizeof(struct node));
		printf("enter a number:");
		scanf("%d",&x);
		temp->data=x;
		temp->prev=NULL;
		temp->next=NULL;
		if(start==NULL)
		{
			start=temp;
			start->next=start;
			start->prev=start;
			p=temp;
		}
		else
		{
			p->next=temp;
			temp->prev=p;
			temp->next=start;
			p->prev=temp;
			p=p->next;
		}
		printf("do you want to continue");
		scanf("%d",&choice);
	}
	p=start;
	while(p->next!=start)
	{
		printf("%d",p->data);
		p=p->next;
	}
	printf("%d",p->data);
	printf("enter a new node:");
	scanf("%d",&newnode->data);
	newnode->next=start;
	start->prev=newnode;
	start=newnode;
	p->next=start;
	p=start;
	while(p->next!=start)
	{
		printf("%d",p->data);
		p=p->next;
	}
	printf("%d",p->data);
	*/
	
/*
//inserting at specified position in CDLL
struct node{
	int data;
	struct node *prev;
	struct node *next;
};
void main()
{
	struct node *temp,*start,*p,*ptr,*newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	int choice=1,x;
	start=NULL;
	while(choice)
	{
		temp=(struct node*)malloc(sizeof(struct node));
		printf("enter a number:");
		scanf("%d",&x);
		temp->data=x;
		temp->prev=NULL;
		temp->next=NULL;
		if(start==NULL)
		{
			start=temp;
			start->next=start;
			start->prev=start;
			p=temp;
		}
		else
		{
			p->next=temp;
			temp->prev=p;
			temp->next=start;
			p->prev=temp;
			p=p->next;
		}
		printf("do you want to continue");
		scanf("%d",&choice);
	}
	p=start;
	while(p->next!=start)
	{
		printf("%d",p->data);
		p=p->next;
	}
	printf("%d",p->data);
	int pos,i;
	printf("enter a newnode:");
	scanf("%d",&newnode->data);
	printf("enter position");
	scanf("%d",&pos);
	p=start;
	for(i=1;i<pos-1;i++)
	{
		p=p->next;
	}
	newnode->next=p->next;
	p->next->prev=newnode;
	p->next=newnode;
	newnode->prev=p;
		ptr=start;
	while(ptr->next!=start)
	{
		printf("%d",ptr->data);
		ptr=ptr->next;
	}
	printf("%d",ptr->data);
*/

/*
//insertion at end in CDLL
struct node{
	int data;
	struct node *prev;
	struct node *next;
};
void main()
{
	struct node *temp,*start,*p,*ptr,*newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	int choice=1,x;
	start=NULL;
	while(choice)
	{
		temp=(struct node*)malloc(sizeof(struct node));
		printf("enter a number:");
		scanf("%d",&x);
		temp->data=x;
		temp->prev=NULL;
		temp->next=NULL;
		if(start==NULL)
		{
			start=temp;
			start->next=start;
			start->prev=start;
			p=temp;
		}
		else
		{
			p->next=temp;
			temp->prev=p;
			temp->next=start;
			p->prev=temp;
			p=p->next;
		}
		printf("do you want to continue");
		scanf("%d",&choice);
	}
	p=start;
	while(p->next!=start)
	{
		printf("%d",p->data);
		p=p->next;
	}
	printf("%d",p->data);
	printf("enter a newnode:");
	scanf("%d",&newnode->data);
	p=start;
	while(p->next!=start)
	{
		p=p->next;
	}
	newnode->next=p->next;
	newnode->prev=p;
	p->next=newnode;
	p=start;
	while(p->next!=start)
	{
		printf("%d",p->data);
		p=p->next;
	}
	printf("%d",p->data);
	*/
	
	

//creating a CDLL
struct node{
	int data;
	struct node *prev;
	struct node *next;
};
void main()
{
	struct node *temp,*start,*p,*ptr;
	int choice=1,x;
	start=NULL;
	while(choice)
	{
		temp=(struct node*)malloc(sizeof(struct node));
		printf("enter a number:");
		scanf("%d",&x);
		temp->data=x;
		temp->prev=NULL;
		temp->next=NULL;
		if(start==NULL)
		{
			start=temp;
			start->next=start;
			start->prev=start;
			p=temp;
		}
		else
		{
			p->next=temp;
			temp->prev=p;
			temp->next=start;
			p->prev=temp;
			p=p->next;
		}
		printf("do you want to continue");
		scanf("%d",&choice);
	}
	p=start;
	while(p->next!=start)
	{
		printf("%d",p->data);
		p=p->next;
	}
	printf("%d",p->data);
	
	
}
