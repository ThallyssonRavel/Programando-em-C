//Bibliotecas utilizadas
#include <stdio.h>
#include <stdlib.h>

//Assinatura dos procedimentos
void menu();
void funcionalidades();
void informacoes();
void calcular_IMC();
void par_ou_impar();
void multiplicacao();
void divisao();

//Função principal
int main(void){
    funcionalidades();
}

//Procedimento que apresenta na tela do usuario o menu.
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


/*Procedimento que ira pegar a opção escolhida pelo usuario e realizar tal funcionalidade desejada*/
void funcionalidades(){
    int opcao;

    /*Loop de repetição devido a possibilidade do usuario colocar um numero diferente das funcionalidades existentes*/
    do{
        printf("\n");
        //Procedimento Menu
        menu();
        printf("Digite a funcionalidade desejada\n");
        scanf("%i", &opcao);
        switch (opcao){
            case 1:
                //Foi colocado encima de cada funcionalidade em casa case, devido a questão de estetica.
                system("cls");
                //Procedimento Informações
                informacoes();
            break;
            case 2:
                system("cls");
                //Procedimento Calcular IMC
                calcular_IMC();
            break;
            case 3: 
                system("cls");
                //Procedimento par ou impar
                par_ou_impar();
            break;
            case 4:
                system("cls");
                //Procedimento multiplicação
                multiplicacao();
            break;
            case 5:
                system("cls");
                //Procedimento Divisão
                divisao();
            break;
            case 6:
                system("cls");
                //Mensagem final apresentada ao usuario no fim do codigo
                printf("Muito obrigado e até logo\n");
            break;
            default:
                //Caso o usuario digite uma funcionalidade inexistente
                printf("Erro! Opcao invalida, digite novamente\n");
                scanf("%i", &opcao);
            break;
        }
        //Condições para o loop
    }while(opcao < 6 || opcao != 6);

}

//Procedimento Informações
void informacoes(){
    /*Nesse procedimento é apresentado informações sobre o criador do codigo*/
    printf("Ola, meu nome e Thallysson Ravel, tenho 19 anos e sou criador desse codigo e desse portifolio\n");
    printf("Sou estudante de engenharia e estou no meu primeiro semestre\n");
    printf("estudo na Universidade de Brasilia - UnB, campus FGA.\n");
}

//Procedimento que realiza o calculo do IMC
void calcular_IMC(){
    float altura, peso, IMC;

    //Adquiri os dados necessarios ao calculo
    printf("Seja bem vindo, partiu calcular o IMC - INDICE DE MASSA CORPORAL\n");
    printf("Primeiro digite a sua altura!\n");
    printf("Lembrando que para numeros que contem virgula, se usa no lugar o caracter ponto '.'");
    scanf("%f", &altura);
    printf("Digite agora o seu peso!\n");
    scanf("%f", &peso);

    //Calculo do IMC
    IMC = peso/(altura*altura);

    //Verificação do IMC, junto com um diagnostico
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

//Procedimento que verifica se um numero é impar ou par
void par_ou_impar(){
    int numero;

    printf("Partiu descobrir se e impar ou par?\n");
    printf("Para comecar digite um numero\n");
    scanf("%i", &numero);

    //Verificação do numero, para ver se é par ou impar
    if(numero % 2 == 0){
        //Para um numero ser par o resto da divisao do numero por 2 tem que ser 0
        printf("O numero %i e par\n", numero);
    }else{
        printf("O numero %i e impar\n", numero);
    }
}

//Procedimento da multiplicação de numeros
void multiplicacao(){
    int numero1, numero2, resultado;

    printf("Partiu multiplicar? Digite o primeiro numero\n");
    scanf("%i", &numero1);
    printf("Agora digite o segundo numero\n");
    scanf("%i", &numero2);

    //Calculo da multiplicação
    resultado = numero1*numero2;

    printf("A multicacao do numero %i e do numero %i e: %i\n", numero1, numero2, resultado);
}

//Procedimento da divisao de numeros
void divisao(){
    int numero1_Div, numero2_Div, resultado_Div;

    printf("Partiu dividir? Digite o primeiro numero\n");
    scanf("%i", &numero1_Div);
    printf("Digite o segundo numero\n");
    scanf("%i", &numero2_Div);

    //Calculo da divisão dos numeros
    resultado_Div = numero1_Div/numero2_Div;

    printf("A divisao entre o numero %i e o %i e: %i\n", numero1_Div, numero2_Div, resultado_Div);
}