#include<stdio.h>
#include<math.h>
int main()
{
	int i,m,n;
	double sum;
	scanf("%d %d",&m,&n);
	sum=0;
	for(i=m;i<=n;i++){           //��ס������Ҳ����д�� 
		sum=sum+pow(i,2)+1.0/i;  //for(m;m<=n;m=m+1)
	}                            //    sum=sum+pow(m,2)+1.0/m; 
	printf("sum = %.6f",sum);    //Ҳ���ǲ�����һ��i 
	
	return 0;
}
