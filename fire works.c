#include<stdio.h>
int main()
{
	int i,j,k,z,rows;
	
	printf("Enter num of rows you want : ");
	scanf("%d",&rows);
	for(i=1;i<=rows;i++){
		for(j=4;j>i;j--){
		
		printf(" ");
}
	    for(k=0;k<=j;k++){
		
		for(z=rows;z>=i;z--){
		
		printf(" ");
	}
	    printf("*");
	}
	   printf("\n");
	}
	   
	
	return 0;
} 