#include<stdio.h>
#include<locale.h>

int main(void){
	
	setlocale(LC_ALL, "Portuguese");
	
	int d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11, soma1, soma2, resto1, resto2, verificador1, verificador2;
	
	printf("\n\n---Verificação de CPF!---\n\n");
	printf("\nDigite o 1° dígito do seu cpf: ");
	scanf("%i", &d1);
	
	printf("\nDigite o 2° dígito: ");
	scanf("%i", &d2);
	
	printf("\nDigite o 3° dígito: ");
	scanf("%i", &d3);
	
	printf("\nDigite o 4° dígito: ");
	scanf("%i", &d4);
	
	printf("\nDigite o 5° dígito: ");
	scanf("%i", &d5);
	
	printf("\nDigite o 6° dígito: ");
	scanf("%i", &d6);
	
	printf("\nDigite o 7° dígito: ");
	scanf("%i", &d7);
	
	printf("\nDigite o 8° dígito: ");
	scanf("%i", &d8);
		
	printf("\nDigite o 9° dígito: ");
	scanf("%i", &d9);
	
	printf("\nDigite o 10° dígito: ");
	scanf("%i", &d10);
	
	printf("\nDigite o 11° dígito: ");
	scanf("%i", &d11);
	
	if(d1 < 0 || d1 > 9 || d2 < 0 || d2 > 9 || d3 < 0 || d3 > 9 ||
	   d4 < 0 || d4 > 9 || d5 < 0 || d5 > 9 || d6 < 0 || d6 > 9 || 
	   d7 < 0 || d7 > 9 || d8 < 0 || d8 > 9 || d9 < 0 || d9 > 9 ||
	   d10 < 0 || d10 > 9 || d11 < 0 || d11 > 9){
		printf("\n\nEntrada inválida! Digite um número por campo.(o número deve ser positivo)\n\n");
	   	
		return 0;
	}
	
	if(d1 == d2 && d2 == d3 && d3 == d4 && d4 == d5 &&
	   d5 == d6 && d6 == d7 && d7 == d8 && d8 == d9 &&
	   d9 == d10 && d10 == d11){
		printf("\n\nCPF inválido!\n\n");
		
		return 0;
	}

	soma1 = (d1 * 10) + (d2 * 9) + (d3 * 8) + (d4 * 7) + (d5 * 6) + 
			(d6 * 5) + (d7 * 4) + (d8 * 3) + (d9 * 2);
	resto1= soma1 % 11;
	
	if(resto1 < 2){
		verificador1 = 0;
	} else {
		verificador1 = 11 - resto1;
	}
	
	if(verificador1 == d10){
		printf("\nPrimeiro dígito verificador válido!");
		printf("\nAnalisando o segundo dígito verificador aguarde ...");
		
		soma2 = (d1 * 11) + (d2 * 10) + (d3 * 9) + (d4 * 8) + (d5 * 7) + 
				(d6 * 6) + (d7 * 5) + (d8 * 4) + (d9 * 3) + (d10 * 2);
		resto2 = soma2 % 11;
		
		if(resto2 < 2){
			verificador2 = 0;
		} else {
			verificador2 = 11 - resto2;
		}
		
		if(verificador2 == d11){
			printf("\n\nO CPF: %i%i%i.%i%i%i.%i%i%i-%i%i", d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11);
			printf("\n\n---É válido!!!---\n\n");
		} else {
			printf("\n\nCPF inválido!\n\n");
		}
	} else {
		printf("\n\nCPF inválido!\n\n");
	}
	
	return 0;
}
