#include <stdio.h>
#include <math.h>

int main()
{
	float money,year,rate,interest;
	//������double�ƺ��в�ͨ��Ӧ������������� 
	//ȥ���Ͽ���һ�£������float
	//��float�Ļ��������Ҫ��%f 
	
	scanf("%f %f %f",&money,&year,&rate);
	//ע�⣡%f��%f֮��Ҫ�ÿո� 
	
	interest=money*pow(1+rate,year)-money;
	
	printf("interest = %.2f",interest);
	
	return 0;
}
