#ifndef METHODS_H
#define METHODS_H
#include <stdio.h>

typedef struct { 
    unsigned char r,g,b;
} Pixel;

typedef struct {
    int x0, y0, x1, y1;
} Polygon;

void lerComandos(FILE *arquivo);
char* alocar_din(int tamanho);
void criarArquivo(char linha[], char *m, char *n);
void limparImagem(Pixel **cores, char linha[], char* m, char* n, char* r, char* g, char* b);
void renomearImagem(char linha[]);
Pixel** alocar_pixels(char linha[], char* m, char* n);
void desenharLinha(Pixel **cores, char linha[], char* m, char* n);
void pintarImagem(Pixel** cores, char* m, char* n, char* r, char* g, char* b);
void criarArquivo2(char linha[], Pixel** cores, char* m, char* n);
void pintarPixel(Pixel **cores, int i, int j);
void desenharCirculo(Pixel **cores,  int x1, int y1, int raio);
void desenharPoligono(FILE *arquivo, Pixel **cores, char linha[]);
void desenharLinhaPoligono(Pixel **cores, int x1, int y1, int x2, int y2);
void criarArquivo3(Pixel **cores, char nomeFinal[], char *m, char *n);
void desenharPoligono2(FILE *arquivo, Pixel **cores, int lados, int x1, int y1);
//void desenharTriangulo(Pixel **cores, char linha[]);
// void alocarImagem(FILE *arquivo, Pixel **img, int m, int n);
// void lerArquivo(FILE *arquivo, Pixel **img,  int m, int n);

#endif