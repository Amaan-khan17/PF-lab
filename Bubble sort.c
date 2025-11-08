#include<stdio.h>
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

printf("\nSelect weather you want to arrange the array in Accending or Decending order\n1: Accending\n2: Decending\n");
scanf("%d",&opt);

switch(opt){


case 1:
	   for(i=0;i<len-1;i++){
   	 int temp;
   	 for(int j=0;j<len-1-i;j++){
   	 	if (arr[j]>arr[j+1]){
   	 		
   	 		temp=arr[j];
   	 		arr[j]=arr[j+1];
   	 		arr[j+1]=temp;
			}
		}
   }
    i=0;
   printf("[ ");
   while(i<len){
   	printf("%d ",arr[i]);
   i++;
   }
   
   printf(" ]");
   break;
   
case 2:
	   for(i=0;i<len-1;i++){
   	 int temp;
   	 for(int j=0;j<len-1-i;j++){
   	 	if (arr[j]<arr[j+1]){
   	 		
   	 		temp=arr[j];
   	 		arr[j]=arr[j+1];
   	 		arr[j+1]=temp;
			}
		}
   }
   i=0;
   printf("[ ");
   while(i<len){
   	printf("%d ",arr[i]);
   i++;
   }
   
   printf(" ]");
   break;
  
  default:
  	printf("Invalid option");
}
	return 0;
}