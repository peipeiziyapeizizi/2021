#include <stdio.h>

int main()
{
    int g,s,b;
    
    g=152%100%10;
    s=152%100/10;
    b=152/100;
    
    printf("152 = %d + %d*10 + %d*100",g,s,b);
    
    return 0;
}
