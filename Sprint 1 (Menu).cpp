#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

char title[] = "Jenice, Brandon, Max, Bryan's Math Program Practice Main Menu";
	puts(title);
	
		
    while (1) {
        printf("\nEnter 'A' for Addition Practice\n");
        printf("Enter 'B' for Subtraction Practice\n");
        printf("Enter 'C' for Multiplication Practice\n");
        printf("Enter 'D' for Division Practice\n");
        printf("Enter 'E' to exit program\n");
        printf("Please make your selection.\n");
        scanf_s(" %c", &selection, 1);
		selection = toupper(selection); 
		
        int result = 0;
}

