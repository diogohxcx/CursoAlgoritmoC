/*
 * Seção 6 - Exercicio 8
 * 
 * Faça um algoritmo que leia um número inteiro e mostre uma 
 * mensagem indicando se este número é par ou ímpar, e se
 * é positivo ou negativo
 * 
 */

#include <stdio.h>
int main (){
    int n1;
    printf("Digite um número: ");
    scanf("%d", &n1);
    if (n1 % 2 == 0) {
        if (n1 > 0){
            printf("O número %d é positivo e par. ", n1);
        }else{
            printf("O número %d é negativo e par.", n1);
        }
    }else{ 
        if (n1 > 0){
            printf("O número %d é positivo e ímpar.", n1);
        }else{
            printf("O número %d é negativo e ímpar", n1);        
    }
}
}