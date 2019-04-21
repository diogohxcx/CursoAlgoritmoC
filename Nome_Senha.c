/*
 * Seção 7 - Exercicio 5
 * 
 * Solicite nome e senha de usuario, o usuario e a senha não podem ser 
 * iguais, e todos em caracteres
 *
 */

#include <stdio.h>
#include <string.h>

int main (){
    //Variaveis
    char nome[100], senha[100];
    
    //Entradas
    printf("Informe o nome: ");
    gets(nome);
    printf("Informe a senha: ");
    gets(senha);
    
    //Processamento
    while(!strcmp(nome, senha)){
        printf("Nome de usuário e senha devem ser diferentes.\n");
        printf("Informe o nome: ");
        gets(nome);
        printf("Informe a senha: ");
        gets(senha);
    }
}

/*
 * Saída do programa
 * 
 * Informe o nome: diogo
 * Informe a senha: diogo
 * Nome de usuário e senha devem ser diferentes.
 * Informe o nome: diogo
 * Informe a senha: aline
 */