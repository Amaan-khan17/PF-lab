#include<stdio.h>
void printArray(int *array,int n)
{
	printf("\n[");
		for (int k=0;k<n;k++){
			printf (" %d ",array[k]);
		}
		printf("]\n");
}
int main()
{
int len,opt,i;

printf("Enter number of element : ");
scanf("%d",&len);

int arr[len];                     

for (int i=0;i<len;i++){
	printf("\nEnter %d element : ",i+1);
	scanf("%d",&arr[i]);
}

printf("\nSelect weather you want to arrange the array in Accending or Decending order\n1: Ascending\n2: Descending\n\n");
scanf("%d",&opt);

printf("orignal array\n[");
for (int i=0;i<len;i++){
	printf(" %d ",arr[i]);
}
printf("]\n");

switch(opt){


case 1:
	   for(i=0;i<len-1;i++){
   	 int temp;
   	 printf("\n%d pass \n[",i+1);
		for (int k=0;k<len;k++){
			printf (" %d ",arr[k]);
		}
		printf("]\n");
   	 for(int j=0;j<len-1-i;j++){
   	 	if (arr[j]>arr[j+1]){
   	 		
   	 		temp=arr[j];
   	 		arr[j]=arr[j+1];
   	 		arr[j+1]=temp;
			}
		printArray(arr,len);
		}
		
   }
   break;
   
case 2:
	   for(i=0;i<len-1;i++){
   	 int temp;
   		printf("\n%d swap \n[",i+1);
		for (int k=0;k<len;k++){
			printf (" %d ",arr[k]);
		}
		printf("]\n");
   	 for(int j=0;j<len-1-i;j++){
   	 	if (arr[j]<arr[j+1]){
   	 		
   	 		temp=arr[j];
   	 		arr[j]=arr[j+1];
   	 		arr[j+1]=temp;
			}
		printArray(arr,len);
		}
		
   }
   break;
  
  default:
  	printf("Invalid option");
}
	return 0;
}
