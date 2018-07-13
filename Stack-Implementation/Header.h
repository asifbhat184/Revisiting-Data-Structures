#include<stdio.h>
#include<stdlib.h>

//Node to store data of type int
struct Node{
	int data;
	struct Node *next;
};

//Node to store Address
struct Stack{
	struct Node *data;
	struct Stack *next;
};

struct Node *head=NULL;
struct Stack *stackhead=NULL;
struct Node *createNode(int data);
void show();
int isEmpty();
void pop();
void insert(int data);
void reverse();
struct Node *top();
void push(struct Node *data);
struct Stack *createstackNode(struct Node *data);
void showInStack();
