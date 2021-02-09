#include <stdio.h>

int main()
{
	float n,cost;

    scanf("%f",&n);

    if(n<0){
    	printf("Invalid Value!");
    }
    else if(n<=50){
    	cost=n*0.53;
    	printf("cost = %.2f",cost);
    }
    else{
        cost=(n-50)*0.58+50*0.53;
        printf("cost = %.2f",cost);
    }
    
    return 0;
}
