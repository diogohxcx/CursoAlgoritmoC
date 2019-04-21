/*
 * Seção 8 - Exercicio 2
 * 
 * Escreva um algortimo que leia dois vetores de 10 posições e faça a
 * soma dos elementos de mesmo indice, colocando o resultado em um tereceiro
 * vetor. Mostre o vetor resultante.
 * 
 */

#include<stdio.h>
int main(){
    //Variaveis
    
    int vetor1[10], vetor2[10], soma[10];
    
    //Entradas
    
    for (int i = 0; i < 10; i++){
        printf("Digite um valor para o vetor1: ");
        scanf("%d", &vetor1[i]);
        printf("Digite um valor para o vetor2: ");
        scanf("%d", &vetor2[i]);
        soma[i] = vetor1[i] + vetor2[i];
    }
    for (int i = 0; i < 10; i++){
        printf("primeira soma = %d\n", soma[i]);
    }
}

/*
 * Sáida do programa
 * 
 *  
 * Digite um valor para o vetor1: 1
Digite um valor para o vetor2: 2
Digite um valor para o vetor1: 4
Digite um valor para o vetor2: 52
Digite um valor para o vetor1: 2
Digite um valor para o vetor2: 1
Digite um valor para o vetor1: 5
Digite um valor para o vetor2: 4
Digite um valor para o vetor1: 8
Digite um valor para o vetor2: 7
Digite um valor para o vetor1: 5
Digite um valor para o vetor2: 1
Digite um valor para o vetor1: 2
Digite um valor para o vetor2: 3
Digite um valor para o vetor1: 5
Digite um valor para o vetor2: 1
Digite um valor para o vetor1: 2
Digite um valor para o vetor2: 2
Digite um valor para o vetor1: 14
Digite um valor para o vetor2: 4
primeira soma = 3
primeira soma = 56
primeira soma = 3
primeira soma = 9
primeira soma = 15
primeira soma = 6
primeira soma = 5
primeira soma = 6
primeira soma = 4
primeira soma = 18
*/