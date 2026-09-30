#include <stdio.h>
#include <stdbool.h>
#include <limits.h>

bool ready = true;
char letter = 'D';
unsigned char small_signed = 255;
signed char small_unsigned = -69;

int main()
{
  printf("bool value is -> %b\n", ready);
  printf("letter value is -> %d\n", letter);
  printf("small_signed is -> %d\n", small_signed);
  printf("small_unsigned 9s -> %d\n", small_unsigned);
  printf("%s\n", "----------------------------------------");
  printf("bool's sizeof is -> %zu\n", sizeof(ready));
  printf("letter's sizeof is -> %zu\n", sizeof(letter));
  printf("small_signed's sizeof is -> %zu\n", sizeof(small_signed));
  printf("small_unsigned's sizeof is -> %zu\n", sizeof(small_unsigned));
  printf("CHAR_BIT's sizeof is -> %zu\n", sizeof(CHAR_BIT));
  printf("%s\n", "----------------------------------------");

  return 0;
}
