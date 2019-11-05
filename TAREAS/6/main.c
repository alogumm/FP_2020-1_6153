#include <stdio.h>
#include <stdlib.h>

int main (int argc, char*argv[]){
	int s=1;
	int r, j, k;
	for (int i=1; i<argc;i++){
		j=atoi(argv)[i]);
		s=s*j;
	}
	for (int w=1; w<argc;w++){
		k=atoi(argv)[w]);
		r=s/k;
		printf("%i\n", r);
}
	return 0;
}
