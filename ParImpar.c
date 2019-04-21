/* Seção 6 Exercicio 3
 * 
 * Ler um número e verificar se ele é par ou ímpar. quando for 
 * par armazenar esse valor em 'p' e quanfo for impar armazena-lo em
 * 'i' no final do processamento.
 *
 */

#include <stdio.h>
int main(){
    //Declaração de variaveis 
    int num, p, i;
    //Recebendo valores
    printf("Digite um número: ");
    scanf("%d", &num);
    //Processamento
    if (num % 2 == 0){
        p = num;
        //Saída
        printf("O número %d é par!", num);
    }else{
        i = num;
        //Saída
        printf("O número %d é ímpar!", num);
    }
}

/*Sáida do programa
 
 * VALOR PAR
 * ---------------
 * Digite um número: 2
 *O número 2 é par!
 *EXECUTAR SUCCESSFUL
 
 * VALOR IMPAR
 * ---------------
 * Digite um número: 5
 *O número 5 é ímpar!
 *EXECUTAR SUCCESSFUL 
 */
