#include <stdio.h>
#include <math.h>

int main(void){

    int opcao, subOpcao, n1, n2, totalOpe, i;
    double num1, num2, resultado, historico[5];

	totalOpe = 0;
    opcao = 1;

    while (opcao != 0) {
		printf("\n\n[1 - Soma]\t\t[2 - Subtracao]\t\t[3 - Multiplicacao]\n");
		printf("[4 - Divisao]\t\t[5 - Resto da Divisao]\t[6 - Potencia (ex: 2^3)]\n");
		printf("[7 - Raiz Quadrada]\t[8 - Historico]\t\t[9 - Porcentagem]\n");
		printf("[0 - Sair]\n");
        printf("\nEscolha uma opcao para definir o tipo de conta que voce deseja fazer: ");
        scanf("%i", &opcao);

        switch (opcao){

            case 0:
                printf("\n\nPrograma encerrado...\n\n");
            break;

            case 1:
				printf("\n\n---Voce Escolheu Soma---\n\n");
            	printf("\n\nInsira o primeiro numero: ");
            	scanf("%lf", &num1);

            	printf("\nInsira o segundo numero: ");
            	scanf("%lf", &num2);
            	
            	resultado = num1 + num2;
				
                printf("\n\n---Resultado Da Soma:---\n");
                printf("\n--- %.2lf + %.2lf = %.2lf ---\n", num1, num2, resultado);
                
            	if(totalOpe < 5){
            		historico[totalOpe] = resultado;
            		totalOpe++;
				} else {
					printf("\nHistorico Cheio!\nApenas os 5 primeiros resultados foram salvos!\n");
				}
            break;

            case 2:
            	printf("\n\n---Voce Escolheu Subtracao---\n\n");
            	printf("\n\nInsira o primeiro numero: ");
            	scanf("%lf", &num1);

            	printf("\nInsira o segundo numero: ");
            	scanf("%lf", &num2);
            	
            	resultado = num1 - num2;
            	
                printf("\n\n---Resultado Da Subtracao:---\n");
                printf("\n--- %.2lf - %.2lf = %.2lf ---\n", num1, num2, resultado);
                
            	if(totalOpe < 5){
            		historico[totalOpe] = resultado;
            		totalOpe++;
            	} else {
					printf("\nHistorico Cheio!\nApenas os 5 primeiros resultados foram salvos!\n");
				}
            break;

            case 3:
            	printf("\n\n---Voce Escolheu Multiplicacao---\n\n");
            	printf("\n\nInsira o primeiro numero: ");
            	scanf("%lf", &num1);

            	printf("\nInsira o segundo numero: ");
            	scanf("%lf", &num2);
            	
            	resultado = num1 * num2;
            	
                printf("\n\n---Resultado Da Multiplicacao:---\n");
                printf("\n--- %.2lf x %.2lf = %.2lf ---\n", num1, num2, resultado);
                
				if(totalOpe < 5){
            		historico[totalOpe] = resultado;
            		totalOpe++;
            	} else {
					printf("\nHistorico Cheio!\nApenas os 5 primeiros resultados foram salvos!\n");
				}
            break;

            case 4:
				printf("\n\n---Voce Escolheu Divisao---\n\n");
            	printf("\n\nInsira o primeiro numero: ");
            	scanf("%lf", &num1);

            	printf("\nInsira o segundo numero: ");
            	scanf("%lf", &num2);
			            
                if(num2 == 0){
                    printf("\n\n---Impossivel dividir por zero---\n\n");
                    break;
                }
                
                resultado = num1 / num2;

                printf("\n\n---Resultado Da Divisao:---\n");
                printf("\n--- %.2lf / %.2lf = %.2lf ---\n", num1, num2, resultado);
                
            	if(totalOpe < 5){
            		historico[totalOpe] = resultado;
            		totalOpe++;
            	} else {
					printf("\nHistorico Cheio!\nApenas os 5 primeiros resultados foram salvos!\n");
				}
            break;
            
            case 5:
            	printf("\n\n---Voce Escolheu Resto da Divisao---\n\n");
            	printf("\n\n(Escreva Apenas Numeros Inteiros)\n\n");
            	printf("\n\nInsira o primeiro numero: ");
            	scanf("%i", &n1);
            	
            	printf("\nInsira o segundo numero: ");
            	scanf("%i", &n2);
            	
            	if(n2 == 0){
            		printf("\n\n---Impossivel fazer o resto da divisao por 0---\n\n");
            		break;
				}
				
				resultado = n1 % n2;
            	
				printf("\n\n---Resultado Do Resto da Divisao---\n");
				printf("\n--- %i %% %i = %.0lf ---\n", n1, n2, resultado);
				
            	if(totalOpe < 5){
            		historico[totalOpe] = resultado;
            		totalOpe++;
            	} else {
					printf("\nHistorico Cheio!\nApenas os 5 primeiros resultados foram salvos!\n");
				}
			break;
			
			case 6:
				printf("\n\n---Voce Escolheu Potencia---\n\n");
				printf("\n\nInsira a base: ");
				scanf("%lf", &num1);
				
				printf("\nInsira o expoente: ");
				scanf("%lf", &num2);
				
				resultado = pow(num1, num2);
				
				printf("\n\n---Resultado Da Potencia---\n");
				printf("\n--- %.2lf ^ %.2lf = %.2lf ---\n", num1, num2, resultado);
				
				if(totalOpe < 5){
					historico[totalOpe] = resultado;
					totalOpe++;
				} else {
					printf("\nHistorico Cheio!\nApenas os 5 primeiros resultados foram salvos!\n");
				}
            break;
            
            case 7:
            	printf("\n\n---Voce Escolheu Raiz Quadrada---\n\n");
            	printf("\nInsira o numero para a raiz: ");
            	scanf("%lf", &num1);
            	
            	if(num1 < 0){
            		printf("\n\n---Raizes de numero negativo nao possuem solucao no conjunto de numeros reais---\n\n");
            		break;
				}
				
				resultado = sqrt(num1);
            	
            	printf("\n\n---Resultado da Raiz---\n");
            	printf("\n--- A raiz quadrada de %.2lf e igual a: %.2lf ---\n", num1, resultado);
            	
            	if(totalOpe < 5){
            		historico[totalOpe] = resultado;
            		totalOpe++;
            	} else {
					printf("\nHistorico Cheio!\nApenas os 5 primeiros resultados foram salvos!\n");
				}
            break;
            
            case 8:
            	printf("\n\n---Historico---\n\n");
            	
            	if(totalOpe == 0){
            		printf("\nNenhuma operacao realizada ainda\n");
            		break;
				}
            	
				for(i = 0; i < totalOpe; i++){
					printf("%i. %.2lf\n", i + 1, historico[i]);
				}
			break;
			
			case 9:
				printf("\n\n---Voce Escolheu Porcentagem---\n\n");
				printf("1 - Quanto e X%% de Y?\n");
				printf("2 - X e qual %% de Y?\n");
				printf("0 - De volta para o menu principal\n");
				printf("\nEscolha que tipo de calculo de porcentagem voce deseja operar: ");
				scanf("%i", &subOpcao);
				
				switch (subOpcao){
					case 0:
						printf("\n\nRetornando para o menu principal\n\n");
					break;
					
					case 1:
						printf("\n\nInsira o valor da porcentagem: ");
						scanf("%lf", &num1);
						
						printf("\nInsira o valor de Y: ");
						scanf("%lf", &num2);
						
						resultado = (num1 / 100) * num2;
						
						printf("\n\n---Resultado da Porcentagem---\n");
						printf("\n--- %.2lf%% de %.2lf e: %.2lf ---\n", num1, num2, resultado);
						
            			if(totalOpe < 5){
            				historico[totalOpe] = resultado;
            				totalOpe++;
            			} else {
							printf("\nHistorico Cheio!\nApenas os 5 primeiros resultados foram salvos!\n");
						}
					break;
					
					case 2:
						printf("\n\nInsira o valor de X: ");
						scanf("%lf", &num1);
						
						printf("\nInsira o valor de Y: ");
						scanf("%lf", &num2);
						
						if(num2 == 0){
							printf("\n\nImpossivel dividir por zero!\n\n");
							break;
						}
						
						resultado = (num1 / num2) * 100;
						
						printf("\n\n---Resultado da Porcentagem---\n");
						printf("\n--- %.2lf e %.2lf%% de %.2lf ---\n", num1, resultado, num2);
						
            			if(totalOpe < 5){
            				historico[totalOpe] = resultado;
            				totalOpe++;
            			} else {
							printf("\nHistorico Cheio!\nApenas os 5 primeiros resultados foram salvos!\n");
						}
					break;
					
					default:
						printf("\nOpcao inexistente!\n");
					break;
				}
			break;
				
			default:
                printf("\n\nOpcao inexistente\n\n");
            break;
        }
    }

    return 0;
}
