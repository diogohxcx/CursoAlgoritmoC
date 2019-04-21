/*
 * Seção 7 - Exercicio 4
 * 
 * Verificar o maior, menor e a media de 10 números informados pelo
 * usuario.
 * 
 * 
 */

#include<stdio.h>
int main(){
    //Variaveis
    int valor, maior = 0, menor = 999, soma=0;
    float media;
    //Entradas
    for (int i = 0; i < 10; i ++){
        printf("Informe um valor: ");
        scanf("%d", &valor);
        //Processamento
        if (valor > 0){
            if (valor > maior){   
                maior = valor;
            }    
            if (valor < menor){
                menor = valor;
            }    
            soma = soma + valor;             
       }else{
            i --;
            }
        }
    media = soma / 10;
    printf("O maior número digitado foi %d\n", maior);
    printf("O menor número digitado foi %d\n", menor);
    printf("A media dos valores digitados foi %2.f\n", media);
    printf("A soma dos valores digitados foi %d", soma);
}

/*
 * Sáida do Programa
 * 
 * Informe um valor: -5
 * Informe um valor: 1
 * Informe um valor: 2
 * Informe um valor: 5
 * Informe um valor: 7
 * Informe um valor: -6
 * Informe um valor: 1
 * Informe um valor: 7
 * Informe um valor: 5
 * Informe um valor: 1
 * Informe um valor: 5
 * Informe um valor: 21
 * O maior número digitado foi 21
 * O menor número digitado foi 1
 * A media dos valores digitados foi  5
 * A soma dos valores digitados foi 55
 * EXECUTAR SUCCESSFUL
 * 
 */