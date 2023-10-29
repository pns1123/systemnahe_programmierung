#include <stdio.h>
#include <stdint.h>

int main() {
   uint8_t a = 5;
   uint8_t b = 7;

   uint8_t c = a - b;
   printf("%hhu\n", c);
   printf("%hhd\n", c);
}

// What is the result and why? 254 -> two's complement
// How can we get the expected result? change the printf format to signed output
