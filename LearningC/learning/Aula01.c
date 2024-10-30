#include<stdio.h>
#define alturaMaxima 225 //Constante, variavel Global

typedef struct{ //um struct tipificado
	int peso;
	int altura;
} PesoAltura;

int main(){
	
	PesoAltura pessoa1; // criação da instanciaa
	
	pessoa1.peso = 64; // Carregando valores
	pessoa1.altura = 176;  // Carregando valores

	if(pessoa1.peso<alturaMaxima){
		printf("Peso: %i \nAltura: %i", pessoa1.peso, pessoa1.altura);
	} else {
		printf("Informacoes Invalidas!");
	}
		
	return 0;
}

