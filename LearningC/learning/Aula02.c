#include<stdio.h>

int main(){
	int x = 25;
	int* y = &x;
	*y =30;
	printf("Valor atual de x: %i\n",x);
	
	//int* y ponteiro de memoria para numero inteiro
	//&x  o & retorna o endereço de memoria da variavel x
	//*y o * antes da variavel pede que o ponteiro aponte para a variavel em questão
}
