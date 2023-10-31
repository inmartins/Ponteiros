#include <stdio.h>
#include <stdlib.h>

void main(){
	
	int *a, *b;
	int v1=10;
	int v2=20;
	
	a=&v1;
	b=&v2;
	
	printf("Endereco do primeiro valor: %p\n", &v1);
	printf("Endereco do segundo valor: %p\n", &v2);
	
	printf("Lendo o conteudo do ponteiro a: %p\n", a);
	printf("Lendo o conteudo do ponteiro b: %p\n", b);
	
	printf("Endereco da variavel ponteiro a: %p\n", &a);
	printf("Endereco da variavel ponteiro b: %p\n", &b);
	
	printf("Conteudo da variavel apontada por a: %i\n", *a);
	printf("Conteudo da variavel apontada por b: %i\n", *b);
	
	if(*a>*b){
		printf("O valor de %p e maior que o valor de %p\n", a, b);
	}else{
	} 
	
	if(*b>*a){
		printf("O valor de %p e maior que o valor de %p\n", b, a);
	}
	
	system("pause");
}
