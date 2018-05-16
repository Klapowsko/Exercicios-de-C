#include <stdio.h>
#include <locale.h>
//Define uma constante 
#define tamanho 10
// Cria uma estrutura 
struct tpilha {
	int num[tamanho];
	int ini;
	int fim;
};
// Criação de variaveis globais
struct tpilha pilha;
int op;
// Prototipação das funções.
void chama_menu();
void exibi_num();
void pilha_entrar();
void pilha_sair();

int main(){
	pilha.ini = 0;
	pilha.fim = 0;
	setlocale(LC_ALL,"Portuguese");	
	op = 1;	
	//Enquanto op for diferente de 0 executa as instruções;	
	while(op != 0){
		system("cls");
		exibi_num();
		chama_menu();
		scanf("%d",&op);
		switch(op){
			case 1 : 
				pilha_entrar();
				break;	
			case 2 :
				pilha_sair();
				break;	
		}
	}	
	
	return 0;
}

//Função que exibe o menu
void chama_menu(){
	printf("\n1- Incluir numero\n");
	printf("2- Remover numero\n");
	printf("0- Sair\n");
}
//Função que exibe os numeros do vetor
void exibi_num(){
	int i;
	printf("[ ");
	for(i=0; i<tamanho; i++ ){
		printf("%d ", pilha.num[i]);
	}
	printf("]\n");
}
// Adiciona um elemento no vetor
void pilha_entrar(){

	if(pilha.fim == tamanho){
		printf("\nPilha já cheia e não pode incrementar mais numeros!\n\n");
		system("pause");
	}else{
		system("cls");
		printf("Digite um numero:");
		scanf("%d",&pilha.num[pilha.fim]);
		pilha.fim++;
	}
	
}
//função que remove o ultimo elemento do vetor
void pilha_sair(){
	pilha.num[pilha.fim-1] = 0;
	pilha.fim--;

}

