#include "header.h"
#include "struct.h"
#include "prototype.h"

void removelast(struct node *head)
{
	struct node *temp,*p;
	if(head->link==NULL)
	{
		printf("The linked list  is empty\n");
	}
	else
	{
		p=head->link;
		temp=head;
		while(p->link!=NULL)
		{
			temp=p;
			p=p->link;
		}
		p->link=NULL;
		temp->link=NULL;
		free(p);
	}
}
