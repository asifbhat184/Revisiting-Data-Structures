#include"MyHeader.h"
main(){
	struct Node *start=NULL;
	int choice=0,data;

	printf("\n\nHello!\n**** welcome to demo prog of Doubly-Linked list***\n");

	while(choice!=8){
		printf("\n\nEnter:\n\t1 to insert At Head\n\t2 to show \n\t3 to delete\n\t4 to insert at End\n\t5 to print in reverse\n\t8 to exit\n\n");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("\nEnter the element you want to Insert\n");
				scanf("%d",&data);
				start=insertAtHead(start,data);
				break;
			case 2:
				printf("the elements are:\n");
				show(start);
				break;
			case 3:
				deleteAtEnd(start);
				break;
			case 4:

				printf("\nEnter the element you want to Insert\n");
				scanf("%d",&data);
				start=insertAtEnd(start,data);	
				break;
			case 5:
				printInReverse(start);
				break;
			case 8:
				printf("Exiting..thanks!\n");
				break;
			default:
				printf("invalid choice\n");
				break;




		}


	}}


