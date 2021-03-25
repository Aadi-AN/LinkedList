
#include "header.h"
#include "struct.h"
#include "prototype.h"

void addany(struct node *head)
{
	struct node *temp,*p;
	int i,n;
	temp=createnode();
	printf("Enter the data:");
	scanf("%d",&temp->data);
	if(head->link==NULL)
	{
		head->link=temp;
	}
	else
	{
		printf("Enter the position where node to be added:");

		scanf("%d",&n);
		if(n==1)
		{
			temp->link=head->link;
			head->link=temp;
		}
		else
		{
			p=head->link;
			for(i=1;i<n-1;i++)
			{
				p=p->link;
			}
			temp->link=p->link;
			p->link=temp;
		}

	}
}


