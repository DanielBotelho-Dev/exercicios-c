#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(void){
	
	setlocale(LC_ALL, "Portuguese");
	
	char cnpj[15];
	int i, d[14], iguais, soma1, resto1, verificador1, soma2, resto2, verificador2;
	
	iguais = 1;
	
	printf("\n\n---Verificação de CNPJ!---\n\n");
	printf("Digite o seu CNPJ(Somente os Números): ");
	scanf("%s", cnpj);
	
	if(strlen(cnpj) != 14){
		printf("\n\nDigite os 14 números do CNPJ corretamente.");
		
		return 0;
	}
	
	for(i = 0; i < 14; i++){
    	if(cnpj[i] < '0' || cnpj[i] > '9'){
        	printf("\nDigite apenas números!\n");
        
			return 0;
    	}
	}
	
	for(i = 0; i < 14; i++){
		d[i] = cnpj[i] - '0';
	}
	
	for(i = 1; i < 14; i++){
    	if(d[i] != d[0]){
        	iguais = 0;
        	break;
    	}
	}
	
	if(iguais){
    	printf("\n\nCNPJ inválido!\n\n");
    	
		return 0;
	}
	
	soma1 = (d[0] * 5) + (d[1] * 4) + (d[2] * 3) + (d[3] * 2) + (d[4] * 9) +
			(d[5] * 8) + (d[6] * 7) + (d[7] * 6) + (d[8] * 5) + (d[9] * 4) +
			(d[10] * 3) + (d[11] * 2);
	resto1 = soma1 % 11;
	
	if(resto1 < 2){
		verificador1 = 0;
	} else {
		verificador1 = 11 - resto1;
	}
	
	if(verificador1 == d[12]){
		printf("\n\nAnalisando CNPJ\n");
		
		soma2 = (d[0] * 6) + (d[1] * 5) + (d[2] * 4) + (d[3] * 3) + (d[4] * 2) +
				(d[5] * 9) + (d[6] * 8) + (d[7] * 7) + (d[8] * 6) + (d[9] * 5) +
				(d[10] * 4) + (d[11] * 3) + (d[12] * 2);
		resto2 = soma2 % 11;
		
		if(resto2 < 2){
			verificador2 = 0;
		} else {
			verificador2 = 11 - resto2;
		}
		
		if(verificador2 == d[13]){
			printf("\n\nO CNPJ: %c%c.%c%c%c.%c%c%c/%c%c%c%c-%c%c\n\n", cnpj[0], cnpj[1],
			    cnpj[2], cnpj[3], cnpj[4], cnpj[5], cnpj[6], cnpj[7], cnpj[8], cnpj[9],
				cnpj[10], cnpj[11], cnpj[12], cnpj[13]);
			printf("\n---É valido!---\n");
		} else {
			printf("\n\nCNPJ inválido!\n\n");
		}
	} else {
		printf("\n\nCNPJ inválido!\n\n");
	}	
	
	return 0;
}
