#include <stdio.h>
#include <stdlib.h>
#include <math.h> 

int comando(char *entrada, char *comando){
  int i = 0;
  while(comando[i] == entrada[i]){
    i++;
  }
  if(comando[i] == '\0' && entrada[i] == ' '){
    return 1;
  }
  else{
    return 0;
  }
}

int* valores(int x, char *entrada){
  char aux[4];// consegue armazenar até o numero 9999
  int *valores, i = 0, j = 0, k = 0;

  valores = (int*)calloc(x, sizeof(int));

  while(entrada[i++] != ' ');

  while(entrada[i] != '\0'){
    aux[j++] = entrada[i++];

    if(entrada[i] == ' ' || entrada[i] == '\n'){
      aux[j] = '\0';
      valores[k++] = atoi(aux);
      j = 0;
      i++;
    }

  }

return valores;
}

int** criar(int *alturamax, int *larguramax, int *valores){
  *alturamax = valores[0];
  *larguramax = valores[1];

  // criando a matriz
  int **matriz;

  matriz = (int**)calloc(*alturamax,sizeof(int*));

  for(int i = 0; i < *alturamax; i++){
    matriz[i] = (int*)calloc(*larguramax,sizeof(int));
  }
  return matriz;
}

void linha(int **matriz, int alturamax, int larguramax, int *valores){
  int x1 = valores[0];
  int y1 = valores[1];
  int x2 = valores[2];
  int y2 = valores[3];
  int cor = valores[4];

  
  if(x1 < 0){
    x1 = 0;
  }
  
  if(y1 < 0){
    y1 = 0;
  }
  
  if(x2 > larguramax - 1){
    x2 = larguramax - 1;
  }
  
  if(y2 > alturamax - 1){
    y2 = alturamax - 1;
  }
  
  for(int i = y1; i <= y2; i++){
    for(int j = x1; j <= x2; j++){
      matriz[i][j] = cor;
    }
  }
  
}

void circulo(int **matriz, int alturamax, int larguramax, int *valores){
  int xcentro = valores[0];
  int ycentro = valores[1];
  int raio = valores[2];
  int cor = valores[3];

  float distancia;
  for(int i = 0; i < alturamax; i++){
    for(int j = 0; j < larguramax; j++){

      distancia = sqrt((xcentro-j)*(xcentro-j) + (ycentro-i)*(ycentro-i));
      distancia--;
      float modulo = sqrt((distancia - raio) * (distancia - raio));
      
      if(modulo <= 0.5){ // o valor 0.5 foi escolhido por experimentação
        matriz[i][j] = cor;
      }

    }
  }
}


void disco(int **matriz, int alturamax, int larguramax, int *valores){
  int xcentro = valores[0];
  int ycentro = valores[1];
  int raio = valores[2];
  int cor = valores[3];

  float distancia;
  for(int i = 0; i < alturamax; i++){
    for(int j = 0; j < larguramax; j++){

      distancia = sqrt((xcentro-j) * (xcentro-j) + (ycentro-i) * (ycentro-i));
      distancia--;
      
      if(distancia - raio <= 0.5){
        matriz[i][j] = cor;
      }

    }
  }
}


void retangulo(int **matriz, int alturamax, int larguramax, int *valores){
  int xcentro = valores[0];
  int ycentro = valores[1];
  int altura = valores[2];
  int largura = valores[3];
  int cor = valores[4];

  
  for(int i = 0; i < alturamax; i++){
    for(int j = 0; j < larguramax; j++){

      int moduloi = sqrt((i - ycentro) * (i - ycentro));
      int moduloj = sqrt((j - xcentro) * (j - xcentro));

      if(moduloi < altura/2 && moduloj < largura/2){
        matriz[i][j] = cor;
      }

    }
  }
  
}

void export(int **matriz, int alturamax, int larguramax, char *entrada){
  char aux[20]; // deve ser o suficiente para pegar o entrada e a extensao do arquivo
  int i = 7, j = 0; //as informações da string entrda começam a partir do indice i = 7
  FILE *saida;

  while(entrada[i] != '\n'){
    aux[j++] = entrada[i++];
  }

  aux[j] = '\0';

  saida = fopen(aux,"w");

  fprintf(saida, "%s\n", "P2");
  fprintf(saida, "%d %d\n", larguramax, alturamax);
  fprintf(saida, "%d\n", 15);

  for(int i = 0; i < alturamax; i++){
    for(int j = 0; j< larguramax; j++){
      fprintf(saida, "%d  ", matriz[i][j]);
    }
    fputc('\n', saida);
  }

  fclose(saida);
}