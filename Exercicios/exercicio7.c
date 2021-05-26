//Bibliotecas utilizadas
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Assinatura do procedimento
void calcular_distancia();

//Função principal
int main(void){
    //Inicio do programa
    printf("Seja muito bem vindo(a), partiu calcular distancias?\n");
    //Procedimento
    calcular_distancia();
}

//Procedimento para calcular a distancia entre os dois pontos
void calcular_distancia(){
    //Variaveis utilizadas
    float x[1], y[1], calculo_da_distancia;
    //For para obter os pontos
    for(int i=0; i<2; i++){
        printf("Digite a cordenada x do %i ponto\n", i+1);
        scanf("%f", &x[i]);
        printf("Agora digite a coordenada y do %i ponto\n", i+1);
        scanf("%f", &y[i]);
    }
    //Expressão que calcula a distancia
    calculo_da_distancia = sqrt((x[1]-x[0])*(x[1]-x[0])+(y[1]-y[0])*(y[1]-y[0]));
    //Apresenta a distancia calculada
    printf("A distancia entre os pontos apresentados e: %f\n", calculo_da_distancia);
}

