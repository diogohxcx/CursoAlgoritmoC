/*
 * Seção 7 - Exercicio 06
 * 
 * Desenvolva um gerador de tabuada, capaz de gerar a tabuada
 * de qualquer número inteiro entre 1 a 10. O usuário deve informar
 * de qual numero ele deseja ver a tabuada. A saída deve ser conforme
 * o exemplo abaixo:
 * 
 */
#include <stdio.h>
int main (){
    //Variaveis
    int numero;
    //Entradas
    printf("***Vamos gerar uma tabuada***\n");
    printf("Informe um número entre 1 e 10: ");
    scanf("%d", &numero);
    //Processamento
    while (numero < 1 || numero > 10){
        printf("ERRO: Digite um número entre 1 e 10: ");
        scanf("%d",&numero);   
    }
    for (int i = 1; i <= 10; i ++){
        printf("%d X %d = %d\n", numero, i, (numero * i));
    }
}

/*
 * Saída do Programa
 * 
 * ***Vamos gerar uma tabuada***
 * Informe um número entre 1 e 10: 11
 * ERRO: Digite um número entre 1 e 10: 5
 * 5 X 1 = 5
 * 5 X 2 = 10
 * 5 X 3 = 15
 * 5 X 4 = 20
 * 5 X 5 = 25
 * 5 X 6 = 30
 * 5 X 7 = 35
 * 5 X 8 = 40
 * 5 X 9 = 45
 * 5 X 10 = 50
 *
 * EXECUTAR SUCCESSFUL 
 */