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