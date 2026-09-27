#include <stdio.h>
#include <stdlib.h>

int main()
{
    if(printf("%s\n", "Hello printf World") < 0) {
        return EXIT_FAILURE;
        //code here never executes
    };

    return EXIT_SUCCESS;
    //code here never executes
}
