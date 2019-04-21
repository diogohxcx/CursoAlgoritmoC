/*
 * Seção 6 - Exercicio 7
 * \
 * Desenvolva um algoritmo que:
 * A) Leia 4 (quatro) números:
 * B) Calcule o quadrado de cada um:
 * C) Se o valor resultante do quadrado do terceiro for >= 1000,
 * imprima-o e finalize
 * D) Caso contrário, imprima os valores lidos e seus
 * respctivos quadrados
 * 
 */

//include para chamaro o stdio que é o satander IO do C
#include <stdio.h>
//Iniciando o main
int main (){
    //Iniciando as variaveis 
    int n1, n2, n3, n4, q1, q2, q3, q4;
    //Receber os valores
    printf("Informe o primeiro número: ");
    scanf("%d", &n1);
    printf("Informe o segundo número: ");
    scanf("%d", &n2);
    printf("Informe o terceiro número:  ");
    scanf("%d", &n3);
    printf("Informe o quarto número: ");
    scanf("%d", &n4);
    //Processamento
    q1 = n1 * n1;
    q2 = n2 * n2;
    q3 = n3 * n3;
    q4 = n4 * n4;
    if (q3 >= 1000){
        printf("%d é maior que 1000", q3);
    }else{
        printf("O quadrado de %d é %d\n", n1, q1);
        printf("O quadrado de %d é %d\n", n2, q2);
        printf("O quadrado de %d é %d\n", n3, q3);
        printf("O quadrado de %d é %d\n", n4, q4);
    }
           
}

/*
 * Informe o terceiro número:  1
 * Informe o quarto número: 2
 * O quadrado de 2 é 4
 * O quadrado de 5 é 25
 * O quadrado de 1 é 1
 * O quadrado de 2 é 4
 *
 * EXECUTAR SUCCESSFUL
 * 
 */