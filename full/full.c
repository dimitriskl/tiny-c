#include<stdio.h>
#include<string.h>

char first[100];
char last[100];
char first_last[100];

int main(void)
{
    strcpy(first, "Jim");
    strcat(first, " " );
    
    strcpy(last, "Doe");

    strcat(first_last, first);
    strcat(first_last, last);

    printf("The full name is %s\n", first_last);
    return (0);
}
