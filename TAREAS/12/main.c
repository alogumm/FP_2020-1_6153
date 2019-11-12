#include <stdio.h>
#include <stdlib.h>
	int saludos(int n){//inicializamos nuestra funcion para saber el numero de saludos
	int res, z;//declaramos nuestras variables
	if(n==1){
	return 0;//si solo es una persona no hay ningun saludo, no regresa valor
	}
	else{//si hay mas de una persona(valor mayor a uno)
		z=saludos(n-1)+(n-1);//el valor de nuestra variable z sera la suma del # de personas menos uno, obteniendo el numero de saludos
		return z;//regresa el valor de z
		}
	}
	int main(int argc, char*argv[]) {
	int a, ans;//declaramos nuestras variables en el programa principal
	a=atoi(argv[1]);//convertimos el argumento de char a int
	ans=saludos(a);//mandamos a llamar nuestra funcion saludos
	printf("%i\n",ans); //mostramos el resultado de la funcion del numero de saludos
	return 0;
}

