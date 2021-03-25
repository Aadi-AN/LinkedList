

//addfirst.c
#include "header.h"
#include "struct.h"
#include "prototype.h"

void addfirst (struct node *head)
{
	struct node *temp;
	temp=createnode();
	printf("Enter the data:");
	scanf("%d",&temp->data);
	temp->link=NULL;
	if(head->link == NULL)
	{
		head->link=temp;
	}
	else
	{
		temp->link=head->link;
		head->link=temp;
	}
}


