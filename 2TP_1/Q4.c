#include <stdio.h>
#include <math.h>
struct Ponto
{
    float x;
    float y;
};
float calcular_distancia(struct Ponto p1, struct Ponto p2)
{
    return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
}
int main()

{
    struct Ponto p1, p2;

    printf("Digite as coordenadas do ponto 1 (x y): ");
    scanf("%f %f", &p1.x, &p1.y);

    printf("Digite as coordenadas do ponto 2 (x y): ");
    scanf("%f %f", &p2.x, &p2.y);

    float distancia = calcular_distancia(p1, p2);

    printf("Distancia entre os pontos: %.2f\n", distancia);

    return 0;
}