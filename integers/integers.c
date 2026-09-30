#include <stdio.h>
#include <limits.h>

short s = 10;
int i = 100;
long l = 1000;
long long ll = 10000;
unsigned int ui = 200;

int main(void)
{
   printf("sizeof short -> %d\n", s);
   printf("sizeof int %d\n", i);
   printf("sizeof long -> %ld\n", l);
   printf("sizeof long long -> %lld\n", ll);
   printf("sizeof unsigned int -> %d\n", ui);
   printf("INT_MIN -> %d\n", INT_MIN);
   printf("INT_MAX -> %d\n", INT_MAX);
   printf("UINT_MAX -> %d\n", UINT_MAX);
}
