#include <stdio.h>
#include <stdlib.h>

//��һ���������;���õ�ʱ�䣬��ʽΪ��hh:mm��
//����hhΪ2λСʱ����mmΪ2λ������������03:29  
//��������ô��ʾ�� 

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
    printf("%02d:%02d",h,m); //"%02d:%02d"���Ǹ��¶�������ס�� 
	return 0;
} 
