#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

int main() {
    char selection;
    int numProblems = 0;
    int correctAnswers = 0;

    srand(time(NULL));
	
	char title[] = "Jenice, Brandon, Max, and Bryan's Math Program Practice Main Menu";
	puts(title);
	
		
    while (1) {
        printf("\nEnter 'A' for Addition Practice\n");
        printf("Enter 'B' for Subtraction Practice\n");
        printf("Enter 'C' for Multiplication Practice\n");
        printf("Enter 'D' for Division Practice\n");
        printf("Enter 'E' to exit program\n");
        printf("Please make your selection.\n");
        scanf(" %c", &selection, 1);
		selection = toupper(selection); 
		
        int result = 0;

        switch (selection) {
            case 'A':
                result = additionPractice();
                break;
            case 'B':
                result = subtractionPractice();
                break;
            case 'C':
                result = multiplicationPractice();
                break;
            case 'D':
                result = divisionPractice();
                break;
            case 'E':
                showStatistics(numProblems, correctAnswers);
                return 0;
            default:
                printf("Please enter a valid letter.\n");
                continue;
        }

        numProblems++;
        if (result == 1) correctAnswers++;
    }
}
