#include <stdio.h>
int main()
{
	int N,t=-1;
	float sum=0.0;
    float i=1;
	scanf("%d",&N);
	for(i=1;i<=N;i++){
        t=-t;
		sum=sum+t*i/(2*i-1);
	}
	printf("%.3f",sum);
	
	return 0;
}
