#include <stdio.h>

int main(void)
{
    enum state : unsigned int 
    {
        stopped,
        starting,
        running,
        error
    };

    enum state current = running;

    printf("current numeric value is: %u\n",current);

    enum second_enum : unsigned int  
    {
        low = 10,
        medium = 20,
        high =30
    };

    printf("second_enum, low value is: %u\n", low);
    printf("second_enum_enum, medium value is: %u\n", medium);
    printf("second_enum, high value is: %u\n", high);

    return(0);
}
