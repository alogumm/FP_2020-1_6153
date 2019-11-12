#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double RAIZ(double x, double tol, double candidato){
double division, diferencia, promedio; //declaramos las variables de nuestra funcion 
	division=x/candidato; //division tendra un nuevo valor de x entre la variable candidato

	diferencia=fabs(division-candidato); //a la variable diferencia se le asigna un nuevo valor de la diferencia de division menos candidato, usando fabs que retorna el valor absoluto en caso de ser negativo para que sea positivo
	while(diferencia>tol){//mientras la variable diferencia se mantenga mayor a tol se efectua el ciclo
	division=x/candidato;//se vuelve a efectuar las operaciones anteriores
	diferencia=fabs(division-candidato);
	promedio=(candidato+division)/2;//el promedio sera la suma de las variables candidato mas division entre dos
	candidato=promedio;//se actualiza la variable candidato igual a promedio
    }
	return candidato; //regresa el valor de la variable candidato
}
	int main(int argc, char*argv[]) {
		double numero, tolerancia, ans, candidato;//declaramos las variables en nuestro programa principal
		numero=atof(argv[1]); //se convierte el argumento 1 el numero a sacar raiz de char a flotante
		
		candidato=atof(argv[3]);//se convierte el argumento 3, nuestro numero candidato de char a flotante
		tolerancia=atof(argv[2]);//se convierte el argumento 2, nuestra tolerancia de char a flotante
		
		ans=RAIZ(numero, tolerancia, candidato); //se manda a llamar a la funcion RAIZ con nuestras variables numero tolerancia y candidato
		printf("%lf\n",ans);//se imprme el resultado, la raiz del numero con los valores antes ingresados
		
		return 0;
}
