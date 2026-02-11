#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
//ending
/*struct node{
	int data;
	struct node *next;
};
void main()
{
	struct node *start,*temp,*p,*ptr;
	int x,choice=1;
	start=NULL;
	while(choice)
	{
	printf("enter a number:");
	scanf("%d",&x);
	temp=(struct node*) malloc(sizeof(struct node));
	temp->data=x;
	temp->next=0;
	if(start==NULL)
	{
		start=temp;
		p=temp;
	}
	else
	{
		p->next=temp;
		p=p->next;
	}
    printf("do you want to continue then press 1:");
    scanf("%d",&choice);
}
ptr=start;
while(ptr!=NULL)
{
	printf("%d",ptr->data);
	ptr=ptr->next;
}
struct node{
	int data;
	struct node *next;
};
struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter a newnode:");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    if(start==NULL)
    {
    	start=newnode;
    	p=newnode;
    }
    else{
	p=start;
	while(p->next!=NULL)
	{
	 p=p->next;
	 }
	 p->next=newnode;
	}
ptr=start;
while(ptr!=NULL)
{
	printf("%d",ptr->data);
	ptr=ptr->next;
}
}
*/





//begining
//	struct node{
//	int data;
//	struct node *next;
//};
//void main()
//{
	struct node *start,*temp,*p,*ptr;
	int x,choice=1;
	start=NULL;
	while(choice)
	{
	printf("enter a number:");
	scanf("%d",&x);
	temp=(struct node*) malloc(sizeof(struct node));
	temp->data=x;
	temp->next=0;
	if(start==NULL)
	{
		start=temp;
	//	p=temp;
	}
	else
	{
		p->next=temp;
		p=p->next;
	}
    printf("do you want to continue then press 1:");
    scanf("%d",&choice);
}
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter a newnode:");
    scanf("%d",&newnode->data);
    newnode->next=start;
    start=newnode;
	ptr=start;
	while(ptr!=NULL)
	{
		printf("%d",ptr->data);
		ptr=ptr->next;
	}



/*
//at sepcified positon
	struct node{
	int data;
	struct node *next;
};
void main()
{
	struct node *start,*temp,*p,*ptr;
	int x,choice=1;
	start=NULL;
	while(choice)
	{
	printf("enter a number:");
	scanf("%d",&x);
	temp=(struct node*) malloc(sizeof(struct node));
	temp->data=x;
	temp->next=0;
	if(start==NULL)
	{
		start=temp;
		p=temp;
	}
	else
	{
		p->next=temp;
		p=p->next;
	}

    printf("do you want to continue then press 1:");
    scanf("%d",&choice);
}
ptr=start;
while(ptr!=NULL)
{
	printf("%d",ptr->data);
	ptr=ptr->next;	
}
struct node *newnode;
newnode=(struct node*)malloc(sizeof(struct node));
printf("enter a newnode:");
scanf("%d",&newnode->data);
newnode->next=NULL;
int pos;
printf("enter a position:");
scanf("%d",&pos);
	int i;
	p=start;
	for(i=1;i<pos-1;i++)
	{
		p=p->next;
	}
		newnode->next=p->next;
		p->next=newnode;
ptr=start;
while(ptr!=NULL)
{
	printf("%d",ptr->data);
	ptr=ptr->next;
}
}
*/
