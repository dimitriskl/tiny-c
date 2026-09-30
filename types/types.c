#include <stdio.h>
#include <limits.h>

bool ready = true;
char letter = 'D';
unsigned char small_unsigned = 255;
signed char small_signed = -69;

int main(void)
{
  printf("bool value is -> %d\n", ready);
  printf("letter value is -> %d\n", letter);
  printf("small_signed is -> %d\n", small_signed);
  printf("small_unsigned 9s -> %d\n", small_unsigned);
  printf("%s\n", "----------------------------------------");
  printf("bool's sizeof is -> %zu\n", sizeof(ready));
  printf("letter's sizeof is -> %zu\n", sizeof(letter));
  printf("The letter is -> %c\n", letter);
  printf("small_signed's sizeof is -> %zu\n", sizeof(small_signed));
  printf("small_unsigned's sizeof is -> %zu\n", sizeof(small_unsigned));
  printf("CHAR_BIT is -> %d\n", CHAR_BIT);
  printf("%s\n", "----------------------------------------");

  return 0;
}
