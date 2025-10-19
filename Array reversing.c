#include<stdio.h>
int main()
{
	int arr[5];
	int i,n=5;
	//array input
	for(i=0;i<5;i++){
		printf("Enter the %d element of array : ",i+1);
		scanf("%d",&arr[i]);
	}
	//Printing original array
	printf("\n\nOriginal array");
	 printf("\n{");	
	for (i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if (i < n - 1)
            printf(", ");
    }
    printf("}\n");
    
	//reversing logic
	for (i=0;i<2;i++){
		int first = arr[i];
	int	secound= arr[4-i];
		 arr[i]=secound;
		 arr[4-i]=first;
	
	}
//printing reversed array
	printf("\nReversed array");
	 printf("\n{");
 for (i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if (i < n - 1)
            printf(", ");
    }
    printf("}\n");
 
	return 0;
	 }	 