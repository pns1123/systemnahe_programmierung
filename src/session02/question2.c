#include <stdio.h>
#include <stdint.h>

int main() {
   uint8_t a = 7; //   00000111
   uint8_t b = 255; // 11111111

   int16_t c = (int16_t)a - b;
   // a - b = (-248)_10 = ~(11111000)_2 + 1 = (00001000)_2
   printf("%d\n", c);
}

// What is the result and why? 8 -> take b - a and invert with two's complement
// How can we get the expected result? result cannot be stored in 8 bits -> convert to int16_t
