#include<stdio.h>
#include<stdlib.h>


void numero(int n) {
	printf("%d\n", n);
	n =n+1;
	if (n==50){
		numero(n);
	} else {
		printf("fim");
	
	}
}


void main() {
	printf("Boa Tarde\n");
	numero(0);

}
