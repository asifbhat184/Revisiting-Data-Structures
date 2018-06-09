#include<stdio.h>
#include <stdlib.h>
/**Node**/
struct Node{
	int data;
	struct	Node  *next;
};

struct Node* createNode(int );
struct Node*  insertElement(struct Node*,int);
void showElements(struct Node*);
void printInReverse(struct Node* );
void deleteAtEnd(struct Node* temp);
struct Node* insertAtHead(struct Node* temp,int value);
struct Node* reverse(struct Node* start);
