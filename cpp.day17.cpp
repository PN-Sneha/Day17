#include<stdio.h>
main(){
	
	int n,e,i,h;
	scanf("%d",&n);  // for how many numbers
	i=1;
	while(i<=n){
		scanf("%d",&e);
		if(i==1)h=e;
		if(e<h)
			h=e;
		i++;
	}
	printf("\nlowest %d",h);
	
}
