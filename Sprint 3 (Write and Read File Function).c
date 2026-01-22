#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

//printf provides output, which is the write function. Which provides the output of the code inside each function.
//scanf provides input, which is the read function. Which retrieves information from the user.

int divisionPractice() {
    int num2 = rand() % 100 + 1; 
    int solution = rand() % 100 + 1;
    int num1 = num2 * solution;
    int userResponse;

    printf("Please divide these numbers. Enter answer to closest whole number.\n%d / %d = ", num1, num2);
    scanf("%d", &userResponse);

    if (userResponse == solution) {
        printf("Correct\n");
        return 1;
    } else {
        printf("Incorrect\n");
        return 0;
    }
}
void showStatistics(int numProblems, int correctAnswers) {
    printf("\nThanks for using Jenice, Brandon, Max, Bryan's' Math Practice Program.\n");
    printf("You attempted %d problems and got %d correct.\n", numProblems, correctAnswers);
    if (numProblems > 0) {
        float percent = ((float)correctAnswers / numProblems) * 100;
        printf("For a percentage correct of %.2f%%.\n", percent);
    }
}
