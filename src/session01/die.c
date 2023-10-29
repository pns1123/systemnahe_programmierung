#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int main(){
	// initialize rng
	
	printf("Please enter the number of draws: ");

	int n_draws;
	if (scanf("%d", &n_draws) != 1 || n_draws <= 0) {
		printf("input invalid\n");
		return 1;
	}


	srand(time(NULL) ^ getpid());

	int draw;
	int sum = 0;
	for(int i=1; i<=n_draws; ++i){
		draw = rand() % 6 + 1;
		sum += draw;
		printf("die cast %d: %d\n", i, draw);
	}
	printf("sum of draws: %d\n", sum);
	printf("arithmetic mean of draws: %f\n", (1.0 * sum)/n_draws);
}
