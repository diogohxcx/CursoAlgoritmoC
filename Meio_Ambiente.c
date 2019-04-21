/*
 * Seção 6 - Exercicio 09
 * 
 */

#include <stdio.h>
int main (){
    float indice;
    printf("Informe o indice de poluição: ");
    scanf("%f", &indice);
    if (indice >= 0.3 && indice < 0.4){
        printf("Atenção: Industrias do 1º grupo, suspender atividades ");    
    }else if(indice >= 0.4 && indice < 0.5){
        printf("Atenção: Industrias do 1º e 2º grupo, suspender atividades ");
    }else if(indice >= 0.5){
        printf("Atenção: Todas as industrias, suspender atividades ");
    }
    
}

/*
 * Sáida do programa
 * 
 * Informe o indice de poluição: 0.4
 * Atenção: Industrias do 1º e 2º grupo, suspender atividades 
 * 
 *EXECUTAR SUCCESSFUL 
 * 
 * 
 */