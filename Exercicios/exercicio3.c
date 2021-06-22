#include <stdio.h>
#include <stdlib.h>

//Obejtivo: Converter temperatura de celcius para fahrenheit.

int main(void){
    int temperatura[10], opcao, conversao, i=0, resultado_conversao;

    printf(" Bem vindo ao conversor de temperatura\n");
    printf(" Para comecarmos, o que deseja?\n");
    printf("\n");
    do{
        printf("\n");
        printf(" ----------------- Menu -------------------\n");
        printf(" 1 - Converter de Celcius para Fahrenheit\n");
        printf(" 2 - Converter de Fahrenheit para Celcius\n");
        printf(" ------------------------------------------\n");
        printf("Lembre-se que para sair do programa so digita qualquer numero");

        scanf("%i", &opcao);
    
        switch (opcao){
            case 1:
                printf(" Beleza entao la vamos nos\n");
                printf(" Digite a temperatura que deseja converter\n");
                scanf("%i", &temperatura[i]);
                conversao = ((temperatura[i]*9)/5) + 32;
                printf(" A temperatura %iC em Celcius e: %iF\n", temperatura[i],conversao);
                break;
            case 2:
                printf(" Beleza entao vamos la\n");
                printf(" Digite a temperatura que deseja converter\n");
                scanf("%i", &temperatura[i + 1]);
                resultado_conversao = ((temperatura[i+1] - 32)*5)/9;
                printf(" A temperatura %iF em Celcius e: %iC\n", temperatura[i+1],resultado_conversao);

                break;
            default:
                printf("Muito Obrigado e ate logo!");
                i = 10;
            break;
        }
        //Utilizado para "andar pelas posições" do vetor temperatura
        i = i+1;
    }while(i<10);
   
    
}
