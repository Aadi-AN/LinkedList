#include "header.h"
#include "struct.h"
#include "prototype.h"
struct node* createnode()
{
	struct node *n;
	n=((struct node*)malloc(sizeof(struct node*)));
	return n;
}

