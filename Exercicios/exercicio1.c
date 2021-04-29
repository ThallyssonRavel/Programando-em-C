//Bibliotecas Utilizadas
#include <stdio.h>
#include <stdlib.h>

//Assinatura dos procedimentos
void menu();
void divisao_de_premio();
void conferir_salario();
void somando_numeros();
void escolha_funcionalidade(int escolha);

//Função Principal
int main(void){
    int escolha;
    escolha_funcionalidade(escolha);
}

//Procedimento menu (Vai apresentar o menu sem retornar nenhum valor)
void menu(){
    //funcionalidades
    printf("------------------ Menu ------------------\n");
    printf("1 - Divisao de premio\n");
    printf("2 - Conferir Salario\n");
    printf("3 - Realizar soma de antecessor e sucessor\n");
    printf("4 - Sair\n");
    printf("--------------------------------------------\n");
}

//Procedimento que inclui o switch, que irá realizar as funcionalidades dos codigos.
void escolha_funcionalidade(int escolha){

    int volta, resultado_geral;
    /*Esta dentro de um ciclo de repetição devido ao caso de o usuario digitar uma alternativa que não 
    ha no menu*/
    do{
        printf("\n");
        
        menu();
        //Aqui ler a alternativa que o usuario desejou do menu
        scanf("%i", &escolha);

        /*Escolha com cada case possuindo um procedimento que executara cada funcionalidade do menu*/
        switch (escolha){
            case 1:
                //System utilizado para ficar mais organizado
                system("cls");
                divisao_de_premio();
                printf("\n");
                break;
            case 2:
                //System utilizado para ficar mais organizado
                system("cls");
                conferir_salario();
                printf("\n");
                break;
            case 3:
                //System utilizado para ficar mais organizado
                system("cls");
                somando_numeros();
                printf("\n");
                break;
            case 4:
                printf("Obrigado e ate mais!\n");
                printf("\n");
                break;
            default:
                //System utilizado para ficar mais organizado
                system("cls");
                printf("Opçao nao encontrada! Digite novamente\n");
                scanf("%i", &volta);
                printf("\n");
                escolha = volta;
            break;
        }   
    }while(escolha < 4 || escolha != 4);
    
}

//Procedimento que realiza a funcionalidade 1 do menu (A divisão de um prêmio qualquer)
void divisao_de_premio(){

    /*Variaveis ultizadas, sendo alguns vetores por existir a possibilidade de mais de uma
    pessoa ganha o prêmio em questão*/
    int premio, resultado_premio[100], porcentagem_premio[100], quantidade_pessoas;

    printf("Bem vindo, iremos realizar a divisao do premio!\n");
    printf("Primeiro, digite o valor do premio!\n");
    scanf("%i", &premio);

    printf("Agora digite quantas pessoas iram ganhar o premio\n");
    scanf("%i", &quantidade_pessoas);

    //For utilizado para saber a porcentagem de cada ganhador do prêmio
    for(int i=0; i<quantidade_pessoas; i++){

        printf("Digite a porcentagem do premio do: %i colocado\n", i+1);
        scanf("%i", &porcentagem_premio[i]);

        /*A variavel resultado_premio, que é um vetor, recebe o valor de cada ganhador de acordo
        com a porcentagem definida pelo usuario*/
        resultado_premio[i] = (premio * porcentagem_premio[i])/100;
    }

    //For ultilizado para apresentar o resultado de cada ganhador do prêmio
    for(int i=0; i<quantidade_pessoas; i++){
        printf("O resultado de cada um e: %i\n", resultado_premio[i]);
    }

}

