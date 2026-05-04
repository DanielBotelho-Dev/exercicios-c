#include <stdio.h>

int main(void){

    int opcao;
    double num1, num2;

    opcao = 1;

    while (opcao != 0) {
        printf("\n\n---CALCULADORA---\n\n");
        printf("1 - Soma\n");
        printf("2 - Subtracao\n");
        printf("3 - Multiplicacao\n");
        printf("4 - Divisao\n");
        printf("0 - Sair\n");
        printf("\nEscolha que tipo de conta voce deseja fazer: ");
        scanf("%i", &opcao);

        if(opcao >= 1 && opcao <= 4){

            if(opcao == 1){
                printf("\n\n---Voce Escolheu Soma---\n\n");
            }

            if(opcao == 2){
                printf("\n\n---Voce Escolheu Subtracao---\n\n");
            }

            if(opcao == 3){
                printf("\n\n---Voce Escolheu Multiplicacao---\n\n");
            }

            if(opcao == 4){
                printf("\n\n---Voce Escolheu Divisao---\n\n");
            }

            printf("\n\nInsira o primeiro numero: ");
            scanf("%lf", &num1);

            printf("\nInsira o segundo numero: ");
            scanf("%lf", &num2);
        }

        switch (opcao){

            case 0:
                printf("\n\nPrograma encerrado...\n\n");
            break;

            case 1:        
                printf("\n\n---Resultado Da Soma:---\n");
                printf("\n--- %.2lf + %.2lf = %.2lf ---\n", num1, num2, num1 + num2);
            break;

            case 2:
                printf("\n\n---Resultado Da Subtracao:---\n");
                printf("\n--- %.2lf - %.2lf = %.2lf ---\n", num1, num2, num1 - num2);
            break;

            case 3:
                printf("\n\n---Resultado Da Multiplicacao:---\n");
                printf("\n--- %.2lf x %.2lf = %.2lf ---\n", num1, num2, num1 * num2);
            break;

            case 4:            
                if(num2 == 0){
                    printf("\n\n---Impossivel dividir por zero---\n\n");
                    break;
                }

                printf("\n\n---Resultado Da Divisao:---\n");
                printf("\n--- %.2lf / %.2lf = %.2lf ---\n", num1, num2, num1 / num2);
            break;

            default:
                printf("\n\nOpcao inexistente\n\n");
            break;
        }
    }

    return 0;
}
