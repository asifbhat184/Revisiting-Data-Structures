#include"MyHeader.h"
struct Node* createNode(int data){
	struct Node *temp=(struct Node*)malloc(sizeof(struct Node));
	temp->data=data;
	temp->prev=NULL;
	temp->next=NULL;

	return temp;
}

/**Function to insert At the Beginning of the List**/
struct Node* insertAtHead(struct Node *temp,int data){
	if(temp==NULL){
		temp=createNode(data);
		return temp;

	}
	struct Node *temp2;
	temp2=createNode(data);
	temp2->next=temp;
	temp->prev=temp2;
	return temp2;

}

/**Functions to show the elements in the list**/
void show(struct Node *start){
	if(start==NULL){
		printf("List is empty");
		return;
	}
/**If we check for start->next != NULL,we are missing the display of element for which Next==NULL i.e last element of list**/	
	while(start!=NULL){
		printf("-->%d",start->data);
		start=start->next;
	}

}

/**Functions to insert elements at the end**/
struct Node* insertAtEnd(struct Node *start,int data){
	if(start==NULL){
		start=createNode(data);
		return start;
	}
	
	struct Node *temp2,*temp=start;
	temp2=createNode(data);
	while(temp->next!=NULL)
		temp=temp->next;
	temp->next=temp2;
	temp2->prev=temp;

	return start;
}
/**Function to delete elements at end**/
void deleteAtEnd(struct Node *temp){
	if(temp==NULL)
		return;
	struct Node *savedPtr;
	while(temp->next!=NULL){
		savedPtr=temp;
		temp=temp->next;
	}
	free(temp);
	savedPtr->next=NULL;

}
