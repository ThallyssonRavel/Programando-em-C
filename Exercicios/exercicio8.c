#include <stdio.h>
#include <stdlib.h>

void inicio();
void funcionalidades();
void menu_converter_horas();
void menu_converter_minutos();
void menu_converter_segundos();
void converter_horas();
void converter_minutos();
void converter_segundos();

void linhas();

int main(void){
    printf("Seja bem vindo(a), aqui convertemos horas, minutos e segundos\n");
    printf("\n");
    funcionalidades();
}

void inicio(){
    printf("O que deseja fazer?\n");
    linhas();
    printf("1 - Converter Horas\n");
    printf("2 - Converter Minutos\n");
    printf("3 - Converter Segundos\n");
    printf("4 - Sair\n");
    linhas();
}

void funcionalidades(){
    int escolha, nulo;

    do{
        inicio();

        scanf("%i", &escolha);
        system("cls");
        switch (escolha){
            case 1:
                converter_horas();
                printf("\n");
                break;
            case 2:
                converter_minutos();
                printf("\n");
                break;
            case 3:
                converter_segundos();
                printf("\n");
                break;
            case 4:
                printf("Obrigado e ate logo!\n");
                scanf("%i", &nulo);
                break;
            default:
                printf("Erro, Opcao nâo encontrada\n");
            break;
        } 
    }while(escolha != 4);
    
}

void menu_converter_horas(){
    printf("Ok, vamos converter horas em que?\n");
    linhas();
    printf("1 - Minutos\n");
    printf("2 - Segundos\n");
    linhas();
}

void menu_converter_minutos(){
    printf("Ok, vamos converter minutos em que?\n");
    linhas();
    printf("1 - Horas\n");
    printf("2 - Segundos\n");
    linhas();
}

void menu_converter_segundos(){
    printf("Ok, vamos converter segundos em que?\n");
    linhas();
    printf("1 - Horas\n");
    printf("2 - Minutos\n");
    linhas();
}

void converter_horas(){
    int escolha, horas, resultado;
    do{
        menu_converter_horas();
        scanf("%i", &escolha);
        linhas();
        printf("Digite quantas horas deseja converter\n");
        linhas();
        scanf("%i", &horas);
        system("cls");
        if(horas<0){
            printf("Erro! Nao existe hora negativa");
        }
    }while(horas <0);
   

    switch (escolha){
        case 1:
            resultado = horas*60;
            linhas();
            printf("%i hora(s) e: %i minuto(s)\n", horas,resultado);
            linhas();
            break;
        case 2:
            resultado = horas*3600;
            linhas();
            printf("%i hora(s) e: %i segundo(s)\n", horas,resultado);
            linhas();
            break;
        default:
        break;
    }
}

void converter_minutos(){
    int escolha, minutos, resultado;
    do{
        menu_converter_minutos();
        scanf("%i", &escolha);
        linhas();
        printf("Digite quantos minutos deseja converter\n");
        linhas();
        scanf("%i", &minutos);
        system("cls");
        if(minutos <0){
            printf("Erro, nao existe minutos negativos");
        }
    }while(minutos <0);
    

    switch (escolha){
        case 1:
            resultado = minutos/60;
            linhas();
            printf("%i minutos e: %i hora(s)\n", minutos,resultado);
            linhas();
            break;
        case 2:
            resultado = minutos*60;
            linhas();
            printf("%i minutos e: %i segundo(s)\n", minutos,resultado);
            linhas();
            break;
        default:
        break;
    }
}

void converter_segundos(){
    int escolha, segundos, resultado;
    do{
        menu_converter_segundos();
        scanf("%i", &escolha);
        linhas();
        printf("Digite quantas horas deseja converter\n");
        linhas();
        scanf("%i", &segundos);
        system("cls"); 
        if(segundos <0){
            printf("Erro, nao existe segundos negativos");
        }
    }while(segundos <0);
    

    switch (escolha){
        case 1:
            resultado = segundos/3600;
            linhas();
            printf("%i segundos e: %i hora(s)\n", segundos,resultado);
            linhas();
            break;
        case 2:
            resultado = segundos/60;
            linhas();
            printf("%i segundos e: %i minuto(s)\n", segundos,resultado);
            linhas();
            break;
        default:
        break;
    }
}

void linhas(){
    printf("----------------------------------------\n");
}