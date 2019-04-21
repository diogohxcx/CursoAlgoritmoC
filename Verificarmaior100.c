/* Seção 6 Exercicio 1
 *Verificando se o número digitado é maior que 100
 *se for menor o resultado vai ser 0, se maior vai mostrar
 *o numero digitado*/


#include <stdio.h>
int main(){
    //Variaveis
    int n;
    //Entrada de valor
    printf("Digite um número: ");
    scanf("%d", &n);
    if (n > 100){
        printf("%d", n);
    }else{
        n = 0;
        printf("%d", n);
    }
}

/*Sáida do Programa.
 * 
 * Digite um número: 155
 *155
 *EXECUTAR SUCCESSFUL 
 * 
 */