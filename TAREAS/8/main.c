#include <stdio.h>
#include <stdlib.h>
int main(int argc, char*argv[]){
	//se declaran las variables
	float x;
	float y;
	float z;
	x=atof(argv[1]);
	y=atof(argv[2]);
	//convertimos de char a float
	if (x==1){ //si x igual a uno aplica el algoritmo de f a c
		z=(y-32)/1.8;
		printf("%.2f\n", z);
		return 0;
	}
	else if (x==0){ //si es igual a cero aplica de c a f
		z=32+(y*1.8);
		printf("%.2f\n", z);
		return 0;
	}
	return 0;
	
}
