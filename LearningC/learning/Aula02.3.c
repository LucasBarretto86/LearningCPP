#include<stdio.h>
#include<malloc.h>

#define alturaMaxima 225

typedef struct{
	int peso;
	int altura;
} PesoAltura;

int main(){
	/* Quando se trabalha com o endereço de memório nos nos referimos ao endeço 
	de memoria desta forma, para acessar os valores contidos na memoria usamos ->*/
	
	PesoAltura* pessoa1 = (PesoAltura*) malloc(sizeof(PesoAltura)); // Usando o malloc para reservar memoria suficiente para o armazenamento da estrutura PesoAltura.
	pessoa1->peso = 64;
	pessoa1->altura = 176;
	
	printf("Peso: %i\nAltura: %i", pessoa1->peso, pessoa1->altura);
}


