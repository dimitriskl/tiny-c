#include <stdio.h>

void increment_copy(int value)
{
    value ++;
    printf("Inside increment_copy: %d\n", value);
}

void increment_object(int *value)
{
    (*value)++;
    printf("Inside increment_object: %d\n", *value);
}

int main(void)
{
    int number = 10;

    increment_copy(number);
    printf("After increment_copy: %d\n", number);

    increment_object(&number);
    printf("After increment_object: %d\n", number);

    return 0;
}
