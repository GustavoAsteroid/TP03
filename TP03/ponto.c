#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "ponto.h"

Ponto criarPonto(float x, float y) {
    Ponto p;
    p.x = x;
    p.y = y;
    return p;
}

void mostrarPonto(Ponto p) {
    printf("\nPonto(%.2f,%.2f)\n", p.x, p.y);
}

float calcularDistancia(Ponto a, Ponto b) {
    float distancia;
    distancia = sqrt(((b.x - a.x) * (b.x - a.x)) + ((b.y - a.y) * (b.y - a.y)));
    return distancia;
}

float calcularAreaTriangulo(Ponto a, Ponto b, Ponto c) {
    float area, determinante;

    determinante = (a.x * b.y) + (a.y * c.x) + (b.x * c.y) - (c.x * b.y) - (c.y * a.x) - (b.x * a.y);

    if (determinante < 0) {
        area = (-1 * (determinante)) / 2;
    } else {
        area = determinante / 2;
    }

    return area;
}

float calcularAreaPoligono(Ponto vetor[]) {
    int i = 0, numPontos = 0;
    float area = 0;

    while (vetor[i].x != 847362 && vetor[i].y != 382764) {
        numPontos++;
        i++;
    }

    for (int i = 0; i < (numPontos - 2); i++) {
        area += calcularAreaTriangulo(vetor[0], vetor[i + 1], vetor[i + 2]);
    }

    return area;
}

