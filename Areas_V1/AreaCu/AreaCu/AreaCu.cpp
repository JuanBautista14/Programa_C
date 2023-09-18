
#include <stdio.h>

void main(void)
{
    int base, area;
    printf("Area de un cuadrado \n");
    printf("Base: ");
    scanf_s("%i",&base);
    area = base * base;
    printf("El area de cuadrado con base %i es %i",base,area);
}