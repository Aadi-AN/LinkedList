#include "header.h"
#include "struct.h"
#include "prototype.h"
void reverse(struct node *head)
{
	struct node *curr,*t1,*t2;
	curr=head;
	if(head->link!=NULL)
	{
		curr=curr->link;
		t1=curr;
		curr=curr->link;
		t2=curr;
		t1->link=NULL;
	}
	while(curr->link!=NULL)
	{
		curr=curr->link;
		t2->link=t1;
		t1=t2;
		t2=curr;
	}
	t2->link=t1;
	head->link=curr;
}
