#include <stdio.h>
#include <stdlib.h>


//Obejtivo: Converter temperatura de celcius para fahrenheit.

int main(void){
    //Variaveis utilizadas no codigo
    int temperatura[10], opcao, conversao, i=0, resultado_conversao;

    //inicializaçao do codigo
    printf(" Bem vindo ao conversor de temperatura\n");
    printf(" Para comecarmos, o que deseja?\n");
    printf("\n");
    //Loop caso o usuario deseje converter mais de uma temperatura sem precisar reniciar o programa
    do{ 
        //Menu apresentado ao usuario(a)
        printf("\n");
        printf(" ----------------- Menu -------------------\n");
        printf(" 1 - Converter de Celcius para Fahrenheit\n");
        printf(" 2 - Converter de Fahrenheit para Celcius\n");
        printf(" ------------------------------------------\n");
        printf("Lembre-se que para sair do programa so digita qualquer numero");

        scanf("%i", &opcao);
    
        //Bloco de codigo que ira realizar a funcionalidade desejada pelo usuario(a)
        switch (opcao){
            case 1:
                //Caso o usuario(a) escolha converter Celcius para Fahrenheit
                printf(" Beleza entao la vamos nos\n");
                printf(" Digite a temperatura que deseja converter\n");
                scanf("%i", &temperatura[i]);
                //Formula de conversao de temperatura
                conversao = ((temperatura[i]*9)/5) + 32;
                printf(" A temperatura %iC em Celcius e: %iF\n", temperatura[i],conversao);
                break;
            case 2:
                //Caso o usuario(a) escolha converter Fahrenheit para Celcius
                printf(" Beleza entao la vamos nos\n");
                printf(" Digite a temperatura que deseja converter\n");
                scanf("%i", &temperatura[i + 1]);
                //Formula de conversao de temperatura
                resultado_conversao = ((temperatura[i+1] - 32)*5)/9;
                printf(" A temperatura %iF em Celcius e: %iC\n", temperatura[i+1],resultado_conversao);

                break;
            default:
                //Caso o usuario(a) deseje sair
                printf("Muito Obrigado e ate logo!");
                i = 10;
            break;
        }
        //Utilizado para "Andas pelas casas" do vetor temperatura
        i = i+1;
        //Condicao para o loop se repetir de novo
    }while(i<10);
   
    
}