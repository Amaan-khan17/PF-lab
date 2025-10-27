#include<stdio.h>
int main()
{
	int m,n,T,i,j;
	printf("Enter number of rows of matrix : ");
	scanf("%d",&m);
	printf("Enter number of columns of matrix : ");
	scanf("%d",&n);
	
	int A[m][n];
	for (i=0;i<m;i++){
	  printf("\n%d row\n",i+1);

		for (j=0;j<n;j++){
		printf("\nEnter %d element of matrix : ",j+1);
		scanf("%d",&A[i][j]);
}
	}
	for (i=0;i<m;i++){
		for (j=0;j<n;j++){
			if (A[i][j]==0)
			T++;
		}
		}
	
	if (T >= ((m * n) / 2 ))
	    	printf("\nMatrix is Sparse");
		else 
			printf("\nMatrix is not Sparse");
	return 0;
}