#include "header.h"
#include "struct.h"
#include "prototype.h"


void search(struct node *head)
{
	int cnt=0,flag=0,a;
	struct node *temp;
	if(head->link==NULL)
	{
		printf("The linked list is empty\n");
	}
	else
	{
		temp=head->link;
		printf("Enter the data u want u to search:");
		scanf("%d",&a);
		while(temp!=NULL)
		{
			if(temp->data==a)
			{
				cnt++;
				flag=1;
				break;	
			}
			cnt++;
			temp=temp->link;
		}
		if(flag==0)
		{
			printf("Number is not found\n");
		}
		else
		{
			printf("The number is found at %d position\n",cnt);
		}
	}
}
