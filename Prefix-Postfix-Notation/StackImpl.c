#include"Header.h"

/**creating node**/
struct Node *createNode(int data){
	struct Node *temp=(struct Node *)malloc(sizeof(struct Node));
	temp->data=data;
	temp->next=NULL;
	return temp;
}

/***Push function***/
struct Node *push(struct Node *start,int data){
	if(start==NULL){
		printf("\n\ncreating node for first time\n\n");
		start=createNode(data);
	}
	else{
		struct Node *temp=start;
		while(temp->next!=NULL)
			temp=temp->next;
		temp->next=createNode(data);
		printf("\n\ncreating nodee\n\n");

	}
	return start;
}

/**Pop function**/
struct Node* pop(struct Node *start){
	if(start==NULL)
	{
		printf("\n\nList empty\n");
		return NULL;
	}
	if(start->next==NULL){
		free(start);
		printf("\npoping last element ...\n");
		return NULL; 
	}
	printf("\npoping out ...\n");
	struct Node *temp=start;
	struct Node *svdptr=NULL;
	while(temp->next!=NULL){
		svdptr=temp;
		temp=temp->next;
	}
	svdptr->next=NULL;
	free(temp);
	return start;
}



void showInStack(struct Node *start){
	if(start==NULL){	
		printf("\n\nList is empty!\n\n");
		return;
	}
	struct Node *ptr=start;
	printf("\n\nElements in Linked list are:\n");
	while(ptr!=NULL){
		printf("-->%d ",ptr->data);
		ptr=ptr->next;

	}


}

int top(struct Node *start){
	if(start==NULL)
		return 0;
	while(start->next!=NULL){

		start=start->next;
	}
	return start->data;
}
