#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>


int multiplicationPractice() {
    int num1 = rand() % 100 + 1;
    int num2 = rand() % 100 + 1;
    int solution = num1 * num2;
    int userResponse;

    printf("Please multiply these numbers:\n%d * %d = ", num1, num2);
    scanf("%d", &userResponse);

    if (userResponse == solution) {
        printf("Correct\n");
        return 1;
    } else {
        printf("Incorrect\n");
        return 0;
    }
}

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
