//double (circular ) linked list (full)
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
	struct node *prev;
};
void Icirculardoublell_end()
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
}
void Icirculardoublell_begining()
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
}
void Icirculardoublell_atspecifiedposition()
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
}
void Dcirculardoublell_end()
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
}
void Dcirculardoublell_begining()
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
}
void Dcirculardoublell_atspecifiedposition()
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
}
void Idoublell_begining()
{
	struct node *start,*temp,*p,*ptr,*newnode;
	int x,choice=1;
	start=NULL;
	while(choice)
	{
		temp=(struct node*)malloc(sizeof(struct node));
		printf("enter a number:");
		scanf("%d",&x);
		temp->data=x;
		temp->next=NULL;
		temp->prev=NULL;
		if(start==NULL)
		{
			start=temp;
			p=temp;
		}
		else
		{
			p->next=temp;
			temp->prev=p;
			p=p->next;
		}
		printf("do you want to continue :");
		scanf("%d",&choice);
	}
	printf("traversing in forward direction\n");
	ptr=start;
	while(ptr!=NULL)
	{
		printf("%d",ptr->data);
		ptr=ptr->next;
	}
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("enter a new node:");
	scanf("%d",&newnode->data);
		newnode->next=start;
		start=newnode;
		p->prev=newnode;
		
	ptr=start;
	while(ptr!=NULL)
	{
		printf("%d",ptr->data);
		ptr=ptr->next;
	}
}
void Idoublell_end()
{
	struct node *start,*temp,*p,*ptr,*newnode;
	int x,choice=1;
	start=NULL;
	while(choice)
	{
		temp=(struct node*)malloc(sizeof(struct node));
		printf("enter a number:");
		scanf("%d",&x);
		temp->data=x;
		temp->next=NULL;
		temp->prev=NULL;
		if(start==NULL)
		{
			start=temp;
			p=temp;
		}
		else
		{
			p->next=temp;
			temp->prev=p;
			p=p->next;
		}
		printf("do you want to continue :");
		scanf("%d",&choice);
	}
	printf("traversing in forward direction\n");
		if(start==NULL)
	{
		printf("DLL is empty");
	}
	ptr=start;
	while(ptr!=NULL)
	{
		printf("%d",ptr->data);
		ptr=ptr->next;
	}
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("enter a new node:");
	scanf("%d",&newnode->data);
	p=start;
	while(p->next!=NULL)
	{
		p=p->next;
	}
		p->next=newnode;
		newnode->prev=p;
	ptr=start;
	while(ptr!=NULL)
	{
		printf("%d",ptr->data);
		ptr=ptr->next;
	}
}
void Idoublell_atspecifiedposition()
{
	struct node *start,*temp,*p,*ptr,*newnode;
	int x,choice=1;
	start=NULL;
	while(choice)
	{
		temp=(struct node*)malloc(sizeof(struct node));
		printf("enter a number:");
		scanf("%d",&x);
		temp->data=x;
		temp->next=NULL;
		temp->prev=NULL;
		if(start==NULL)
		{
			start=temp;
			p=temp;
		}
		else
		{
			p->next=temp;
			temp->prev=p;
			p=p->next;
		}
		printf("do you want to continue :");
		scanf("%d",&choice);
	}
	printf("traversing in forward direction\n");
		if(start==NULL)
	{
		printf("DLL is empty");
	}
	ptr=start;
	while(ptr!=NULL)
	{
		printf("%d",ptr->data);
		ptr=ptr->next;
	}
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("enter a new node:");
	scanf("%d",&newnode->data);
	int pos,i;
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
	while(ptr!=NULL)
	{
		printf("%d",ptr->data);
		ptr=ptr->next;
	}
}
void Ddoublell_begining()
{
	struct node *start,*temp,*p,*ptr,*newnode;
	int x,choice=1;
	start=NULL;
	while(choice)
	{
		temp=(struct node*)malloc(sizeof(struct node));
		printf("enter a number:");
		scanf("%d",&x);
		temp->data=x;
		temp->next=NULL;
		temp->prev=NULL;
		if(start==NULL)
		{
			start=temp;
			p=temp;
		}
		else
		{
			p->next=temp;
			temp->prev=p;
			p=p->next;
		}
		printf("do you want to continue :");
		scanf("%d",&choice);
	}
	printf("traversing in forward direction\n");
		if(start==NULL)
	{
		printf("DLL is empty");
	}
	ptr=start;
	while(ptr!=NULL)
	{
		printf("%d",ptr->data);
		ptr=ptr->next;
	}
	printf("\ndeletion at the begining \n");
	p=start;
	temp=start;
	start=temp->next;
	start->prev=NULL;
	ptr=start;
	while(ptr!=NULL)
	{
		printf("%d",ptr->data);
		ptr=ptr->next;
	}
}
void Ddoublell_end()
{
	struct node *start,*temp,*p,*ptr,*newnode;
	int x,choice=1;
	start=NULL;
	while(choice)
	{
		temp=(struct node*)malloc(sizeof(struct node));
		printf("enter a number:");
		scanf("%d",&x);
		temp->data=x;
		temp->next=NULL;
		temp->prev=NULL;
		if(start==NULL)
		{
			start=temp;
			p=temp;
		}
		else
		{
			p->next=temp;
			temp->prev=p;
			p=p->next;
		}
		printf("do you want to continue :");
		scanf("%d",&choice);
	}
	printf("traversing in forward direction\n");
		if(start==NULL)
	{
		printf("DLL is empty");
	}
	ptr=start;
	while(ptr!=NULL)
	{
		printf("%d",ptr->data);
		ptr=ptr->next;
	}
	printf("\ndeletion at the end \n");
	p=start;
	while(p->next->next!=NULL)
	{
		p=p->next;
	}
	temp=p->next;
	temp->prev=NULL;
	p->next=NULL;
	ptr=start;
	while(ptr!=NULL)
	{
		printf("%d",ptr->data);
		ptr=ptr->next;
	}
}
void Ddoublell_atspecifiedposition()
{
	struct node *start,*temp,*p,*ptr,*newnode;
	int x,choice=1;
	start=NULL;
	while(choice)
	{
		temp=(struct node*)malloc(sizeof(struct node));
		printf("enter a number:");
		scanf("%d",&x);
		temp->data=x;
		temp->next=NULL;
		temp->prev=NULL;
		if(start==NULL)
		{
			start=temp;
			p=temp;
		}
		else
		{
			p->next=temp;
			temp->prev=p;
			p=p->next;
		}
		printf("do you want to continue :");
		scanf("%d",&choice);
	}
	printf("traversing in forward direction\n");
		if(start==NULL)
	{
		printf("DLL is empty");
	}
	ptr=start;
	while(ptr!=NULL)
	{
		printf("%d",ptr->data);
		ptr=ptr->next;
	}
	int pos,i;
	printf("enter a position:");
	scanf("%d",&pos);
	p=start;
	if(start==NULL)
	{
		start=temp;
		p=temp;
	}
	else
	{
	for(i=1;i<pos-1;i++)
	{
		p=p->next;
	}
	temp=p->next;
	p->next=temp->next;
	temp->next->prev=p;
	temp->next=NULL;
	//free(temp);
}
	ptr=start;
	while(ptr!=NULL)
	{
		printf("%d",ptr->data);
		ptr=ptr->next;
	}
}
void main()
{
	int choi=1;
	printf("1.insertion in circular double linked list at begining\n");
	printf("2.insertion in circular double linked list at end\n");
	printf("3.insertion in circular double linked list at specified position\n");
	printf("4.deletion in circular double linked list at begining\n");
	printf("5.deletion in circular double linked list at end\n");
	printf("6.deletion in circular double linked list at specified position\n");
	printf("7.insertion in double linked list at begining\n");
	printf("8.insertion in  double linked list at end\n");
	printf("9.insertion in  double linked list at specified position\n");
	printf("10.deletion in double linked list at begining\n");
	printf("11.deletion in  double linked list at end\n");
	printf("12.deletion in double linked list at specified position\n");
	while(choi)
	{
	int number;
	printf("enter a number to implement");
	scanf("%d",&number);
	switch(number)
	{
		case 1: Icirculardoublell_begining();break;
		case 2: Icirculardoublell_end();break;
		case 3: Icirculardoublell_atspecifiedposition();break;
		case 4: Dcirculardoublell_begining();break;
		case 5: Dcirculardoublell_end();break;
		case 6: Dcirculardoublell_atspecifiedposition();break;
		case 7: Idoublell_begining();break;
		case 8: Idoublell_end();break;
		case 9: Idoublell_atspecifiedposition();break;
		case 10: Ddoublell_begining();break;
		case 11: Ddoublell_end();break;
		case 12: Ddoublell_atspecifiedposition();break;
		default :printf("THANK YOU");
	}
	printf("Do you want to continue");
	scanf("%d",&choi); 
    }
}
