#include "header.h"
#include "struct.h"
#include "prototype.h"
void display(struct node *head)
{
	struct node *p;
	if(head->link==NULL)
	{
		printf("The linked list is empty\n");
	}
	else
	{	
		p=head;
		printf("The elements in the linked list are:\n");
		while(p->link!=NULL)
		{
			p=p->link;
			printf("Data=%d\tAddress=%p\n",p->data,p);
			//p=p->link;
		}
	}
}
