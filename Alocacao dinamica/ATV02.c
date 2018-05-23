//Crie uma estrutura que tenha dois atributos :cor(cadeia de caracteres) e id: inteiro;
//Crie tres variaveis com o tipo definido no item a;
//Crie um ponteiro do mesmo tipo;
/* Inicialize as estruturas das seguintes formas: 
	- Cor vermelha id - 1
	- Cor amarela  id - 2
	- Cor verde    id - 3
*/
// Inicialize o ponteiro apontando para a primeira variavel criada;
// Percorra por cada variavel imprimindo os valores das variaveis criadas;

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct tsemafaro {
	char cor[10];
	int  id;
};

struct tsemafaro cor1 = {"Vermelha", 1};
struct tsemafaro cor2 = {"Amarela", 2};
struct tsemafaro cor3 = {"Verde", 3};

struct tsemafaro *p;

int main(){
	int i;
	p = &cor1;
	
	for( i = 0 ; i < 3 ; i++){
		printf("\n%s - id %d ",(*p).cor , (*p).id);
		p += 1 ;
	}
	
	return 0;
}
