#include<stdio.h>
#include<math.h>
int main()
{
	int i,m,n;
	double sum;
	scanf("%d %d",&m,&n);
	sum=0;
	for(i=m;i<=n;i++){           //记住，这里也可以写成 
		sum=sum+pow(i,2)+1.0/i;  //for(m;m<=n;m=m+1)
	}                            //    sum=sum+pow(m,2)+1.0/m; 
	printf("sum = %.6f",sum);    //也就是不用设一个i 
	
	return 0;
}
