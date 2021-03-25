#include "header.h"
#include "struct.h"
#include "prototype.h"
void operation(int ch,struct node *head)
{
	switch(ch)
	{
		case 1:	addfirst(head);
			break;

		case 2:	addany(head);
			break;

		case 3: addlast(head);
			break;

		case 4: display(head);
			break;

		case 5: removefirst(head);
			break;

		case 6: removeany(head);
			break;

		case 7: removelast(head);
			break;

		case 8: search(head);
			break;

		case 9: reverse(head);
			break;

		case 10: nodelength(head);
			 break;

		case 11: exit(1);
	}
}
