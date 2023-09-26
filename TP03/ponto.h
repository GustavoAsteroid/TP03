typedef struct {
    float x;
    float y;
} Ponto;

Ponto criarPonto(float x, float y);
void mostrarPonto(Ponto p);
float calcularDistancia(Ponto a, Ponto b);
float calcularAreaTriangulo(Ponto a, Ponto b, Ponto c);
float calcularAreaPoligono(Ponto vetor[]);

