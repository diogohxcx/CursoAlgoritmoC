/*
 * Seção 7 - Exercicio 7
 * 
 * Contador de defeitos
 */

#include<stdio.h>
int main (){
    
    //Variaveis
    
    int cont_tot, cont1, cont2, cont3,cont4,identificacao, defeito;
    float p1, p2, p3, p4;
    
    //Entradas
    
    printf("Digite a idenficação[ou 0 pra parar]: ");
    scanf("%d", &identificacao);
    while (identificacao !=0 ){
        printf("1 - Necessita de esfera.\n");
        printf("2 - Necessita de limpeza.\n");
        printf("3 - Necessita de troca de cabo ou conector.\n");
        printf("4 - Quebrado ou inutilizado.\n");     
        printf("Informe códiogo do defeito: ");
        scanf("%d", &defeito);
        
        //Processamento
        
        cont_tot = cont_tot + 1;
        if (defeito == 1){
            cont1 = cont1 + 1;
        }
        if (defeito == 2){
            cont2 = cont2 + 1;    
        }
        if (defeito == 3){
            cont3 = cont3 + 1;
        }
        if (defeito == 4){
            cont4 = cont4 + 1;
        }
        
        //Entradas pelo loop ou laço
        
        printf("Digite a idenficação[ou 0 pra parar]: ");
        scanf("%d", &identificacao);
    }
    
    //Realizando o calculo da porcentagem
    
    p1 = ((float) cont1 / (float) cont_tot * 100);
    p2 = ((float) cont2 / (float) cont_tot * 100);
    p3 = ((float) cont3 / (float) cont_tot * 100);
    p4 = ((float) cont4 / (float) cont_tot * 100);
    
    //Saídas
    
    printf("Quantidade total de mouses: %d\n", cont_tot);
    printf("Situação  \t\t\t\tQuantidade \tPercentual\n");
    printf("1-Necessita de esfera\t\t\t%d \t\t%.2f%%\n", cont1, p1);
    printf("2-Necessita de limpeza \t\t%d \t\t%.2f%%\n", cont2, p2);
    printf("3-Necessita troca do cabo ou conector \t%d \t\t%.2f%%\n", cont3, p3);
    printf("4-Quebrado ou inutilizado \t\t%d \t\t%.2f%%\n", cont4, p4);
    
}