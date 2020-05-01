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

int** criar(int *alturamax, int *larguramax, char *entrada){
  char aux[4]; //chega ate o digito 1000
  int i = 7, j = 0;

  while(entrada[i] != ' '){
    aux[j++] = entrada[i++];
  }
  aux[j] = '\0';
  *alturamax = atoi(aux);
  
  i++;
  j = 0;

  while(entrada[i] != '\n'){
    aux[j++] = entrada[i++];
  }
  aux[j] = '\0';

  *larguramax = atoi(aux);

  // criando a matriz
  int **matriz;

  matriz = (int**)calloc(*alturamax,sizeof(int*));

  for(int i = 0; i < *alturamax; i++){
    matriz[i] = (int*)calloc(*larguramax,sizeof(int));
  }
  return matriz;
}

void linha(int **matriz, int alturamax, int larguramax, char *entrada){
  char aux[4]; //chega ate o digito 9999
  int i = 5, j = 0;

  while(entrada[i] != ' '){
    aux[j++] = entrada[i++];
  }
  aux[j] = '\0';
  int x1 = atoi(aux);
  
  if(x1 < 0){
    x1 = 0;
  }
  
  i++;
  j = 0;

  while(entrada[i] != ' '){
    aux[j++] = entrada[i++];
  }
  aux[j] = '\0';
  int y1 = atoi(aux);
  
  if(y1 < 0){
    y1 = 0;
  }
  
  i++;
  j = 0;

  while(entrada[i] != ' '){
    aux[j++] = entrada[i++];
  }
  aux[j] = '\0';
  int x2 = atoi(aux);
  
  if(x2 > larguramax - 1){
    x2 = larguramax - 1;
  }
  
  i++;
  j = 0;

  while(entrada[i] != ' '){
    aux[j++] = entrada[i++];
  }
  aux[j] = '\0';
  int y2 = atoi(aux);
  
  if(y2 > alturamax - 1){
    y2 = alturamax - 1;
  }
  
  i++;
  j = 0;

   while(entrada[i] != '\n'){
    aux[j++] = entrada[i++];
  }
  aux[j] = '\0';
  int cor = atoi(aux);
  
  for(int i = y1; i <= y2; i++){
    for(int j = x1; j <= x2; j++){
      matriz[i][j] = cor;
    }
  }
  
}

void circulo(int **matriz, int alturamax, int larguramax, char *entrada){
  char aux[4];
  int i = 7, j = 0;

  while(entrada[i] != ' '){
    aux[j++] = entrada[i++];
  }
  aux[j] = '\0';
  int xcentro = atoi(aux);

  i++;
  j = 0;

  while(entrada[i] != ' '){
    aux[j++] = entrada[i++];
  }
  aux[j] = '\0';
  int ycentro = atoi(aux);

  i++;
  j = 0;

  while(entrada[i] != ' '){
    aux[j++] = entrada[i++];
  }
  aux[j] = '\0';
  int raio = atoi(aux);

  i++;
  j = 0;

  while(entrada[i] != '\n'){
    aux[j++] = entrada[i++];
  }
  aux[j] = '\0';
  int cor = atoi(aux);

  float distancia;
  for(int i = 0; i < alturamax; i++){
    for(int j = 0; j < larguramax; j++){

      distancia = sqrt((xcentro-j)*(xcentro-j) + (ycentro-i)*(ycentro-i));
      distancia--;
      float modulo = sqrt((distancia - raio) * (distancia - raio));
      
      if(modulo <= 0.5){
        matriz[i][j] = cor;
      }

    }
  }
}


void disco(int **matriz, int alturamax, int larguramax, char *entrada){
  char aux[4];
  int i = 5, j = 0;

  while(entrada[i] != ' '){
    aux[j++] = entrada[i++];
  }
  aux[j] = '\0';
  int xcentro = atoi(aux);

  i++;
  j = 0;

  while(entrada[i] != ' '){
    aux[j++] = entrada[i++];
  }
  aux[j] = '\0';
  int ycentro = atoi(aux);

  i++;
  j = 0;

  while(entrada[i] != ' '){
    aux[j++] = entrada[i++];
  }
  aux[j] = '\0';
  int raio = atoi(aux);

  i++;
  j = 0;

  while(entrada[i] != '\n'){
    aux[j++] = entrada[i++];
  }
  aux[j] = '\0';
  int cor = atoi(aux);

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


void retangulo(int **matriz, int alturamax, int larguramax, char *entrada){
  char aux[4]; //chega ate o digito 9999
  int i = 5, j = 0;

  while(entrada[i] != ' '){
    aux[j++] = entrada[i++];
  }
  aux[j] = '\0';
  int xcentro = atoi(aux);
  
  i++;
  j = 0;

  while(entrada[i] != ' '){
    aux[j++] = entrada[i++];
  }
  aux[j] = '\0';
  int ycentro = atoi(aux);

  i++;
  j = 0;

  while(entrada[i] != ' '){
    aux[j++] = entrada[i++];
  }
  aux[j] = '\0';
  int altura = atoi(aux);

  i++;
  j = 0;

  while(entrada[i] != ' '){
    aux[j++] = entrada[i++];
  }
  aux[j] = '\0';
  int largura = atoi(aux);
  
  i++;
  j = 0;

  while(entrada[i] != '\n'){
    aux[j++] = entrada[i++];
  }
  aux[j] = '\0';
  int cor = atoi(aux);

  
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
  int i = 7, j = 0;
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
