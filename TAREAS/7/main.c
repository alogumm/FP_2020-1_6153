#include <stdio.h>
#include <stdlib.h>
int main(int argc, char*argv[]){
	//se declaran las variables
	int a;
	int b;
	int c=1;
	a=atof(argv[1]);
	b=atof(argv[2]);
	//decimos en donde lo guardamos
	for (int i=0;i<b;i++){
		c=c*a;
		//se va a guardar e ir multiplicando.
	}
	printf("%.2d\n", c); //imprime el resultado
	return 0;
	
}
