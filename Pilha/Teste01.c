#include <stdio.h>
#include <locale.h>

#define tamanho 5

struct tpilha {
	int dados[tamanho];
	int ini;
	int fim;
};

int op;
struct tpilha pilha;
void mostrar_pilha();
void entrar_pilha();
void pilha_sair();

int main(){
	pilha.ini = 0;
	pilha.fim = 0;
	op = 1;
	
	while(op != 0 ){
		setlocale(LC_ALL,"Portuguese");
		system("cls");
		mostrar_pilha();
		printf("\nDigite uma opção:");
		scanf("%d",&op);
		switch (op){
			case 1 : 
				entrar_pilha();
				break;
			case 2 : 
				pilha_sair();
				break;				
		}
	
	}
	
	return 0;
	
}

void mostrar_pilha(){
	int i;
	printf("\n[ ");
	for(i = 0 ; i<tamanho; i++){
		printf("%d ",pilha.dados[i]);
	}
	printf(" ]\n");
}

void entrar_pilha(){
	if(pilha.fim == tamanho){
		printf("\n\nA pilha está cheia e nao pode mais acresentar números\n\n");
		system("pause");
	}
	printf("Digite um valor: ");
	scanf("%d",&pilha.dados[pilha.fim]);
	pilha.fim++;
}

void pilha_sair(){
	int i;
	
	for(i = 0 ; i<tamanho; i++){
		pilha.dados[i] = pilha.dados[i+1];
	} 
	pilha.dados[pilha.fim]=0;
	
}
