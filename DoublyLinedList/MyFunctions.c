#include"MyHeader.h"
struct Node* createNode(int data){
struct Node *temp=(struct Node*)malloc(sizeof(struct Node);
		temp->data=data;
		temp->prev=NULL;
		tem->next=NULL;

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
tem2->next=temp;
return temp2;

}

/**Functions to show the elements in the list**/
void show(struct Node *start){
if(start==NULL){
printf("List is empty");
return;
}	
while(start->next!=NULL){
printf("-->%d",start->data);
}	
}
