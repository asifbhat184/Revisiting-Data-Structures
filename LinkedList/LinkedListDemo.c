#include"MyHeader.h"


main(){

	struct Node *start=NULL;
	int choice=0,element;
	printf("\n\nHello!\n**** welcome to demo prog of Linked list***\n");

	while(choice!=8){
		printf("\n\nEnter:\n\t1 to insert\n\t2 to show \n\t3 to delete\n\t4 to insert at head\n\t5 to print in reverse\n\t6 to reverse\n\t7 to reverse using recursion\n\t8 to exit\n\n");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("\nEnter the element you want to Insert\n");
				scanf("%d",&element);
				start=insertElement(start,element);
				break;
			case 2:
				printf("the elements are:\n");
				showElements(start);
				break;
			case 3:
				deleteAtEnd(start);
				break;
			case 4:

				printf("\nEnter the element you want to Insert\n");
				scanf("%d",&element);
				start=insertAtHead(start,element);	
				break;
			case 5:
				printInReverse(start);
				break;
			case 6:
		start=reverse(start);
				break;
			case 7:
				//leteElement();
				break;
			case 8:
				printf("Exiting..thanks!\n");
				break;
			default:
				printf("invalid choice\n");
				break;




		}


	}}


