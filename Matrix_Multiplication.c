#include<stdio.h>
int main(){
	int a[10][10], b[10][10], d[10][10];
	int r1, c1, r2, c2;
	int i, j, k;

	printf("\n Enter r1, c1, r2, c2");
	scanf("%d %d %d %d",&r1,&c1,&r2,&c2);
	if(c1==r2){
		for(i=0; i<r1;i++)
			for(k=0;k<c1;k++) {
				printf("\n Enter Element");
				scanf("%d",&a[i][k]);
			}
		for(k=0; k<r2;k++)
			for(j=0;j<c2;j++) {
				printf("\n Enter Element");
				scanf("%d",&b[k][j]);
			}

		for(i=0; i<r1;i++)
			for(j=0;j<c2;j++)
				d[i][j]=0;

		
		for(i=0; i<r1; i++)
			for(j=0;j<c2;j++)
				for(k=0;k<c1;k++)
					d[i][j]= d[i][j] + a[i][k] * b[k][j];

		for(i=0; i<r1;i++){
			for(j=0;j<c2;j++)
				printf("\t %d",d[i][j]);
			printf("\n");
		}
	}
	else
		printf("\n Mat mul not possible");

	return 0;
}