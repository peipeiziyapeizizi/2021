#include <stdio.h>

int main()
{
    int lower,upper,F;
    double C;
    scanf("%d %d",&lower,&upper);     //�����˼�& �����˼�& �����˼�&
    if(lower>upper)
	{
    	printf("Invalid.");
    }else
	{
    	printf("fahr celsius\n");
    }
    for(lower;lower<=upper;lower=lower+2)
    {
    	F=lower;
    	C=5*(F-32)/9;
    	printf("%d%6.1f\n",F,C);      //ռ��6���ַ��������ô��ʾ�ģ����� 
    }
    
    return 0;
}
