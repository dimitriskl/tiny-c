#include <stdio.h>
#include <limits.h>

short s = -10;
int i = 100;
long l = 1000;
long long ll = 10000;
unsigned int ui = 200;

int main(void)
{
   printf("sizeof short        -> %zu\n", sizeof(s));
   printf("sizeof int          -> %zu\n", sizeof(i));
   printf("sizeof long         -> %zu\n", sizeof(l));
   printf("sizeof long long    -> %zu\n", sizeof(ll));
   printf("sizeof unsigned int -> %zu\n", sizeof(ui));
   printf("INT_MIN             -> %d\n", INT_MIN);
   printf("INT_MAX             -> %d\n", INT_MAX);
   printf("UINT_MAX            -> %d\n", UINT_MAX);
}
