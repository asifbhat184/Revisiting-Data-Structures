#include<stdio.h>
#include<stdlib.h>

//Node to store data of type int
struct Node{
	int data;
	struct Node *next;
};


struct Node *createNode(int);
struct Node  *pop(struct Node *);
struct Node *push(struct Node *,int );
void showInStack(struct Node *);
int evaluatePostfix(char[]);
int top(struct Node*);
