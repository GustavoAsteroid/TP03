#include <stdio.h>
#include <locale.h>
#include "ponto.h"

#define QTD 10

int main() {
   
    Ponto forma[50];
    int numPontos = 0;
    
    FILE *arquivoEntrada;
    char linha[100];

    arquivoEntrada = fopen("./vertices.txt", "r");

    if (arquivoEntrada == NULL) {
        printf("\nErro ao abrir o arquivo\n");
        return 1;
    }

    fscanf(arquivoEntrada, "%d", &numPontos);

    for (int i = 0; i < numPontos; i++) {
        fscanf(arquivoEntrada, "%f %f\n", &forma[i].x, &forma[i].y);
        forma[i + 1].x = 847362;
        forma[i + 1].y = 382764;
    }

    float area;

    area = calcularAreaPoligono(forma);

    printf("Area : %.2f\n", area);

    fclose(arquivoEntrada);

    return 0;
}

