/*
 * Seção 7 - Exercicio 01
 * 
 * Faça um algoritmo que determine o maior entre N números.
 * A condição de parada é a entrada de um valor 0, ou seja, o algortmo
 * deve ficar calculando o maior até que a entrada seja
 * igual a zedo
 * 
 */

#include <stdio.h>
int main (){
    //Variaveis 
    int n, maior=0;
    //Receber valor
    printf("Digite um número: ");
    scanf("%d", &n);
    //Processamento em laço
    while(n != 0){
        if(n > maior){
            maior = n;
        }
        //Receber valor dentro do laço
        printf("Dogote um número: ");
        scanf("%d", &n);    
    }
    printf("O maior número digitado foi %d", maior);
}

/*
 * Saída do Programa
 * 
 * Digite um número: 111
 * Dogote um número: 2
 * Dogote um número: 1
 * Dogote um número: 0
 * O maior número digitado foi 111
 * EXECUTAR SUCCESSFUL 
 */
