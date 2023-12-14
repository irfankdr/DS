#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node*link;
};
struct node*header=NULL;

void insfrnt(int item)
{
	struct node*new;
	new=(struct node*)malloc(size of(struct node);
	new->data=item;
	if(header==NULL)
	{

		header=new;
		new->link=NULL;
	}
	
	else
	{
		new->link=header;
		header=new;
	}
}

void insend(int item)
{	
	//for the first node

	struct node*new;
	new=(struct node*) malloc(sizeof(struct node));
	new->data=item;
	new->link=NULL;
	if(header==NULL)
	{

		header=new;
		
		
	}
	
	else
	{
		struct node*temp=header;
		while(temp->link!=NULL)
		{
			temp=temp->link;	
		}
		temp->link=new;
		
	}
}



void inspos(int item,int key)
{	
	

	struct node*new;
	new=(struct node*) malloc(sizeof(struct node));
	new->data=item;
	struct node*temp=header;
		while((temp->data!=key) && (temp->link!=NULL))
		{
			temp=temp->link;	
		}
	if((temp->link==NULL)&&(temp->data==key))
		{
			new->link=NULL;
			temp->link=new;
		}
	else if((temp->link==NULL)&&(temp->data!=key))
		{
			printf("key not found");
		}
	else
		{
			new->link=temp->link;
			temp->link=new;	
		}
}

void delfront()
{
	if(header==NULL)
	{
		printf("list is empty");
	}
	else
	{
		struct node*temp=header;
		header=temp->link;
		free(temp);
	}
}
	
void delend()
{
	if(header==NULL)
	{
		printf("list is empty");
	}
	elseif(header->link==NULL)
	{
		header=NULL;
	}
	else
	{
		struct node* temp1=header;
		struct node* temp2=header;
		while(temp1 ->link!=NULL)
	{
		temp2=temp1;
		temp1=temp1->link;
	}
		temp2->link=NULL;
		free(temp1);
	}
}

void delpos(int key)
{
	if(header==NULL)
	{
		printf("list is empty");
	}
	else
	{
		struct node* temp1=header;
		struct node* temp2=header;
		while((temp!=NULL)&&(temp1->data!=key))
	{
		temp2=temp1;
		temp1=temp1->link;
	}
	if(temp1==NULL)
	{
		printf("key not found");
	}
	else
	{
	if(temp2->link==NULL)
	{
		free(temp2);
		header=NULL;
	}
	else	
	{
		if(temp1==header)
	{
		header=temp1->link;
	}
	else
	{
		temp2->link=temp1->link;
	}
	free(temp1);
	}
	}
	}	
}	
	
void disp()
{
	if(header==NULL)
	{
		printf("\n ----list is empty---\n");
	}
	else
	{
		struct node*temp=header;
		printf("\n entered items are :\n");
	
	while(temp!=NULL)
	{
		printf("%d",temp->data);
		temp=temp->link;
	}
	printf("\n");
	}
}
	
void search(int key)
{
	int count=0;
	if(header==NULL)
	{
		printf("\n---list is empty---\n");
	}
	else
	{
		struct node*temp1=header;
		while((temp1->data!=key)&&(temp1->link!=NULL))
	{
		temp1=temp1->link;
		count++;
	}
	if((temp1->link==NULL)&&(temp1->data!=key))
	{
		printf("key not found");
	}	
	else
	{
		printf("\n key found at position %d\n",count+1);
	}
	}
}
	
	int main()
	{
		int z,k,c;
		printf("---Linked List Operation---\n");
	
	while(1)
	{
		printf("\n1. Insert at front\n2. Insert at end\n 3.Insert after position\n4. Delete at front\n5. Delete at end\n6. Delete node 			at any position\n7. Display Elements\n8.Search position of Elements\n9. Exit");
		printf("\n Select the options\n");
		scanf("%d",&c);
		
	switch(c)
	{
		Case1:
			printf("\nEnter the data to insert at front\n");
			scanf("%d",&z);
			insfrnt(z);
			break;
		Case2:
			printf("\nEnter the data to insert at end\n");
			scanf("%d",&z);
			insend(z);
			break;
		Case3:
			disp();
			printf("\n---Select the position---\n");
			scanf("%d",&k);			
			printf("\nEnter the data to insert after the position\n");
			scanf("%d",&z);
			insend(z,k);
			break;
		Case4:
			delfront();
			break;
		Case5:
			delend();
			break;
		Case6:
			disp();
			printf("\n---Select the position---\n");
			scanf("%d",&k);
			break;
		Case7:
			disp();
			break;
		Case8:
			printf("\n---Enter the key---\n");
			scanf("%d",&k);
			search(k);
			break;
		Case9:
			printf("\nbye bye....");
			exit(0);
			break;
		Default:
			printf("Wrong input....");
		}
	}
	return 0;
}
			
				
	



