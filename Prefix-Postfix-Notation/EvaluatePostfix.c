#include"Header.h"
int evaluatePostfix(char expression[]){
	struct Node *start= NULL;
	int result;
	for(int i=0;i<9;i++){
		printf("%c,",expression[i]);
		if(expression[i]=='*'||expression[i]=='+'||expression[i]=='-'){
			int num1=top(start);
			start=pop(start);
			int num2=top(start);
			start=pop(start);
			if(expression[i]=='*')
				result=num1 * num2;
			else if(expression[i]=='+')
				result=num1 + num2;
			else if(expression[i]=='-')
				result=num2 - num1;
			printf("pushing result %d on stack",result);
			start=push(start,result);
		}
		else
		{
			printf("pushing %d on stack",expression[i]);
			start=push(start,expression[i]-'0');
		}

	}
	return top(start);



}

