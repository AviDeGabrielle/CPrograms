#include <stdio.h>
int main() {
	int lower, upper, guess, smaller, bigger, counter, yes;
	smaller = 0;
	bigger = 1;
	yes = 2;
	counter = 0;
	printf("Please insert upper and lower values in the form '[lower] [upper]'\n");
	scanf("%d %d", &lower, &upper);
	guess = (lower + upper) / 2;
	printf("%d\n", guess);
	scanf("%d", &counter);
	while (counter != 2) {
		if (guess < lower){
			printf("You're cheating!\n");
			return 0;
		}
		if (guess > upper){
			printf("You're cheating!\n");
			return 0;
		}
		else {
			switch (counter) {
				case 0: /*smaller*/
					upper = (guess - 1);
					guess = (lower + upper) / 2;
					printf("%d\n", guess);
					scanf("%d", &counter);
					break;
				case 1: /*bigger*/
					lower = (guess + 1);
					guess = (lower + upper) / 2;
					printf("%d\n", guess);
					scanf("%d", &counter);
					break;
				default:
					printf("That is not a valid response. Please respond using 0 for smaller, 1 for bigger, and 2 for yes.\n");
					scanf("%d", &counter);
					break;
			}
		}
	}
	while (counter = 2) {
		printf("yay\n");	
		return 0;
	}
}

// "Guess what number I'm thinking of" Game in C by AviDG

