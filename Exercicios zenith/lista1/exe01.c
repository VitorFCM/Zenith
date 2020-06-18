#include <stdio.h>
#include <math.h>

int main(void){
	float a,b,c,soma,media,desvio;

	scanf("%f",&a);
	scanf("%f",&b);
	scanf("%f",&c);

	soma = a + b + c;
	media = soma/3;
	desvio = sqrt((pow((a-media),2) + pow((b-media),2) + pow((c-media),2))/3);

	printf("%f\n",soma);
	printf("%f\n",media);
	printf("%f\n",desvio);	

	return 0;
}