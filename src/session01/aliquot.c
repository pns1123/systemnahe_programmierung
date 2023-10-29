#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int read_int_or_exit(){
	int input_number;
	if( scanf("%d", &input_number)!=1 ){
		printf("invalid input, exiting...\n");
		exit(1);

	} else {
		return input_number;
	}
	
}

int main(){

	printf("Please enter the starting number: ");

	int playing_number;
	if (scanf("%d", &playing_number) != 1 || playing_number <= 0) {
		printf("input invalid\n");
		exit(1);
	}

	int n_rounds = 0;
	int input_number;	
	while( playing_number != 1 ){
		printf("Number: %d\n", playing_number);
		switch( n_rounds % 2){
			case 0:
				printf("Your move: ");
				input_number = read_int_or_exit();
				while ( (playing_number % input_number) != 0 ) {
					printf("%d is not a proper divisor of 65!\n", 
					       input_number);
					printf("Your move: ");
					input_number = read_int_or_exit();
				}
				break;

			case 1:
				input_number = 1;
				printf("My move: %d\n", input_number);
				break;
		}
		playing_number -= input_number;
		n_rounds += 1;
	
	}
	switch( n_rounds % 2){
		case 0:
			printf("You lose!");
			break;
		case 1:
			printf("I lose!");
			break;
	}
}
