#include<stdio.h>
int main()
{
	int i,num,sum;
	float avg;
	printf("Enter number of elements : ");
	scanf("%d",&num);
	int arr[num];
	for(i=0;i<num;i++){
		printf("\nEnter %d element : ",i+1);
		scanf("%d",&arr[i]);
	}
	
	for (i=0;i<num;i++){
	if (arr[i]>0){
		sum+=arr[i];
	}
}
	avg=sum/num;
	
	printf("\nSum of elements = %d",sum);
	printf("\nAverage = %.2f",avg);
	return 0;
}