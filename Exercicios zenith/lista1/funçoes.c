#include <stdio.h>
#include "funçoes.h"

int main(void){
	int n;
	scanf("%d",&n);
    float lista[n];

	for(int i = 0; i < n; i++){
		scanf("%f",&lista[i]);
	}
  
	float m = media(soma(lista,n),n);

	printf("%f\n",soma(lista,n));
	printf("%f\n",m);
	printf("%f\n",desvio(lista,n,m));	

	return 0;
}