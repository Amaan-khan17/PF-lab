#include <stdio.h>
int main(){
	
int i,j,k,L;
for(i=1;i<=5;i++){
    	for(j=5;j>i;j--){
	printf(" ");
}
for(k=1;k<=(2*i)-1;k++){
	printf("*");

}
  printf("\n");
}
//-------------------------------------------------------------------------

for(i=1;i<=5;i++){
    	for(j=1;j<=i;j++){
	printf(" ");
}
for(k=7;k>=(2*i)-1;k--){
	printf("*");

}
  printf("\n");
}
    return 0;
}