#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, char*argv[]) {
	double a, b, c, s, w, k, x1, x2, n, m, i1, i2, r1;//se declaran las variables como double
	a=atof(argv[1]);//se cambian los arcuentos de entrada de char a float
	b=atof(argv[2]);
	c=atof(argv[3]);
		if(a!=0){//si el numero a es cero se cumple la condicion
		s=2*a;
		w=(b*b)-(4*a*c);
		if(w>=0){//si el numero es  mayor a cero se cumple la condicion
		k=sqrt(w);//usamos sqrt para la raiz
		x1=(b+k)/s;
		x2=(b-k)/s;
		if(x1==x2){ //si x1 y x2 son el mismo numero
		printf("%.2lf\n",x1);//se imprime un primer resultado
	}else{
		printf("%.2lf\n",x1);//se imprime otro resultado si la condicion no cumple
		printf("%.2lf\n",x2);//se imprime el resultado faltante ademas 
	}
	}else{//si hay numeros imaginarios se cumple el mismo proceso, pero convirtiendo el numero
	n=(4*a*c)-(b*b);
	m=sqrt(n);
	i1=m/s;
	r1=b/s;
	printf("%.2lf+%.2lfi\n",r1,i1);//se imprime la primera ssolucion con parte real e imaginaria
	printf("%.2lf-%.2lfi\n",r1,i1);//se imprime la segunda ssolucion con parte real e imaginaria
	}
	}
	return 0;
}
