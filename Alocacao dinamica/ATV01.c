#include <stdio.h>
#include <stdlib.h>


int main(){
	int *p;
	
	p = (int*) malloc(sizeof(int));
	
	if(p == NULL){
		printf("\n\n ERRO !");
	}else {
		*p = 42;
		 printf("%p",p);
		 free(p);		 
	}
	return 0;
}
