#include<stdio.h>
#include<stdlib.h>

/**Node**/
struct Node{
	int data;
	struct Node *prev;
	struct Node *next;
};
/**Function Declerations**/
struct Node* createNode(int);
struct Node* insertAtHead(struct Node*,int);
struct Node* insertAtEnd(struct Node*,int);
void deleteAtEnd(struct Node*);
void show(struct Node*);


