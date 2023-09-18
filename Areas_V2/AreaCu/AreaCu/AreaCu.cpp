
#include <stdio.h>
// Area Rectangulo
void main(void)
{
    int base, area,altura;
    printf("Area de un Rectangulo \n");
    printf("Base: ");
    scanf_s("%i",&base);
    printf("Altura: ");
    scanf_s("%i",&altura);
    area = base * altura;
    printf("El area de cuadrado con base: %i y altura: %i es: %i",base,altura,area);
}