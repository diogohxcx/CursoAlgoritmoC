/*
 * Seção 8 - Exercicio 1
 * 
 * Faça um algoritmo que carregue um vetor de 5 elementos inteiros
 * e em seguida armazene em um vetor apenas os números pares maiores
 * que 0. No final deve mostrar os elementos do vetor na tela.
 * 
 */

#include<stdio.h>
int main (){
    //Variaveis
    int vetor[5], pares[5], contp = 0;
    //Entrada via for (loop)
    for (int i = 0; i < 5; i++){
        printf("Informe um valor para o vetor: ");
        scanf("%d", &vetor[i]);
        if (vetor[i] % 2 == 0){
            if (vetor [i] > 0){
                pares[contp] = vetor[i];
                contp = contp + 1;
            }
        }
    }
    for(int i = 0; i < contp; i++){
        printf("%d\n", pares[i]);
    }
}