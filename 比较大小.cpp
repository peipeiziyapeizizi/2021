#include <stdio.h>
int main(){
	int a,b,c,max,med,min;
	scanf("%d %d %d",&a,&b,&c);
	if(a>b,a>c){
		max=a;
		if(b>c){
			med=b;
			min=c;
		}else{
			med=c;
			min=b;
		}
	}else if(b>a,b>c){
		max=b;
		if(a>c){
			med=a;
			min=c;
		}else{
			med=c;
			min=a;
		}
	}else if(c>a,c>b){
        max=c;
        if(a>b){
            med=a;
            min=b;
        }else{
            med=b;
            min=a;
        }
    }
	printf("%d->%d->%d",min,med,max);
	
	return 0;
}
