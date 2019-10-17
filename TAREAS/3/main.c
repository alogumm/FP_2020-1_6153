#include <stdio.h>
#include<stdlib.h>
int main(int argc, char * argv[]) {
   	double i, sum = 0, rest=0, mult=0, div=0;
 	
	sum= atof(argv[1])+atof(argv[2]);
	rest= atof(argv[1])-atof(argv[2]);
	mult= atof(argv[1])*atof(argv[2]);
	div= atof(argv[1])/atof(argv[2]);
	
 	printf("%.2f\n",sum);
	printf("%.2f\n",rest);
	printf("%.2f\n",mult);
	printf("%.2f\n",div);
 	
	return 0;
 
}
