#include <stdio.h>
#include <stdlib.h>

void menu();
void funcionalidades();
void informacoes();
void calcular_IMC();
void par_ou_impar();
void multiplicacao();
void divisao();

int main(void){
    funcionalidades();
}

void menu(){
    printf("---------- Menu ----------\n");
    printf("1 - Informacoes\n");
    printf("2 - Calcular IMC\n");
    printf("3 - Par ou Impar\n");
    printf("4 - Multiplicacao\n");
    printf("5 - Divisao\n");
    printf("6 - Sair\n");
    printf("--------------------------\n");
}



void funcionalidades(){
    int opcao;

    do{
        printf("\n");
        menu();
        printf("Digite a funcionalidade que deseja\n");
        scanf("%i", &opcao);
        switch (opcao){
            case 1:
                //System colocado por questão de estetica.
                system("cls");
                informacoes();
            break;
            case 2:
                system("cls");
                calcular_IMC();
            break;
            case 3: 
                system("cls");
                par_ou_impar();
            break;
            case 4:
                system("cls");
                multiplicacao();
            break;
            case 5:
                system("cls");
                divisao();
            break;
            case 6:
                system("cls");
                printf("Muito obrigado e até logo\n");
            break;
            default:
                printf("Erro! Opcao invalida, digite novamente\n");
                scanf("%i", &opcao);
            break;
        }
    }while(opcao < 6 || opcao != 6);

}

void informacoes(){
    printf("Ola, meu nome e Thallysson Ravel, tenho 19 anos e sou criador desse codigo e desse portifolio\n");
    printf("Sou estudante de engenharia e estou no meu primeiro semestre\n");
    printf("estudo na Universidade de Brasilia - UnB, campus FGA.\n");
}

void calcular_IMC(){
    float altura, peso, IMC;
    
    printf("Seja bem vindo, partiu calcular o IMC - INDICE DE MASSA CORPORAL\n");
    printf("Primeiro digite a sua altura!\n");
    printf("Lembrando que para numeros que contem virgula, se usa no lugar o caracter ponto '.'");
    scanf("%f", &altura);
    printf("Digite agora o seu peso!\n");
    scanf("%f", &peso);

    IMC = peso/(altura*altura);

    //Verificação do IMC junto com um diagnostico.
    if(IMC < 16){
        printf("O seu IMC e: %f\n", IMC);
        printf("Magreza Grave\n");
    }else if(IMC == 16 || IMC < 17){
        printf("O seu IMC e: %f\n", IMC);
        printf("Magreza Moderada\n");
    }else if(IMC == 17 || IMC <18,5){
        printf("O seu IMC e: %f\n", IMC);
        printf("Magreza Leve\n");
    }else if(IMC == 18,5 || IMC <25){
        printf("O seu IMC e: %f\n", IMC);
        printf("Saudavel\n");
        printf("Seu peso esta otimo\n");
    }else if(IMC == 25 || IMC <30){
        printf("O seu IMC e: %f\n", IMC);
        printf("Sobrepeso\n");
    }else if(IMC == 30 || IMC <35){
        printf("O seu IMC e: %f\n", IMC);
        printf("Obecidade Grau I\n");
    }else if(IMC == 35 || IMC <40){
        printf("O seu IMC e: %f\n", IMC);
        printf("Obecidade Grau II\n");
    }else if(IMC >= 40){
        printf("O seu IMC e: %f\n", IMC);
        printf("Obecidade Grau III\n");
    }

}

void par_ou_impar(){
    int numero;

    printf("Partiu descobrir se e impar ou par?\n");
    printf("Para comecar digite um numero\n");
    scanf("%i", &numero);

    //Verificação do numero, para ver se é par ou impar
    if(numero % 2 == 0){
        printf("O numero %i e par\n", numero);
    }else{
        printf("O numero %i e impar\n", numero);
    }
}

void multiplicacao(){
    int numero1, numero2, resultado;

    printf("Partiu multiplicar? Digite o primeiro numero\n");
    scanf("%i", &numero1);
    printf("Agora digite o segundo numero\n");
    scanf("%i", &numero2);

    resultado = numero1*numero2;

    printf("A multicacao do numero %i e do numero %i e: %i\n", numero1, numero2, resultado);
}

void divisao(){
    int numero1_Div, numero2_Div, resultado_Div;

    printf("Partiu dividir? Digite o primeiro numero\n");
    scanf("%i", &numero1_Div);
    printf("Digite o segundo numero\n");
    scanf("%i", &numero2_Div);

    resultado_Div = numero1_Div/numero2_Div;

    printf("A divisao entre o numero %i e o %i e: %i\n", numero1_Div, numero2_Div, resultado_Div);
}
