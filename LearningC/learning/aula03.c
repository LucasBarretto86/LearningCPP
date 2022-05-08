#include<stdio.h>
#define MAX 50

/*LISTA LINEAR SEQUENCIAL*/

typedef struct{
	/*Criou um model com um atributo chave */
	int chave;	
	//Outros campos...
} REGISTRO;

typedef struct{
	/*Criou uma estrutura para armazenar um array de registros, com o tamanho MAX predefinido como 50*/
	REGISTRO registros[MAX+1];
	int tamanho; // Um atributo para armazenar o número de elementos inseridos no array dado que este será incrementado.
} LISTA;

void init(LISTA* lista){
	/*Observe que neste caso para que possamos manipular uma mesma lista locada em memória é necessário trabalhar com o 
	endereço da memoria e não com uma nova LISTA, ou uma copia, pois, quando se recebe um struct como paramentro em C é 
	recebida na verdade uma copia da estrutura*/
	lista -> tamanho = 0;
}

int displayTamanho(LISTA* lista){
	return lista->tamanho;
}

void displayLista(LISTA* lista){
	int i;
	
	printf("Lista: ");
		for(i = 0; i < lista->tamanho;i++){
			printf("%i, ", lista->registros[i].chave);
		}
		printf("\n");
}

int buscar(int chave, LISTA* lista){
	int i;
	
	for(i = 0; i < lista->tamanho; i++){
		if(chave == lista->registros[i].chave) return i;
	}
	return -1;
}

int buscaOtimizada(LISTA* lista, int chave){
	/*A otimização neste caso se dá pelo fato de que o valor pesquisado pelo usuario é guardado 
	sempre na posição ultima posição da lista, por tanto, se o loop cair apenas nessa ultima posicao
	 significa que a chave buscada não havia sido cadastrada antes por tanto o registro é invalido
	 e retorna -1*/
	
	int i = 0;
	
	lista->registros[lista->tamanho].chave = chave;
	
	while(lista->registros[i].chave != chave) i++;
	if(i==lista->tamanho) return -1;
	else return i;
}

int adicionar(LISTA* lista, REGISTRO reg, int index){
	int j;
	
	if((lista->tamanho == MAX)||(index < 0)|| (index > lista->tamanho)) return -1;
		
	for( j = lista->tamanho; j > index ; j--){
		lista->registros[j].chave = lista->registros[j-1].chave; 
	}

	lista->registros[index] = reg;
	lista->tamanho++;
	return 0;
}

int excluir(int chave, LISTA* lista){
	int index, j;
	index = buscar(chave, lista);
	
	if(index == -1) return -1;
	
	for(j = index; j < lista->tamanho-1; j++){
		lista->registros[j] = lista->registros[j+1];
	}
	
	lista->tamanho--;
	return 0;
}

void destroy(LISTA* lista){
	lista->tamanho = 0;
}
