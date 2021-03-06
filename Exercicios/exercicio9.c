//Objetivo: Calcular a area de um circulo, sem saber qual é a medida utilizada.
#include <stdio.h>
#include <stdlib.h>

void calcularArea();
void continua();
void linhas();

int main(void){
    linhas();
    printf("                           Seja bem vindo(a)\n");
    printf("  Aqui calculamos a area de um circulo, com base no raio, utilizando Pi = 3,14.\n");
    linhas();
    calcularArea();
}

void calcularArea(){
    int raio, opcao;
    float area;
    //Loop de repetição caso o(a) usuario(a) queira fazer mais de um calculo de area
    do{
        do{
            printf("  Digite o raio do circulo: ");
            scanf("%i", &raio);
            if(raio <0){
                printf("  Erro, o raio não pode ser negativo\n");
            }else{
                area = 3.14 * (raio*raio);
            }
        }while(raio <0);

        system("cls");

        printf("  A area do circulo de raio %i e: %.2f\n", raio, area);
        //Procedimento para saber se o programa ira se repetir novamente
        continua();
        scanf("%i", &opcao);
        system("cls");

    }while(opcao == 1);
    printf("  Obrigado e ate logo!");

}

void continua(){
    int escolha;
    linhas();
    printf("  O que deseja fazer?\n");
    printf("  1 - Gostaria de continuar?\n");
    printf("  2 - Sair\n");
    linhas();
}

//Procedimento para linhas, por questão de estetica.
void linhas(){
    printf("-----------------------------------------------------------------------------------------\n");
}
