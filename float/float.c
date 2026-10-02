#include <stdio.h>
#include <math.h>


int main(void)
{
    float a = 1/3;
    float b = 1.0f/3;

    printf("size of float -> %zu\n", sizeof(float));
    printf("size of double -> %zu\n", sizeof(double));

    printf("a -> %f\n", a);
    printf("b -> %f\n", b);

    printf("a .0f -> %.0f\n", a);
    printf("b .9f -> %.9f\n", b);

    printf("sqrtf(2.0f) -> %.9f\n", sqrtf(2.0f));
    printf("expf(1.0f) -> %.9f\n", expf(1.0f));

    double c = 0.1 + 0.2;
    double d = 0.3;

    printf("c -> %.17f\n", c);
    printf("d -> %.17f\n", d);
    printf("c == d -> %d\n", c == d);

    int e = (int)3.99f;
    int f = (int)-3.99f;

    printf("e -> %d\n", e);
    printf("f -> %d\n", f);
    
    return (0);
}
