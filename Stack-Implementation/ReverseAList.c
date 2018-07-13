#include"Header.h"

main(){
	printf("welcome\n");

	insert(23);
	insert(54);
	insert(88);
	insert(77);
	show();
	reverse();
	show();

}
//Insert data to list
void insert(int data){
	if(head==NULL){
		head=createNode(data);
	}else{
		struct Node *temp=head;
		while(temp->next!=NULL)
			temp=temp->next;
		temp->next=createNode(data);
	}
}
//create node in list
struct Node *createNode(int data){
	struct Node *temp=(struct Node *)malloc(sizeof(struct Node));
	temp->next=NULL;
	temp->data=data;
	//	printf("Node created");
	return temp;
}
//shows elements in list
void show(){
	printf("Elements in List");
	if(head==NULL){
		printf("List is Empty");
	}else{
		struct Node *temp=head;
		while(temp!=NULL){
			printf("-->%d",temp->data);
			temp=temp->next;
		}
		printf("\n\n\n");
	}
}
//shows elements in Stack
void showInStack(){
	printf("Adresses in  Stack:\n");
	if(stackhead==NULL){
		printf("stack is Empty");
	}else{
		struct Stack  *temp=stackhead;
		while(temp!=NULL){
			printf("-->%p",temp->data);
			temp=temp->next;
		}
		printf("\n\n\n");
	}
}
//Funtion to reverse using stack
void reverse(){
	if(head==NULL){
		printf("List Is Empty");
		return; 
	}else{
		struct Node *temp=head;
		while(temp!=NULL){
			push(temp);
			temp=temp->next;
		}
		showInStack();
		head=top();
		struct Node  *temp2;
		while(!isEmpty()){
			temp2=top();
			pop();
			temp2->next=top();
		}

	}

}
//Pushes Adresses to stack
void push(struct Node *data){

	if(stackhead==NULL){
		stackhead=createstackNode(data);
	}else{
		struct Stack *temp=stackhead;
		while(temp->next!=NULL)
			temp=temp->next;
		temp->next=createstackNode(data);
	}
}
//creates nodes in stack
struct Stack *createstackNode(struct Node *data){

	struct Stack *temp=(struct Stack *)malloc(sizeof(struct Stack));
	temp->next=NULL;
	temp->data=data;
	return temp;
}

//pops out elemtes from stack
void pop(){
	struct Stack *temp=stackhead;
	struct Stack *savedPtr;
	if(temp==NULL)return;
	if(temp->next==NULL){
		free(temp);
		stackhead=NULL;
		return;
	}

	while(temp->next!=NULL){
		savedPtr=temp;
		temp=temp->next;

	}
	savedPtr->next=NULL;
	if(stackhead->next!=NULL){
		free(temp);
	}else{
		stackhead==NULL;
		free(temp);
	}
}
//Gives the top element of stack
struct Node *top(){
	if(stackhead==NULL){
		return NULL;
	}else{
		struct Stack *temp=stackhead;
		while(temp->next!=NULL){
			temp=temp->next;
		}
		return temp->data;

	}
}
//Ckecks if stack is empty
int  isEmpty(){

	if(stackhead==NULL)
		return 1 ;
	else 
		return 0;
}

