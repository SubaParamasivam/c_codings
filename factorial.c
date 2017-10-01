#include<stdio.h>

int main(){
	int n,i;
	long f;

	printf("\n Enter n");
	scanf("%d",&n);
	f=1;

	for(i=1;i<=n;i++)
		f=f*i;
	printf("\n %ld",f);

	return 0;
}