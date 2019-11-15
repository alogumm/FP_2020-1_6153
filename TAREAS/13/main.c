#include <stdio.h>
#include <stdlib.h>
//se usan tres funciones
//una se encarga de ordenar el arreglo
void burbuja(int*item, int cont){
	int i,j, ordenado;
	int temp;
	
	for (i=1;i<cont;i++){
		//hace la funcion de apuntadores uno apunta el numero y otro ve si es mayor o menor
		for (j=cont;j>i;j--){
		//recorre la posicion de menor a mayor
		ordenado=1;
		if (item[j-1]>item[j]){
			temp = item[j-1];
			item[j-1]= item[j];
			item[j] = temp;
			ordenado++;
		}
	}
	//cuando la variable ordenado sea igual a 0 significara que el arreglo esta ordenado y no sera necesario seguir recorriendolo para hacer comparaciones
	if(ordenado==0)
	break;
}	
}

int main (int argc, char*argv[]){
	//definimos el tama;o del arreglo
	int arreglo[argc];
	//ingresamos los valores
	for (int i=1;i<argc;i++){
		double x=atof(argv[i]);
		arreglo[i]=x;
		//hacemos el llamado a la funcion burbuja y le pasamos como parametros el arreglo y tama;o		
}
burbuja (arreglo, argc-1);
//lo mostramos ordenado
for (int i=1;i<argc;i++){
	printf("%d", arreglo[i]);
}
