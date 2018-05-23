#include <stdio.h>
#include <stdlib.h>

int *p;
int x;

int main(){
	
	x = 10;
	p = &x;
	
	printf("O valor de x e %d", x);
	printf("\nO valor de p e %p ", p);
	printf("\nO valor *p e %d", *p);
	
	*p = 250;
	
	printf("\nO valor de x e %d", x);	
	
	return 0;
}
