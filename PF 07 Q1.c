#include<stdio.h>
int main()
{
	int i,num,sum,p_num=0;
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
		p_num++;
	}
	else
   printf("\nAll numbers are negative");
   break;
}
	avg=sum/p_num;
	
	printf("\nSum of positive numbers = %d",sum);
	printf("\nAverage of positive numbers = %.2f",avg);
	return 0;
}
