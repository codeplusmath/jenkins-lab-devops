#include <stdio.h>
#include <stdlib.h>
int main(int argc, char * argv[]){
	int a=atoi(argv[1]), b=atoi(argv[2]);
    printf("This is change in main.c for jenkins auto build pipeline\n");
	printf("Addition:\n\t%d + %d = %d\n", a, b, a+b);
	return 0;
}
