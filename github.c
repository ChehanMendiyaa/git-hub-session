#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int randomNum = rand() % 3 + 1;
    int userChoice = 0;  

    printf("----Welcome to the Rock paper scissors Game---- \n");
    printf("Choose An Option \n");
    printf("1. Rock \n");
    printf("2. Paper \n");
    printf("3. Scissors \n");
    printf("Enter Your Choice: ");
    scanf("%d", &userChoice);

    
    printf("\nComputer chose: ");
    if (randomNum == 1) printf("Rock\n");
    else if (randomNum == 2) printf("Paper\n");
    else printf("Scissors\n");
    
    printf("You chose: ");
    if (userChoice == 1) printf("Rock\n");
    else if (userChoice == 2) printf("Paper\n");
    else if (userChoice == 3) printf("Scissors\n");
    else printf("Invalid choice!\n");

    
    if (userChoice < 1 || userChoice > 3) {
        printf("Invalid choice! Please choose 1, 2, or 3.\n");
    } else if (userChoice == randomNum) {
        printf("It is a tie! \n");  
    } else if ((userChoice == 1 && randomNum == 3) || 
               (userChoice == 2 && randomNum == 1) || 
               (userChoice == 3 && randomNum == 2)) {
        printf("You Win! \n");
    } else {
        printf("You Lose! \n");
    }
    
    return 0;
}  