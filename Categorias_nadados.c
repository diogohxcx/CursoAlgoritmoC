/*
 * Seção 06 - Exercicio 10
 * 
 * Elabore um algoritmo que dada a idade de um nadados classifique-o
 * em uma das seguintes caegorias:
 * 
 * Infantil-a = 5 a 7 anos
 * Infantil-b = 8 a 11 anos
 * Juvenil-a = 12  a 13 anos
 * Juvenil-b = 14 a 17 anos
 * Adultos = Maiores de 18 anos
 * 
 */

#include <stdio.h>

int main (){
    int idade;
    printf("Informe a idade: ");
    scanf("%d", &idade);
    if (idade >= 5 && idade <= 7){
        printf("Infantil - A");
    }else if(idade >= 8 && idade <= 11){
        printf("Infatil - B");
    }else if (idade >= 12 && idade <= 13){
        printf("Juvenil - A");
    }else if ( idade >= 14 && idade <= 17){
        printf("Juvenil - B");
    }else if(idade > 18){
        printf("Adulto");
    }
}

/*
 *Saída do programa 
 *
 * Informe a idade: 10
 * Infatil - B
 * EXECUTAR SUCCESSFUL
 * 
 * 
 */