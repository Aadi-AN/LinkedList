#include "header.h"
#include "struct.h"
#include "prototype.h"

void removefirst(struct node *head)
{
	struct node *p,*t;
	p=head->link;
	if(head->link==NULL)
	{
		printf("The linked list is empty\n");
	}
	else
	{
		head->link=p->link;
		free(p);
	}
					
}
