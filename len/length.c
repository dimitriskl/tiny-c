#include <stdio.h>
#include <string.h>

char line[100];

int main(void)
{
    printf("Type a line: ");
    fgets(line, sizeof(line), stdin);

    printf("The length of the line is: %zu\n", strlen(line));

    return(0);
}
