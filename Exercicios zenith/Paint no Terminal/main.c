#include <stdio.h>
#include "funcoes.h"

int main(void) {
  int **matriz;
  int alturamax, larguramax;
  char entrada[100];
  

  while(!comando(entrada,"EXPORT")){
    fgets(entrada,100,stdin);

    if(comando(entrada,"CREATE")){
      int *valores_create = valores(2, entrada);
      matriz = criar(&alturamax, &larguramax, valores_create);
    }

    else if(comando(entrada,"LINE")){
      int *valores_line = valores(5, entrada);
      linha(matriz, alturamax, larguramax, valores_line);
    }

    else if(comando(entrada,"CIRCLE")){
      int *valores_circle = valores(4, entrada);
      circulo(matriz, alturamax, larguramax, valores_circle);
    }

    else if(comando(entrada,"DISK")){
      int *valores_disk = valores(4, entrada);
      disco(matriz, alturamax, larguramax, valores_disk);
    }

    else if(comando(entrada,"RECT")){
      int *valores_rect = valores(5, entrada);
      retangulo(matriz, alturamax, larguramax, valores_rect);
    }

    else if(comando(entrada,"EXPORT")){
      export(matriz, alturamax, larguramax, entrada);
    } 
  }
 

  return 0;
}

