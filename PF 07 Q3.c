 #include <stdio.h>
#include<string.h>
int main() {
	
    char FN[50];
    char LN[50];

    printf("\nEnter your first name : ");
    scanf("%s", FN); 
    
    printf("\nEnter your last name : "); 
    scanf ("%s",LN);
    
    strcat(FN," ");
    strcat(FN,LN);
    
    printf("\nFull Name = %s",FN);
    int total_character;
    total_character=strlen(FN);
    printf("\nTotal number of characters (including space): %d\n", total_character);
    return 0;
}