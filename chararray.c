#include <stdio.h>

int main()
{
	char name[] = "Aayush"; // edit this line
	char user[454];    // create this line and replace N with however many elements you think is necessary
	
	// Prompt the user for their name
	// Use scanf("%s", &user) to store the user's name
	printf("What is your name? ");
    scanf("%s", &user);

	printf("Hello %s. Nice to mean you. My nane is %s\n",user ,name );

	return 0;
}
