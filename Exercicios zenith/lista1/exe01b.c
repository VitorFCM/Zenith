#include <stdio.h>
#include <math.h>

int main(void){
	float soma=0,media,somatorio=0;
	int n;
	scanf("%d",&n);
	float lista[n];

	for(int i = 0; i < n; i++){
		scanf("%f",&lista[i]);
		soma = soma + lista[i]; 
	}

	media = soma/n;

	for(int i = 0; i < n; i++){
		somatorio = somatorio + pow(lista[i]-media,2);
	}
	
	printf("%f\n",soma);
	printf("%f\n",media);
	printf("%f\n",sqrt(somatorio/n));	

	return 0;
}