#include <stdio.h>
#include <stdint.h>

int main() {
   char c;
   int i;
   signed short ss;
   unsigned long ul;
   signed long long sll;
   uint16_t ui16;
   int64_t i64;

   printf("A char has %zu bytes on this platform.\n", sizeof(c));
   printf("An int has %zu bytes on this platform.\n", sizeof(i));
   printf("A signed short has %zu bytes on this platform.\n", sizeof(ss));
   printf("An unsigned long has %zu bytes on this platform.\n", sizeof(ul));
   printf("A signed long long has %zu bytes on this platform..\n", sizeof(sll));
   printf("A uint32_t has %zu bytes on this platform.\n", sizeof(ui16));
   printf("A int64_t has %zu bytes on this platform.\n", sizeof(i64));
}
