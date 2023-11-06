#include <stdio.h>
int main() {
    int lower, upper, guess, c;
    printf("Please insert upper and lower values in the form '[lower] [upper]'\n");
    scanf("%d %d", &lower, &upper);
    guess = (lower + upper) / 2;
    printf("Please respond with < for less (as in the number than you are thinking of < guess), > for greater, and = for correct!\n\n");
    printf("%d\n", guess);
    getchar();
    c = getchar();
    while (c != '=') {
        if (guess < lower){ 
            printf("You're cheating!\n");
            return 0;
        }
        if (guess > upper){
            printf("You're cheating!\n");
            return 0;
        }
        switch (c) {
            case '<': /*smaller*/
                upper = (guess - 1);
                guess = (lower + upper) / 2;
                printf("%d\n", guess);
                getchar();
                c = getchar();
                break;
            case '>': /*bigger*/
                lower = (guess + 1);
                guess = (lower + upper) / 2;
                printf("%d\n", guess);
                getchar();
                c = getchar();
                break;
            default:
                printf("That is not a valid response. Please respond using < for smaller, > for bigger, and = for yes.\n");
                getchar();
                c = getchar();
                break;
        }
    }
    (guess != 69)?printf("Yay!\n"):1;
    (guess == 69)?printf("Nice\n"):1;    
    return 0;
}

// "Guess what number I'm thinking of" Game in C by AviDG
