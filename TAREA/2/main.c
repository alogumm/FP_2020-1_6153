#include <stdio.h>

int main( int argc, char *argv[] ){
	
	char i;
	
	printf(" Introduzca un numero \n");
	i=atoi(argv[i]);
	scanf("%c",&i);
	
    if (i%2 == 0)
        printf("1 \n");
      else
       printf("0 \n");
       
       return 0;
}
