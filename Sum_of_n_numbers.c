#include<stdio.h>

int main(){
	
	int i,n; 
	int s =0;

	printf("\n Enter n");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
		s=s+i;
	printf("\n %d",s);

	return 0;
}