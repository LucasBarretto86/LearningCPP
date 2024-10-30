#include<stdio.h>
#include<malloc.h> // Memory allocation functions

int main(){
	
	/*malloc � uma fun��o que permite o alocamento de espa�o em mem�ria, 
	recebe como paramentro o tamanho em bytes para alocamento, normalmente 
	� utilizada uma funcao sizeof() que recebe como param um tipo e retorna 
	o tamanho deste em bytes*/
	
	int* y = (int*) malloc(sizeof(int));
	*y = 20;
	int z = sizeof(int);
	printf("*y=%i, z=%i\n", *y, z);
	return 0;
}
