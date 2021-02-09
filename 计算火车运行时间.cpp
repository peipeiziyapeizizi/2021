#include <stdio.h>
#include <stdlib.h>

//在一行输出该旅途所用的时间，格式为“hh:mm”
//其中hh为2位小时数、mm为2位分钟数，例：03:29  
//问题是怎么表示？ 

int main()
{
	int h,m,t1,t2;
	scanf("%d %d",&t1,&t2);
    h=t2/100-t1/100;
    m=t2%100-t1%100;
    if(m<0)
    {
        m=60+m;
        h=h-1;
    }
    printf("%02d:%02d",h,m); //"%02d:%02d"这是个新东西，记住了 
	return 0;
} 
