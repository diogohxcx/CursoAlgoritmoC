/*Seção 6 - Exercicio 4
 * 
 * Tendo como dados de entraada a altura e o sexo de uma pessoa, construa
 * um algoritmo que calcule seu peso ideal, utilizando as seguintes fórmulas:
 * Para homens: (72.7 * altura) - 58
 * para mulheres: (62.1* altura) - 44.7
 * 
 */

#include <stdio.h>
#include <ctype.h> //Está biblioteca traz recursos para verificar se o texto
//Maisculo ou minusculo, entre outras funções.

int main(){
    //Declarando variaveis
    float peso, altura;
    char sexo;
    //Receber entradas de valor
    printf("Informe sua altura: ");
    scanf("%f", &altura);
    gets(stdin);//Este comando serve para corrigir um bug do C que não solicitava
    //a próxima entrada.
    printf("informe o sexo m/f: ");
    scanf("%c", &sexo);
    //Processamento
    if (tolower(sexo) == 'm'){ //Esta linha verifica o caracter recebido 
        //jogando ele para minusculo.
        peso = (72.7 * altura) - 58;
        printf("Seu peso ideal é %.2f", peso);    
    }
    if (tolower(sexo) == 'f'){ // Mesma coisa usando o tolower para verificar
        //o caracter recebido em Miniscula
        peso = (62.1 * altura) - 44.7;
        printf("Seu peso ideal é %.2f", peso);
    }
    if (tolower(sexo) != 'm' && tolower(sexo) != 'f'){
    // && igual a E, se sexo diferente de m e diferente de f..faz a linha a 
    // baixo
    printf("Sexo não reconhecido. \n");
}   
}

/*
 * SAIDAS 
 * primeiro em masculino
 * -----------------------
 * Informe sua altura: 1.85
 * informe o sexo m/f: m
 * Seu peso ideal é 76.50
 * EXECUTAR SUCCESSFUL 
 * -----------------------
 * Segundo em feminino
 * -----------------------
 * Informe sua altura: 1.85
 * informe o sexo m/f: f
 * Seu peso ideal é 70.19
 * EXECUTAR SUCCESSFUL
 * -----------------------
 * terceiro letra errada
 * -----------------------
 * Informe sua altura: 1.85
 * informe o sexo m/f: u
 * Sexo não reconhecido. 
 *
 * EXECUTAR SUCCESSFUL
 * 
 */