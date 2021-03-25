#include "header.h"
#include "struct.h"
#include "prototype.h"
void removeany(struct node *head)
{
	struct node *t,*p;
	int cnt=0,nu;
	printf("Enter the number u want to be deleted:");
	scanf("%d",&nu);
	t=head->link;
	
	while(t!=NULL)
	{
		cnt++;
		if(cnt==nu)
		{
			if(nu==1)
			{
				head->link= t->link;
				free(t);
			}
			else
			{
				p->link=t->link;
				t->link=NULL;
				free(t);
			}
		}
		else
		{
			p=t;
			t=t->link;
		}
	}
}
