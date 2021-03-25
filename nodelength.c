#include "header.h"
#include "struct.h"
#include "prototype.h"
void nodelength(struct node *head)
{
	struct node *p;
	int i = 0;
	if(head->link==NULL)
	{
		printf("The linked list is empty\n");
	}
	else
	{
		p=head;
	//	printf("The elements in the linked list are:\n");
		while(p->link!=NULL)
		{
			i++;
			p=p->link;
		//	printf("Data=%d\tAddress=%p\n",p->data,p);
			//p=p->link;
		}
	}
	printf("The lenght of linked list is: %d\n\n", i);
}


