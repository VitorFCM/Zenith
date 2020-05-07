#ifndef FUNCOES_H
#define FUNCOES_H


	int comando(char *entrada, char *comando);

	int* valores(int x, char *entrada);

	int** criar(int *alturamax, int *larguramax, int *valores);

	void linha(int **matriz, int alturamax, int larguramax, int *valores)

	void circulo(int **matriz, int alturamax, int larguramax, int *valores);

	void disco(int **matriz, int alturamax, int larguramax, int *valores);

	void retangulo(int **matriz, int alturamax, int larguramax, int *valores);

	void export(int **matriz, int alturamax, int larguramax, char *entrada);


#endif
