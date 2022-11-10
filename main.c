#include <stdio.h>
#include <stdlib.h>
int main(int argc, char * argv[]){
	int a=atoi(argv[1]), b=atoi(argv[2]);
	printf("Addition:\n\t%d + %d = %d\n", a, b, a+b);
	return 0;
}
