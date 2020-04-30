#include "funçoes.h"


int main(void) {
  int **matriz;
  int alturamax, larguramax;
  char entrada[100];
  

  while(!comando(entrada,"EXPORT")){
    fgets(entrada,100,stdin);

    if(comando(entrada,"CREATE")){
     matriz = criar(&alturamax, &larguramax, entrada);
    }
    else if(comando(entrada,"LINE")){
      linha(matriz, alturamax, larguramax, entrada);
    }
    else if(comando(entrada,"CIRCLE")){
      circulo(matriz, alturamax, larguramax, entrada);
    }
    else if(comando(entrada,"DISK")){
      disco(matriz, alturamax, larguramax, entrada);
    }
    else if(comando(entrada,"RECT")){
      retangulo(matriz ,alturamax ,larguramax ,entrada);
    }
    else if(comando(entrada,"EXPORT")){
      export(matriz ,alturamax, larguramax, entrada);
    } 
  }
 

  return 0;
}