/*Procedimento que confere o salario do usuario e mostra com os impostos 
descontadosm ou seja o valor liquido.*/
void conferir_salario(){

    /*Variaveis utilizdadas sendo uma vetor devido a possibilidade de existir mais de um imposto.
    Todas as variaveis que envolvem numero optei por deixar em int, por uma melhor vizualização do 
    resultado, mas pode ser alterado sem nenhum problema*/
    int salario, quantidade_impostos, por_dia, valor_imposto[100], resultado_salario;
    int somatorio_porcentagem = 0;
    int dias;
    char mes_dia;

    printf("Bem vindo!, iremos realizar o calculo do seu salario!\n");
    printf("Digite quanto ganha!\n");
    scanf("%i", &salario);

    /*Pega a informação para saber se ele ganha por mes ou por dia, apresentando resultados diferentes
    para as opções diferentes*/
    printf("Voce recebe por mes ou por dia?\n");
    setbuf(stdin, NULL);
    scanf("%c", &mes_dia);
    
    //Valida o tipo de caracter inserido na variavel anterior(mes_dia)
    do{
        /*Esta em um ciclo de repetição pois caso o usuario nâo digite corretamente
        ele ira pedir ate o usuario digitar corretamente*/
        if(mes_dia == 'm' || mes_dia == 'M'){

            //Caso o usuario ganhe por mes a conferencia sera por aqui
            printf("Quantos impostos sao descontados do seu salario?\n");
            scanf("%i", &quantidade_impostos);

            printf("\n");

            printf("Agora diga quantos porcento que paga de cada imposto!\n");
            printf("Lembrando que nao precisa digitar o simbolo da porcentagem \n");

            printf("\n");

            //For para obter os diferentes valores dos impostos, ou imposto.
            for(int i=0; i<quantidade_impostos; i++){
                printf("Digite o valor do imposto %i\n", i + 1);
                scanf("%i", &valor_imposto[i]);
                /*Aqui é somado a quantidade da porcentagem que é retirada do salario do
                usuario*/
                somatorio_porcentagem = somatorio_porcentagem + valor_imposto[i];
            }

            /*Aqui é calculado e atribuido a variavel resultado_salario
            o salario do usuario ja com os devidos descontos*/
            resultado_salario = salario - ((salario/100) * somatorio_porcentagem);

            //Aqui é apresentado o valor do usuario ja com os descontos.
            printf("Seu salario por mes, ja descontado os impostos fica: %i\n", resultado_salario);

        }else{

            //Caso o usuario ganhe por dia, a conferencia sera feita por aqui.
            if(mes_dia == 'D' || mes_dia == 'd'){

                printf("Quantos dias voce trabalhou?\n");
                scanf("%i", &dias);

                //Faz a divisão do salario pela quantidade de dias trabalhados, para obter o valor do dia
                por_dia = salario/dias;

                printf("Agora diga quantos porcento que paga de cada imposto!\n");
                printf("Lembrando que nao precisa digitar o simbolo % \n");

                //For utilizado para obter os valores dos impostos
                for(int i=0; i<quantidade_impostos; i++){
                    scanf("%f", &valor_imposto[i]);

                    //Aqui é feito a somatoria das porcentagens 
                    somatorio_porcentagem = somatorio_porcentagem + valor_imposto[i];
                }

                //Aqui é calculado o resultado final
                resultado_salario = (salario/100) * somatorio_porcentagem;

                //Aqui é apresentado quanto é o salario com os descontos e quanto ele ganha por dia
                printf("Seu salario por mes, ja discontado os impostos fica: %f \n", resultado_salario);
                printf("Com voce ganhando %f por dia\n", por_dia);

            }else{
                //Caso o usuario digite alguma opção que não ha, ira executar isso aqui
                printf("Erro! Digite novamente");
                setbuf(stdin, NULL);
                scanf("%c", &mes_dia);
            }
        }

        //Enquanto mes_dia for diferente de m M D d ficará se repetindo
    }while(mes_dia != 'm' && mes_dia != 'M' && mes_dia != 'D' && mes_dia != 'd');
}

//Procedimento que realiza a soma do sucessor e antecessor de um numero inteiro
void somando_numeros(){
    //Um dos mais simples
    int numero_inteiro, resultado_soma;

    printf("Bem vindo!, iremos realizar a soma de numeros, digite um numero inteiro!\n");
    scanf("%i", &numero_inteiro);

    //Realiza a soma entre o sucessor e antecessor do numero inteiro
    resultado_soma = (numero_inteiro + 1) + (numero_inteiro - 1);

    //Apresenta para o usuario essa soma
    printf("O resultado da soma dos numeros, fica: %i\n", resultado_soma);
}