#include <stdio.h>

int width;
int height;
int area;

char line[100];

int main(void)
{
    printf("Type a widgth and a height: ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d %d", &width, &height);

    area = (width * height) / 2;

    printf("Area of width %d and height %d is %d\n", width, height, area);

    return 0;
}
