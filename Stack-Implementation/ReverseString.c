/*Author:Asif bhat
 *Desc:program to reverse a string eneted though stdio ,by implementing stack
 */

//Header Files
#include<stdio.h>
#include<stdlib.h>

//Node
struct Node{
	char data;
	struct Node* next;
};

//Function Declaration
void push(char);
struct Node *createNode(char);
void show();

//head as global 
struct Node *head=NULL;

main(){
	char ch;
	printf("Enter any String\n");
	while(ch!='\n'){
		ch=getchar();
		push(ch);
	}
	show();
}

//Function Definitions
void push(char ch){
	if(head==NULL)
		head=createNode(ch);
	else{
		struct Node *temp=createNode(ch);
		temp->next=head;
		head=temp;
	}

}

struct Node *createNode(char ch){
	struct Node *temp=(struct Node*)malloc(sizeof(struct Node));
	temp->data=ch;
	temp->next=NULL;
	return temp;
}

void show(){
	if(head==NULL){
		printf("Empty Stack\n");
	}
	else{
		struct Node *temp=head;
		printf("\n\n");
		while(temp!=NULL){
			printf("%c",temp->data);
			temp=temp->next;
		}
		printf("\n\n");
	}
}

