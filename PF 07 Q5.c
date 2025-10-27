#include<stdio.h>
int main()
{
	int m,n;
	printf("Enter no of rows of matrix : ");
	scanf("%d",&m);
	printf("\nEnter no of columns of matrix : ");
	scanf("%d",&n);
	
	int Matrix[m][n];
	for(int i=0;i<m ;i++){
		printf("\n%d Row\n",i+1);
		for(int j=0;j<n;j++){
			printf("\nEnter %d element of row : ",j+1);
			scanf("%d",&Matrix[i][j]);
		}
	}
	
	
 printf("\nOrignal Matrix \n");
    	for (int i=0;i<m;i++){
    		printf("[");
		for (int j=0;j<n;j++){
		printf(" %d ",Matrix[i][j]);
	
   }
      printf("]\n");
  }
	int max = Matrix[0][0];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (Matrix[i][j] > max) {
                max = Matrix[i][j];
            }
        }
    }
    printf("Maximum element is : %d",max);
	return 0;
}