#include <stdio.h>

int main(){
	printf("Please enter an integer:");

	int n;
	switch (scanf("%d", &n)) {
		case EOF:
			printf("end of input!\n");
			return 0;
		case 1:
			printf("n=%d\n", n);
			break;
		default:
			printf("could not read integer\n");
			break;
	}

	printf("Please insert two numbers:\n");
	float f1, f2;
	switch (scanf("%f %f", &f1, &f2)) {
		case EOF:
			printf("end of input!\n");
		case 2:
			printf("f1=%f, f2=%f", f1, f2);
			break;
		case 1:
			printf("only one number: f1=%f\n", f1);
			break;
		default:
			printf("could not read any number\n");
			break;

	}
}
