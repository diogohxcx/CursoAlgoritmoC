/*
 * Seção 8 - Exercicio 3
 * 
 * Faça um programa que carregue um vetor com dez números inteiros,
 * em seguida, mostre a ordem inversa de todos numeros digitados.
 * 
 */

#include<stdio.h>
int main (){
    //Variaveis
    int vetor[10];
    //Entradas
    for (int i = 0; i < 10; i++){
        printf("Digite o %dº valor: ", i);
        scanf("%d", &vetor[i]);    
    }
    for (int i = 9; i >= 0; i --){
        printf("A posição %d recebeu o valor: %d \n",i, vetor[i]);
    }
}

/*Saída do programa
 * 
 * Digite o 0º valor: 1
Digite o 1º valor: 2
Digite o 2º valor: 3
Digite o 3º valor: 4
Digite o 4º valor: 5
Digite o 5º valor: 6
Digite o 6º valor: 7
Digite o 7º valor: 8
Digite o 8º valor: 9
Digite o 9º valor: 10
A posição 9 recebeu o valor: 10 
A posição 8 recebeu o valor: 9 
A posição 7 recebeu o valor: 8 
A posição 6 recebeu o valor: 7 
A posição 5 recebeu o valor: 6 
A posição 4 recebeu o valor: 5 
A posição 3 recebeu o valor: 4 
A posição 2 recebeu o valor: 3 
A posição 1 recebeu o valor: 2 
A posição 0 recebeu o valor: 1 

EXECUTAR SUCCESSFUL*/