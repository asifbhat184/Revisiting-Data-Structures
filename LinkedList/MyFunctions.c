#include"MyHeader.h"
/**Function to create New Node**/
struct  Node* createNode(int value){
	struct Node *temp;
	temp=(struct Node*)malloc(sizeof(struct Node));
	temp->data=value;
	temp->next=NULL;
	return temp;


}
/**Function to insert Element**/
struct Node* insertElement(struct Node* start,int value){
	struct Node *ptr;
	if(start==NULL){
		start=createNode(value);

	}else{

		ptr=start;
		while(ptr->next!=NULL){
			ptr=ptr->next;
		}	
		ptr->next=createNode(value);
	}
	return start;

}




/**Function to traverse/display elements in a linked list**/
void showElements(struct Node* start){
	struct Node *ptr=start;
	printf("\n\nElements in Linked list are:\n");
	while(ptr!=NULL){
		printf("-->%d ",ptr->data);
		ptr=ptr->next;

	}



}

/**Function to Print elements in reverse***/
void printInReverse(struct Node* temp){
	if(temp==NULL){
		return;
	}else{

		printInReverse(temp->next);
		printf("-->%d ",temp->data);
	}





}

/*Function to delete Elements at th end**/
void deleteAtEnd(struct Node* temp){
	if(temp==NULL)
		return;
	struct Node* savedPtr=NULL;
	while(temp->next!=NULL){
		savedPtr=temp;
		temp=temp->next;
	}
	free(temp);
	savedPtr->next=NULL;

}


/**Function to insert at the head**/
struct Node* insertAtHead(struct Node* temp,int value){
	if(temp==NULL){
		temp=createNode(value);
		return temp;
	}else{
		struct Node* temp2;
		temp2=createNode(value);
		temp2->next=temp;
		return temp2;

	}}


/**Function to reverse the linked list**/
struct Node* reverse(struct Node* start){
	if(start==NULL)
		return start;

	struct Node *prev,*next,*curr;
	prev=NULL;
	curr=start;
	next=curr;

	while(curr!=NULL){
		next=curr->next;
		curr->next=prev;
		prev=curr;
		curr=next;

	}
	return prev;
}

/**Function to reverse the list using recursion**/
struct Node* reverseUsingRecursion(struct Node *ptr){
	if(ptr==NULL)
		return NULL;
	else {

		if(ptr->next==NULL){

			return ptr;
		}else{
	struct Node *rev=reverseUsingRecursion(ptr->next);
				struct Node *ptr2=ptr->next;
			ptr2->next=ptr;
			ptr->next=NULL;
return rev;
		}
	
}
}
