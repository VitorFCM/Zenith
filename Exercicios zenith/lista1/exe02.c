#include <stdio.h>
#include <math.h>

 float soma(float *x, int y){
	float s=0;
	for(int i = 0;i < y; i++){
		s = s + x[i];
	}	
	return s;
}


 float media(float x, int y){
	return x/y;
}


 float desvio(float *x,int y,float z){
	float somatorio=0;
  
	for(int i = 0; i < y; i++){
		somatorio = somatorio + (x[i]-z)*(x[i]-z);
	}
	return sqrt(somatorio/y);
}


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