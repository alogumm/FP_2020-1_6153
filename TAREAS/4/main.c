#include <stdlib.h>
#include <stdio.h>
float m;
float y=0;
float promedio;
int main(int argc, char*argv[]){
	for (int i=1; argc; i++){ //utilizamos for para recorrer la lista
	m=atof(argv[i]); //recibimos argumento y cambiamos a int
	y=y+m; //operacion
	}
	promedio y/(argc-1); //operacion con argumento menos uno
	printf("%.21f\n", promedio); //muestra el resultado final

	return 0;
}
