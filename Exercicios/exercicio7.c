#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void calcular_distancia();

int main(void){
    printf("Seja muito bem vindo(a), partiu calcular distancias?\n");
    calcular_distancia();
}

void calcular_distancia(){
    float x[1], y[1], calculo_da_distancia;
    for(int i=0; i<2; i++){
        printf("Digite a cordenada x do %i ponto\n", i+1);
        scanf("%f", &x[i]);
        printf("Agora digite a coordenada y do %i ponto\n", i+1);
        scanf("%f", &y[i]);
    }
    //Expressão que calcula a distância
    calculo_da_distancia = sqrt((x[1]-x[0])*(x[1]-x[0])+(y[1]-y[0])*(y[1]-y[0]));
    printf("A distancia entre os pontos apresentados e: %f\n", calculo_da_distancia);
}
