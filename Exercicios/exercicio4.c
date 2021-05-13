//Bibliotecas utilizadas
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Obejetivo: Apresentar ao usuario(a) as operações descritas abaixo
//Quadrado de um numero
//O cubo de um numero
//A raiz de um numero
//Caso o numero for negativo, o programa ira apreserntar o resultado 0a cada uma das operaçoes;

int main(void){
    //Variaveis utilizadas
    int numero, quadrado, cubo, raiz;
    //Mensagens para incio do programa
    printf("Seja muito bem vindo(a)\n");
    printf("Para comercamos");

    printf("digite um numero");
    scanf("%i", &numero);
    //Inicio das validações
    if(numero>0){
        //Caso o numero for positivo, ira realizar tais operaçoes abaixo
        quadrado = numero*numero;
        cubo = numero*numero*numero;
        raiz = sqrt(numero);
        //Aqui apresenta o resultado de cada uma
        printf("O numero %i ao quadrado e: %i\n", numero, quadrado);
        printf("O numero %i ao cubo e: %i\n", numero, cubo);
        printf("A raiz do numero %i e: %i\n", numero, raiz);

    }
    if(numero<0){
        //Caso o numero seja negativo, ira realizar tais operaçoes abaixo
        quadrado = 0;
        cubo = 0;
        raiz = 0;
        //Aqui apresenta o resultado de cada uma
        printf("O numero %i ao quadrado e: %i\n", numero, quadrado);
        printf("O numero %i ao cubo e: %i\n", numero, cubo);
        printf("A raiz do numero %i e: %i\n", numero, raiz);
    }
  

}