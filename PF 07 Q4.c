#include<stdio.h>
int main()
{
		int m,n,i,j;
		//for rows and column input
	printf("Enter number of rows of a square matrix : ");
	scanf("%d",&m);
	printf("Enter number of columns of a square matrix : ");
	scanf("%d",&n);
	
	//check for a square matrix
	if (m==n){
	int S_Matrix[m][n];
	//matrix input
	for (i=0;i<m;i++){
	  printf("\n%d row\n",i+1);

		for (j=0;j<n;j++){
		printf("\nEnter %d element of Row : ",j+1);
		scanf("%d",&S_Matrix[i][j]);
	}
   }
  //printing orignal matrix 
      printf("\nOrignal Matrix \n");
    	for (i=0;i<m;i++){
    		printf("[");
		for (j=0;j<n;j++){
		printf(" %d ",S_Matrix[i][j]);
	   if (j==n-1){
	   printf("]\n");

	}
   }
  }
   //transpose logic and printing 
   printf("\nTransposed Matrix\n");
    	for (i=0;i<m;i++){
    		printf("[");
		for (j=0;j<n;j++){
		printf(" %d ",S_Matrix[j][i]);
}
	   printf("]\n");
   
  }

  //checking matrix is symmetric or not
  int Symmetric =1;
  for (i=0;i<m;i++){
  	for(j=0;j<n;j++){
  		if (S_Matrix[i][j]!=S_Matrix[j][i]){	  
  		Symmetric=0;
  		break;
  	   }
  	}
	  }
	  if (Symmetric)
	  printf("\nMatrix is symmetric...");
	  else
	  printf("\nMatrix is asymmetric...");

 }
    else
    printf("\n\nInvalid matrix dimensions! Must be a square matrix.");
	return 0;

}
