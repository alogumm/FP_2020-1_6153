#include <stdio.h>
#include <stdlib.h>

int main( int argc, char *argv[] ){
	
	int num;
	
	printf("%s \n", argv[1]);
	num=atoi(argv[1]);
	
    if (num%2==0)
        printf("1 \n");
      else
       printf("0 \n");
       
       return 0;
}
