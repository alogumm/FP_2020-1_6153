#include <stdio.h>
#include <stdlib.h>
int main(int argc, char*argv[]){
	//se declaran las variables e inicializa digitos en 0
	int x, digitos=0;
	x=atoi(argv[1]); //xx toma el valor del primer argumento
	do{// empezamos ciclo do wile para hacer los calculos
	//digitos sera igual a ella misma mas el modulo de x entre 10. dicho modulo es el ultimo digito escrito
		digitos=digitos+(x%10);
		x=(x/10); //se divide x entre 10 para quitar su ultimo digito
	}while(x!=0); //repitiendose mientras x sea diferente de cero
	printf("%i\n", digitos); //se muestra el resultado de la suma
	return 0;
}
