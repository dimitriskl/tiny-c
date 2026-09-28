#include<stdio.h>

void double_copy(int value)
{
    value++;
    printf("Inside the double_copy->%d\n",value);
}

void double_in_place(int *value)
{
    (*value)++;
    printf("Inside the double in place->%d\n", *value);
    printf("Address of value->%p\n", &value);
    
}

int main(void)
{
    int value = 10;

    printf("Before double_copy->%d\n", value);
    double_copy(value);

    printf("Before double_in_place->%d\n", value);
    double_in_place(&value);

    printf("After double_in_place->%d\n", value);

    return 0;
}
    
