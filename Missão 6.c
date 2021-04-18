#include <stdio.h>

int main()
{
    int opcao, IMC, numero, multi, multi2, resultado;
    float peso, altura;
    int divide1, divide2, resultadodivisao;
    
    printf("Seja bem vindo ao Multifunções\n");
    printf("Selecione a funcionalidade desejada\n");
    
    //Apresento ao usuário as funcionalidades
    
    printf("-------MENU-------\n");
    printf("1 - Informações\n");
    printf("2 - Calcular IMC\n");
    printf("3 - Par ou Impar\n");
    printf("4 - Multiplicação\n");
    printf("5 - Divisão\n");
    printf("6 - Sair\n");
    printf("------------------\n");
    scanf("%i", &opcao);
    
    switch (opcao) {
        case 1:
            //Na funcionalidade 1 apresentarei minhas informações 
            
            printf("Olá meu nome é Thallysson Ravel");
            printf(",sou aluno da UnB campus FGA.\n");
            printf("Estou no primeiro semestre de 2020,");
            printf("minha matrícula é 20/0027981.\n");
            
            break;
            
        case 2:
        
            /*Na funcionalidade 2 o programa irá calcular o IMC do usuário
            com os dados fornecidos. */
            
            printf("Digite o seu peso!\n");
            scanf("%g", &peso);
            printf("Ok, agora digite sua altura!\n");
            scanf("%g", &altura);
            
            IMC = peso/(altura*altura);
            
            if (IMC <= 16){
				printf("Magreza grave! Procure orientação médica\n");
				printf("O seu IMC é: %i",  IMC);
				
			}else if (IMC >= 16 || IMC < 17){
				printf("Magreza moderada! Procure orientaçâo médica\n");
				printf("O seu IMC é: %i",  IMC);
				
			}else if (IMC >= 17 || IMC < 18.5){
				printf("Magreza leve! Procure orientação médica\n");
				printf("O seu IMC é: %i",  IMC);
				
			}else if (IMC >= 18.5 || IMC < 25){
		        printf("Saudável! Parábens, mantenha o seu peso!\n");
				printf("O seu IMC é: %i",  IMC);
				
			}else if (IMC >= 25  || IMC  < 30){
				printf("Sobrepeso! Procure orientação médica\n");
				printf("O seu IMC é: %i",  IMC);
				
			}else if (IMC >= 30 || IMC < 35){
	            printf("Obsidade Grau 1! Procure orientação médica\n");
	            printf("O seu IMC é: %i",  IMC);
	            
			}else if (IMC >= 35 || IMC < 40){
				printf("Obsidade Grau 2 (Severa)! Procure orientação médica\n");
				printf("O seu IMC é: %i",  IMC);
				
			}else if (IMC >= 40 ){
				printf("Obsidade Grau 3 (Morbida)! Procure orientação médica\n");
				printf("O seu IMC é: %i",  IMC);
			}
            break;
            
        case 3:
            /*Na funcionalidade 3 será apresentado ao usuário
            se o número digitado é ímpar ou par*/
            
            printf("Esta com dúvida em saber se é par ou ímpar?");
            printf("Digite o número!");
            scanf("%i", &numero);
            
            if(numero % 2 == 1){
                printf("%i", numero);
                printf(" É ímpar");
            }else if (numero % 2 == 0){
                printf("%i", numero);
                printf(" É par");
            }
            break;
            
        case 4:
            /*Na funcionalidade 4 haverá a multiplicação de dois números
            fornecidos pelo usuário.*/
            
            printf("Partiu multiplicar? Digite o primeiro número!");
            scanf("%i", multi);
            printf("Agora digite o segundo número!");
            scanf("%i", multi2);
            
            resultado = multi * multi2;
            
            printf("O resultado é: %i", resultado);
            break;
            
        case 5:
             /*Na funcionalidade 5 haverá a divisão de dois números
            fornecidos pelo usuário.*/
            
            printf("Partiu dividir? Digite o primeiro número!");
            scanf("%i", divide1);
            if(divide1 == 0){
                printf("Número Inválido");
            }else{
                printf("Agora digite o segundo número!");
                scanf("%i", divide2);
                if(divide2 == 0){
                    printf("Número Inválido"); 
                }else{
                    resultadodivisao = divide1/divide2;
                    printf("O resultado é: %i", resultadodivisao);
                }
            }
            break;
            
        case 6:
            //Na funcionalidade 6 o usuário encerra o programa
            
            printf("Obrigado e até logo!");
            
        break;
    }
    
    return 0;
}

