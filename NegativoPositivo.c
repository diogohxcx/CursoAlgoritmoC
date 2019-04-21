/*Exercicio 2 Seção 6
 * 
 *Elabore um algoritmo que leia um número. Se positivo armazene-o 'a',
 *se for negativo, em 'b'. No final mostrar o resultado 
 */

#include <stdio.h>
int main(){
    //Declaração de Variaveis.
    int num, a, b;
    //Recebendo valores.
    printf("Digite um número: ");
    scanf("%d", &num);
    //Processamento
    if (num > 0){
        a = num;
        printf("Valor Positivo\n%d", a);
    }else{
        b = num;
        printf("Valor Negativo\n%d", b);
    }
    
}

/*Sáida do programa
 * 
 * VALOR POSITIVO
 * ----------------
 *Digite um número: 5
 *Valor Positivo
 *5
 *EXECUTAR SUCCESSFUL
 *  
 * VALOR NEGATIVO
 * ----------------
 * Digite um número: -5
 *Valor Negativo
 *-5
 *EXECUTAR SUCCESSFUL 
 */