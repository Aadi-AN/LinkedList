#include "header.h"
#include "struct.h"
#include "prototype.h"
void main()
{
		struct node *head;
		int ch;
		head=((struct node*)malloc(sizeof(struct node)));
		while(1)
		{
			ch=mainmenu();
			operation(ch,head);
		}
}
