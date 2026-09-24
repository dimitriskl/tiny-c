#include <stdio.h>
#include <string.h>

/* first and last name */
char first[100];
char last[100];

/* full name */
char full[100];


int main(void)
{
    printf("Enter first name: ");
    fgets(first, sizeof(first), stdin);

    /* trim off last character */
    first[strlen(first)-1] = '\0';

    printf("enter last name: ");
    fgets(last, sizeof(last), stdin);\
    /* trim off last character */    
    last[strlen(last)-1] = '\0';

    strcpy(full, first);
    strcat(full, " ");
    strcat(full, last);

    printf("The name is %s\n", full);

    return (0);
}
