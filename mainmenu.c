#include "header.h"
int mainmenu()
{
	int ch;
										
	printf("==MAINMENU\n==");
	printf("1.Addfirst\n");
	printf("2.Addany\n");
	printf("3.Addlast\n");
	printf("4.Display\n");
	printf("5.Removefirst\n");
	printf("6.Removeany\n");
	printf("7.Removelast\n");
	printf("8.Search\n");
	printf("9.Reverse\n");
	printf("10.Length\n");
	printf("11.Exit\n");
	printf("==Enter your choice:");
	scanf("%d",&ch);
					
	return ch;	
}

