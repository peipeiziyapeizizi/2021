#include<stdio.h>
double fact(int num){
	double result=num;
	for(int i=num-1;i>0;i--){
		result*=i;
	}
	return result;
}
int main(){
	int num1=0,num2=0;
	double a=0,b=0,c=0;
	double result=0;
	scanf("%d %d",&num1,&num2);
	if(num1==num2){
		printf("result = 1");
	}else{
		a=fact(num2);
		b=fact(num1);
		c=fact(num2-num1);
		printf("result = %1.0f",a/(b*c));  //%m.nfָ����������ݹ�ռm�У�������nλС����
	}                                      //�����ֵ����С��m������˲��ո�
	return 0;
}
