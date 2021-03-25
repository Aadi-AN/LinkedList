#include "header.h"
#include "struct.h"
#include "prototype.h"
void addlast(struct node *head)
{
	struct node *temp,*p;
	temp=createnode();
	printf("Enter node data:");
	scanf("%d",&temp->data);
	temp->link=NULL;
			
	if(head->link==NULL)
	{	
		head->link=temp;
	}	
	else
	{
		p=head;
		while(p->link!=NULL)
		{
			p=p->link;
			
		}
		p->link=temp;
	}
}
