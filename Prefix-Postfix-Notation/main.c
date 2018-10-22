#include"Header.h"
main(){
	struct Node *start=NULL;

	char expression[]={'2','3','*','5','4','*','+','9','-'};
	printf("Expression= ");
	for(int i=0;i<10;i++){
		printf("%c",expression[i]);
	}
	printf("\n\n\n");
	int result=evaluatePostfix(expression);
	printf("\nAnswer:%d",result);

}
