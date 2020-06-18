#include <stdio.h>
#include <math.h>

int soma(int a, int b, int c){
  return a + b + c;
}

float media(int a){
  return (float) a/3;
}

float desvio(int a, int b, int c, float m){
  float s;
  s =  ((a - m)*(a - m) + (b - m)*(b - m) + (c - m)*(c - m))/3;
  return pow(s,0.5);
}

int main(int argc,char *argv[]) {
 FILE *entrada;
 FILE *saida;

 
 int n1,n2,n3,s;
 float m,d;

 entrada = fopen("dados1.csv","r");
 saida = fopen("resultados.csv","w");

 if (entrada != NULL) {
  while( fscanf(entrada,"%d, %d, %d\n", &n1, &n2, &n3) != EOF){
    s = soma(n1,n2,n3);
    m = media(s);
    d = desvio(n1,n2,n3,m);
    fprintf(saida, "%d, %f, %f\n", s, m, d);
  }
 }



 fclose(entrada);
 fclose(saida);

}