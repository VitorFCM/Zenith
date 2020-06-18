#include <stdio.h>

int div(int *x, int *y, int *z)
{
  if(*x == 0 || *y == 0){
  	return -1;
  }
  else{
  	*x = *x/(*z);
  	*y = *y/(*z)
  	return 0;
  }
}

int main(int argc,char *argv[]) {
	int a,b,c;

	div(&a,&b,&c);
}