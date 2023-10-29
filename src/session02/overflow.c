#include <stdio.h>
#include <stdint.h>

int main() {
   int8_t counter = 120;

   for (int i = 1; i < 10; i++) {
      counter += i;
      printf("The value of the counter is %hhd.\n", counter);
   }
}

