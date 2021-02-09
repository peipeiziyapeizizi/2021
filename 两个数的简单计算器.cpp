#include <stdio.h>
int main(){
	int x1,x2;
	char s;
	scanf("%d %c %d",&x1,&s,&x2);
	switch (s){
		case '+':
		    printf("%d",x1+x2);
			break;
		case '-':
			printf("%d",x1-x2);
			break;
		case '*':
			printf("%d",x1*x2);
			break;
		case '%':
			printf("%d",x1%x2);
			break;
		case '/':
			printf("%d",x1/x2);
			break;
		default: 
		    printf("ERROR");
	}
	return 0;
}
