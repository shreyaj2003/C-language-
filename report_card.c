/*
	Program:	Report Card Generator App
*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main() {

	// Declaring required variables
	char name[30], section, grade;
	int standard, mathsScore, englishScore, hindiScore, scienceScore, sscScore, totalScore;

	// Welcome message
	printf("Report card generator app\n");

	// User input
	printf("Enter the name of the student: \n");
	scanf("%[^\n]%*c", name);

	printf("Enter standard: ");
	scanf("%d", &standard);

	// Clear input buffer as needed
	while ((getchar()) != '\n');

	printf("\nEnter section: ");
	scanf("%c", &section);

	printf("\nEnter marks secured in Mathematics: ");
    scanf("%d", &mathsScore);

    printf("\nEnter marks secured in English: ");
    scanf("%d", &englishScore);

    printf("\nEnter marks secured in Hindi: ");
    scanf("%d", &hindiScore);

    printf("\nEnter marks secured in Science: ");
    scanf("%d", &scienceScore);

    printf("\nEnter marks secured in Social Science: ");
    scanf("%d", &sscScore);

    totalScore = mathsScore + englishScore + hindiScore + scienceScore + sscScore;

    // Terminate program if the totalScore is invalid
    if (totalScore > 500 || totalScore < 0) {
    	puts("Total score cannot not be greater than 500. Please try again!");
    	exit(0);	// Terminate the program.
    }

    // Deciding grade
    if (totalScore >= 450 && totalScore <= 500) {
        grade = 'A';
    } else if (totalScore >= 400 && totalScore < 450) {
        grade = 'B';
    } else if (totalScore >= 350 && totalScore < 400) {
        grade = 'C';
    } else if (totalScore >= 300 && totalScore < 350) {
        grade = 'D';
    } else if (totalScore >= 200 && totalScore < 300) {
        grade = 'E';
    } else { // if (totalScore >= 0 && totalScore < 200)
        grade = 'F';
    }

    // Final output
    printf("\nGenerating Report Card! Please wait.... ");

    printf("\n\tName: %s \n", name);
    printf("\tStandard: %d \n", standard);
    printf("\tSection: %c \n", section);

    printf("\n\tMarks Secured out of 100\n");

    printf("\tMathematics: %d \n", mathsScore);
    printf("\tEnglish: %d \n", englishScore);
    printf("\tHindi: %d \n", hindiScore);
    printf("\tScience: %d \n", scienceScore);
    printf("\tSocial Science: %d \n", sscScore);

    printf("\n\tTotal marks secured: %d \n", totalScore);

    printf("\tGrade: %c \n", grade);
    puts("------------------------------------------\n");

    getch();
}
