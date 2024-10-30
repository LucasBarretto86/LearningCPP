#include<stdio.h>
#include<malloc.h> // Memory allocation functions

int main(){
	
	/*malloc é uma função que permite o alocamento de espaço em memória, 
	recebe como paramentro o tamanho em bytes para alocamento, normalmente 
	é utilizada uma funcao sizeof() que recebe como param um tipo e retorna 
	o tamanho deste em bytes*/
	
	int* y = (int*) malloc(sizeof(int));
	*y = 20;
	int z = sizeof(int);
	printf("*y=%i, z=%i\n", *y, z);
	return 0;
}
