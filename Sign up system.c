#include<stdio.h>
#include<string.h>
int main()
{
	int opt;
	char emails[5][50]={
	"ghufran@gmail.com",
	"aina@gmail.com",
	"Saif@gmail.com"
	};
	char passwords[5][50]={
	"Hello12345",
	"0nepieceisreal",
	"xyz987654321"
	};
	printf("===== Welcome to the login system =====\n");
	printf("\n 1:Sign in\n 2:Sign up");
	printf("\n\n Enter your choice : ");
	scanf("%d",&opt);
	
	int success=0;
		char Email[50],Pass[50];
			 int totalUsers = 3; 
	switch(opt){
		
		
		case 1:
		printf("\n Enter your email : ");
		scanf("%s",Email);
		printf(" Enter your password : ");
		scanf("%s",Pass); 
		
		for (int i=0;i<3;i++){
				if (strcmp(Email,emails[i]) ==0 && strcmp(Pass,passwords[i])==0){
			printf("\nSign in succesful...");
			success=1;
			break;
}
}
      if (!success){
          printf("\nInvalid credentials\nTry again...");
}
        break;
         
	
		case 2:	
		  for (int i = totalUsers; i < 5; i++) {
        int emailExists = 0;

        printf("\nEnter your email: ");
        scanf("%s", Email);

        
        for (int i = 0; i < totalUsers; i++) {
            if (strcmp(Email,emails[i]) == 0) {
              printf("Email already exists!\n");
                emailExists = 1;
                break;
            }
        }

        if (emailExists) {
             continue; 
        }

        printf("Enter your password: ");
        scanf("%s", Pass);


        if (strlen(Pass) < 8) {
            printf("Password must be at least 8 characters long!\n");
            continue;
        }

    
        strcpy(emails[i], Email);
        strcpy(passwords[i], Pass);
        totalUsers++;

        printf("Account created successfully! Please sign in now.\n");
        
          char N_Email[50],N_Pass[50];
    
    	printf("\n Enter your email : ");
		scanf("%s",N_Email);
		printf(" Enter your password : ");
		scanf("%s",N_Pass); 
		
		for (int i=3;i<5;i++){
				if (strcmp(N_Email,emails[i]) ==0 && strcmp(N_Pass,passwords[i])==0){
			printf("\nSign in succesful...");
			success=1;
			break;
}
}
      if (!success){
          printf("\nInvalid credentials\nTry again...");
}
        break;
    }

    if (totalUsers >= 5) {
        printf("\nUser limit reached. Cannot register more users.\n");
    }
		break;
		
		default:
			printf("\nInvalid choice...");
	}
	
	
	
	return 0;
}