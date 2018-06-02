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

