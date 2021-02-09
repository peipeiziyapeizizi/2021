#include <stdio.h>
#include <math.h>

int main()
{
	float money,year,rate,interest;
	//这里用double似乎行不通，应该是我哪里错了 
	//去网上看了一下，随后用float
	//用float的话，下面就要用%f 
	
	scanf("%f %f %f",&money,&year,&rate);
	//注意！%f与%f之间要用空格 
	
	interest=money*pow(1+rate,year)-money;
	
	printf("interest = %.2f",interest);
	
	return 0;
}
