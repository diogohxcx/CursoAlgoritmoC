/* Seção 3 - Exercicio 2
 * 
 * Faça um algoritmo para "calcular o estoque médio de uma peça"
 * sendo que:
 * 
 * estoque_medio = (quantidade_minima + quantidade_maxima)/2
 */


#include <stdio.h>
int main(){
    //Declaração das variaveis
    int quantidade_minima, quantidade_maxima;
    float estoque_medio;
    //Entrada de valores
    printf("Informe a quantidade minima da peça: ");
    scanf("%d", &quantidade_minima);
    printf("Informe a quantidade maxima da peça: ");
    scanf("%d", &quantidade_maxima);
    //Processamento
    estoque_medio = (quantidade_minima + quantidade_maxima)/2;
    //Saída
    printf("A quantidade média da peça é %.2f", estoque_medio);
}


/*Resultado Do Programa
*
*Informe a quantidade minima da peça: 5
*Informe a quantidade maxima da peça: 90
*A quantidade média da peça é 47.00
*/

