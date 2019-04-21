/*
 * Toda vez que joao traz um peso de peixes maior que 
 * o estabelicido pelo regulamento de pesca do estado de são paulo
 * (50 quilos) deve pagar uma multa de R$ 4, 00 por quilo
 * execedente.
 * João precisa que você faça um algoritmo que leia a variavel
 * 'p'(peso de peixes) e verifique se há execesso. se houver,
 * gravar na variavel 'e' (excesso) e na variavel 'm' o valor da 
 * multa que João deverá pagar. Caso contrario tais variaveis
 * com o conteudo zero.
 * 
 */

#include <stdio.h>
int main(){
    //Variaveis
    float p, e, m;
    //Receber os valores
    printf("Informe o peso total dos peixes: ");
    scanf("%f", &p);
    //Processando
    if (p > 50){
        e = p - 50;
        m = e * 4.00;
        printf("Você excedeu em %.2f, e devera pagar %.2f.", e,m);
    }
    else{
        e = 0;
        m = 0;
        printf("Você não excedeu 50 kilos, não tem multa.");        
    }
}

/*
 * Sáida do programa
 * ----------------------
 * Com multa
 * Informe o peso total dos peixes: 60
 * Você excedeu em 10.00, e devera pagar 40.00.
 * EXECUTAR SUCCESSFUL
 * ----------------------
 * Sem multa
 * Informe o peso total dos peixes: 40
 * Você não excedeu 50 kilos, não tem multa.
 * EXECUTAR SUCCESSFUL
 *
 */