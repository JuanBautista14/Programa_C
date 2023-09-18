
#include <stdio.h>
// Area Circulo
void main(void)
{
    float pi=3.1416, radio,area;
    printf("Area de un Circulo \n");
    printf("Radio: ");
    scanf_s("%f",&radio);
    area = pi*(radio*radio);
    printf("El area del Circulo con radio: %-4.0f es: %-6.2f",radio,area);
}