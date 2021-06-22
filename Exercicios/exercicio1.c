#include <stdio.h>
#include <stdlib.h>

void menu();
void divisao_de_premio();
void conferir_salario();
void somando_numeros();
void escolha_funcionalidade(int escolha);

int main(void){
    int escolha;
    escolha_funcionalidade(escolha);
}

void menu(){
    printf("------------------ Menu ------------------\n");
    printf("1 - Divisao de premio\n");
    printf("2 - Conferir Salario\n");
    printf("3 - Realizar soma de antecessor e sucessor\n");
    printf("4 - Sair\n");
    printf("--------------------------------------------\n");
}

void escolha_funcionalidade(int escolha){

    int volta, resultado_geral;
    /*Esta dentro de um ciclo de repetição devido ao caso de o usuario digitar uma alternativa que não 
    ha no menu*/
    do{
        printf("\n");
        
        menu();
        scanf("%i", &escolha);
        switch (escolha){
            case 1:
                //System utilizado para ficar mais organizado
                system("cls");
                divisao_de_premio();
                printf("\n");
                break;
            case 2:
                system("cls");
                conferir_salario();
                printf("\n");
                break;
            case 3:
                system("cls");
                somando_numeros();
                printf("\n");
                break;
            case 4:
                printf("Obrigado e ate mais!\n");
                printf("\n");
                break;
            default:
                system("cls");
                printf("Opçao nao encontrada! Digite novamente\n");
                scanf("%i", &volta);
                printf("\n");
                escolha = volta;
            break;
        }   
    }while(escolha < 4 || escolha != 4);
    
}

void divisao_de_premio(){

    int premio, resultado_premio[100], porcentagem_premio[100], quantidade_pessoas;

    printf("Bem vindo, iremos realizar a divisao do premio!\n");
    printf("Primeiro, digite o valor do premio!\n");
    scanf("%i", &premio);

    printf("Agora digite quantas pessoas iram ganhar o premio\n");
    scanf("%i", &quantidade_pessoas);

    for(int i=0; i<quantidade_pessoas; i++){

        printf("Digite a porcentagem do premio do: %i colocado\n", i+1);
        scanf("%i", &porcentagem_premio[i]);

        //Resultado premio informara o premio final de cada colocado.
        resultado_premio[i] = (premio * porcentagem_premio[i])/100;
    }

    //For ultilizado para apresentar o resultado de cada ganhador do prêmio
    for(int i=0; i<quantidade_pessoas; i++){
        printf("O resultado de cada um e: %i\n", resultado_premio[i]);
    }

}

void conferir_salario(){

    int salario, quantidade_impostos, por_dia, valor_imposto[100], resultado_salario;
    int somatorio_porcentagem = 0;
    int dias;
    char mes_dia;

    printf("Bem vindo!, iremos realizar o calculo do seu salario!\n");
    printf("Digite quanto ganha!\n");
    scanf("%i", &salario);

 
    printf("Voce recebe por mes ou por dia?\n");
    setbuf(stdin, NULL);
    scanf("%c", &mes_dia);
    
    do{
        if(mes_dia == 'm' || mes_dia == 'M'){

            printf("Quantos impostos sao descontados do seu salario?\n");
            scanf("%i", &quantidade_impostos);

            printf("\n");

            printf("Agora diga quantos porcento que paga de cada imposto!\n");
            printf("Lembrando que nao precisa digitar o simbolo da porcentagem \n");

            printf("\n");

            for(int i=0; i<quantidade_impostos; i++){
                printf("Digite o valor do imposto %i\n", i + 1);
                scanf("%i", &valor_imposto[i]);
                /*Aqui é somado a quantidade da porcentagem que é retirada do salario do
                usuario*/
                somatorio_porcentagem = somatorio_porcentagem + valor_imposto[i];
            }

            /*Aqui é calculado e atribuido a variavel resultado_salario
            o salario do usuario ja com os devidos descontos*/
            resultado_salario = salario - ((salario/100) * somatorio_porcentagem);

            printf("Seu salario por mes, ja descontado os impostos fica: %i\n", resultado_salario);

        }else{

            if(mes_dia == 'D' || mes_dia == 'd'){

                printf("Quantos dias voce trabalhou?\n");
                scanf("%i", &dias);

                por_dia = salario/dias;

                printf("Agora diga quantos porcento que paga de cada imposto!\n");
                printf("Lembrando que nao precisa digitar o simbolo % \n");
                
                for(int i=0; i<quantidade_impostos; i++){
                    scanf("%f", &valor_imposto[i]);

                    somatorio_porcentagem = somatorio_porcentagem + valor_imposto[i];
                }
                
                resultado_salario = (salario/100) * somatorio_porcentagem;

                printf("Seu salario por mes, ja discontado os impostos fica: %f \n", resultado_salario);
                printf("Com voce ganhando %f por dia\n", por_dia);

            }else{
                printf("Erro! Digite novamente");
                setbuf(stdin, NULL);
                scanf("%c", &mes_dia);
            }
        }

    }while(mes_dia != 'm' && mes_dia != 'M' && mes_dia != 'D' && mes_dia != 'd');
}

void somando_numeros(){
    int numero_inteiro, resultado_soma;

    printf("Bem vindo!, iremos realizar a soma de numeros, digite um numero inteiro!\n");
    scanf("%i", &numero_inteiro);

    //Realiza a soma entre o sucessor e antecessor do numero inteiro
    resultado_soma = (numero_inteiro + 1) + (numero_inteiro - 1);
    
    printf("O resultado da soma dos numeros, fica: %i\n", resultado_soma);
}
