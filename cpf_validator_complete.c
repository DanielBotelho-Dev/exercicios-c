#include <stdio.h>
#include <locale.h>
#include <windows.h>

int main(void){
	
	setlocale(LC_ALL, "Portuguese");
	
	long long cpf, cpfOriginal;
	int d[11], soma1, soma2, resto1, resto2, verificador1, verificador2;
	
	printf("\n\n---Verificação de CPF!---\n\n");
	printf("Informe o seu CPF(somente números, sem pontos e traços): ");
	scanf("%lld", &cpf);
	
	if(cpf < 10000000000 || cpf > 99999999999){
		printf("\n\nDigite os 11 números do seu CPF corretamente.\n\n");
		
		return 0;
	}
	
	cpfOriginal = cpf;
	
	for(int i = 10; i >= 0; i--){
		d[i] = cpf % 10;
		cpf = cpf / 10;
	}	
	
	if(d[0] == d[1] && d[1] == d[2] && d[2] == d[3] && d[3] == d[4] && 
	   d[4] == d[5] && d[5] == d[6] && d[6] == d[7] && d[7] == d[8] && 
       d[8] == d[9] && d[9] == d[10]){
    	printf("\n\nCPF inválido!\n\n");
    	
		return 0;
	}
		
	soma1 = (d[0] * 10) + (d[1] * 9) + (d[2] * 8) + (d[3] * 7) + (d[4] * 6) + 
			(d[5] * 5) + (d[6] * 4) + (d[7] * 3) + (d[8] * 2);
	resto1 = soma1 % 11;
	
	if(resto1 < 2){
		verificador1 = 0;
	} else {
		verificador1 = 11 - resto1;
	}
	
	if(verificador1 == d[9]){
		printf("\nAnalisando o seu CPF aguarde...");
		Sleep(3000);
		
		soma2 = (d[0] * 11) + (d[1] * 10) + (d[2] * 9) + (d[3] * 8) + (d[4] * 7) + 
				(d[5] * 6) + (d[6] * 5) + (d[7] * 4) + (d[8] * 3) + (d[9] * 2);
		resto2 = soma2 % 11;
		
		if(resto2 < 2){
			verificador2 = 0;
		} else {
			verificador2 = 11 - resto2;
		}
		
		if(verificador2 == d[10]){
			printf("\n\nO CPF: %lld", cpfOriginal);
			printf("\n---É válido!!!---");
		} else {
			printf("\n\nCPF inválido!\n\n");
		}
	} else {
		printf("\n\nCPF inválido!\n\n");
	}
	
	return 0;
}
