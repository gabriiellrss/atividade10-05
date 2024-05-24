#include<stdio.h>
#include<stdlib.h>
#include"biblioteca.h"


void main() {
	float n1, n2, resultado;
	int op;
	op = 0;

	while (op!=5) {
	printf(" Operações: Escolha digitando um numero\n");
	printf("\t 1.Soma\n");
	printf("\t 2.Subtração\n");
	printf("\t 3.Multiplicação\n");
	printf("\t 4.Divisão\n");
	printf("\t 5.Sair\n");
	scanf("%f", &op);

	printf("digite o primeiro valor\n");
	scanf("%f", &n1);
	printf("digite o segundo valor\n");
	scanf("%f", &n2);
	switch (op){
		case 1:
		resultado = soma(n1,n2);
		break;

		case 2:
		resultado = subtrai(n1,n2);
		break;

		case 3:
		resultado = multi(n1,n2);
		break;

		case 4:
		if (n2==0) {
			printf("ERRO! Digite um outro valor\n");
			scanf("%f", &n2);
			resultado = divisao(n1,n2);
			break;
		} else {
			resultado = divisao(n1,n2);
			break;
		}}}


		
}
