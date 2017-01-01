#include <stdio.h>
#include <stdlib.h>
#define true 1
#define false 0

int main(void){
	int game;
	float number, guess;
	number = (rand() % 50) + 1;
	game = true;
	printf("I am thinking of a number one through fifty, can you guess it?\n");
	while (game == true) {
	scanf("%f", &guess);
	if (guess > number) {
		printf("That is too high!\n");
	}
	else if (guess < number) {
		printf("That is too low!\n");
	}
	else{
		printf("YOU GOT IT!!!\n");
		game == false;
	};
	}
}
