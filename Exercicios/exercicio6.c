#include<stdio.h>
#include<stdlib.h>

void menu();
void funcionalidades();
void converter_polegadas();
void converter_jardas();
void converter_milhas();
void converter_pes();
void linha();

int main(void){
    funcionalidades();
}
void menu(){
    printf(" -------------  Menu  --------------------\n");
    printf("      1 - Converter polegadas\n");
    printf("      2 - Converter jardas\n");
    printf("      3 - Converter milhas\n");
    printf("      4 - Converter pes\n");
    printf("      5 - Sair\n");
    printf(" -----------------------------------------\n");
}

void funcionalidades(){
    int i=1, opcao, novamente=0;
    do{
        menu();
        scanf(" %i", &opcao);
        //Limpa tela por questão de estetica.
        system("cls");
        switch (opcao){
            case 1:
                converter_polegadas();
                break;
            case 2:
                converter_jardas();
                break;
            case 3:
                converter_milhas();
                break;
            case 4:
                converter_pes();
            case 5:
                printf("Obrigado e ate logo");
                //Colocado para encerrar o loop.
                i=0;
                break;
            default:
                printf(" Opcao invalida, digite novamente\n");
                scanf("%i", &novamente);
            break;
        } 
    }while(i==1 || novamente !=0);
   
}

void converter_polegadas(){
    int tamanho_polegadas, converter, tamanho_jardas, tamanho_milhas, i=1, tamanho_pes;
    //Primeiro o programa le qual o tamanho que ira ser convertido, para depois converter.
    linha();
    printf(" Digite o tamanho que deseja converter\n");
    linha();
    scanf("%i", &tamanho_polegadas);
    do{
        linha();
        //Com o tamanho a ser convertido, o(a) usuario(a) tem as possibilidades abaixo de conversão.
        printf(" O que deseja fazer?\n");
        printf("  1 - Converter para Jardas\n");
        printf("  2 - Converter para Milhas\n");
        printf("  3 - Converter para Pes\n");
        printf("  4 - Sair\n");
        linha();
        scanf(" %i", &converter);
        system("cls");
        switch (converter){
            case 1:
                tamanho_jardas=tamanho_polegadas/36;
                printf(" %i polegada(s) sao aproximadamente %i  jarda(s)\n", tamanho_polegadas, tamanho_jardas);
                break;
            case 2:
                tamanho_milhas=tamanho_polegadas/63360;
                printf(" %i polegada(s) sao aproximadamente %i  milha(s)\n", tamanho_polegadas, tamanho_milhas);
                break;
            case 3:
                tamanho_pes=tamanho_polegadas/12;
                printf(" %i polegadas(s) sao aproximadamente %i  pe(s)\n", tamanho_polegadas, tamanho_pes);
                break;
            case 4:
                printf(" Ok...saindo...\n");
                i=0;
                break;
            default:
                printf(" Opcao invalida\n");
            break;
        } 
    }while(i!=0);
    
}

//A forma de execução e organização são os mesmos de todos os  procedimentos de conversão.
void converter_jardas(){
    int tamanho_jardas, converter, tamanho_polegadas, tamanho_milhas, i=1, tamanho_pes;
    linha();
    printf(" Digite o tamanho que deseja conveter\n");
    linha();
    scanf(" %i", &tamanho_jardas);
    do{
        linha();
        printf(" O que deseja Fazer?\n");
        printf("  1 - Converter para Polegadas\n");
        printf("  2 - Converter para Milhas\n");
        printf("  3 - Converter para Pes\n");
        printf("  4 - Sair\n");
        linha();
        scanf(" %i", &converter);
        system("cls");
        switch (converter){
            case 1:
                tamanho_polegadas=tamanho_jardas*36;
                printf(" %i jarda(s) sao aproximadamente %i  polegada(s)\n", tamanho_jardas, tamanho_polegadas);
                break;
            case 2:
                tamanho_milhas=tamanho_jardas/1760;
                printf(" %i jarda(s) sao aproximadamente %i  milha(s)\n", tamanho_jardas, tamanho_milhas);
                break;
            case 3:
                tamanho_pes=tamanho_jardas*3;
                printf(" %i jarda(s) sao aproximadamente %i  pe(s)\n", tamanho_jardas, tamanho_pes);
                break;
            case 4:
                printf(" Ok...saindo...\n");
                i=0;
                break;
            default:
                printf(" Opcao invalida\n");
            break;
        }
    }while(i!=0);
}

void converter_milhas(){
    int tamanho_jardas, converter, tamanho_polegadas, tamanho_milhas, i=1, tamanho_pes;
    linha();
    printf(" Digite o tamanho que deseja conveter\n");
    linha();
    scanf("%i", &tamanho_milhas);
    do{
        linha();
        printf(" O que deseja fazer?\n");
        printf("  1 - Converter para Polegadas\n");
        printf("  2 - Converter para Jardas\n");
        printf("  3 - Converter para Pes\n");
        printf("  4 - Sair\n");
        linha();
        scanf(" %i", &converter);
        system("cls");
        switch (converter){
            case 1:
                tamanho_polegadas=tamanho_milhas*63360;
                printf(" %i milha(s) sao aproximadamente %i  polegada(a)\n", tamanho_milhas, tamanho_polegadas);
                break;
            case 2:
                tamanho_jardas=tamanho_milhas*1760;
                printf(" %i milha(s) sao aproximadamente %i  jarda(s)\n", tamanho_milhas, tamanho_jardas);
                break;
            case 3:
                tamanho_pes=tamanho_milhas*5280;
                printf(" %i milha(s) sao aproximadamente %i  pe(s)\n", tamanho_milhas, tamanho_pes);
                break;
            case 4:
                printf(" Ok...saindo...\n");
                i=0;
                break;
            default:
                printf(" Opcao invalida\n");
            break;
        }
    }while(i!=0);
}

//A forma de execução e organização são os mesmos de todos os  procedimentos de conversão.
void converter_pes(){
    int tamanho_jardas, converter, tamanho_polegadas, tamanho_milhas, i=1, tamanho_pes;
    linha();
    printf(" Digite o tamanho que deseja conveter\n");
    linha();
    scanf(" %i", &tamanho_pes);
    do{
        linha();
        printf(" O que deseja fazer?\n");
        printf("  1 - Converter para Polegadas\n");
        printf("  2 - Converter para Milhas\n");
        printf("  3 - Converter para Jardas\n");
        printf("  4 - Sair\n");
        linha();
        scanf(" %i", &converter);
        system("cls");
        switch (converter){
        case 1:
            tamanho_polegadas=tamanho_pes*12;
            printf(" %i pe(s) sao aproximadamente %i  polegada(s)\n", tamanho_pes, tamanho_polegadas);
            break;
        case 2:
            tamanho_milhas=tamanho_pes/5280;
            printf(" %i pe(s) sao aproximadamente %i  milha(s)\n", tamanho_pes, tamanho_milhas);
            break;
        case 3:
            tamanho_jardas=tamanho_pes/3;
            printf(" %i pe(s) sao aproximadamente %i  jarda(s)\n", tamanho_pes, tamanho_jardas);
            break;
        case 4:
            printf(" Ok...saindo...\n");
            i=0;
            break;
        default:
            printf(" Opcao invalida\n");
        break;
        }
    }while(i!=0);
}

//Procedimento criado para estetica.
void linha(){
    printf("------------------------------------------\n");
}
