/*
 * Seção 06 Exercicio 06
 * 
 * Elabore um algoritmo que leia as variaveis 'c' e 'n',
 * respectivamente código e número de horas trabalhadas
 * de um operário. Calcule o salário sabendo-se que ele ganha
 * R$10,00 por hora. Quando o número de horas execeder a 50
 * calcule o execesso de pagamento armazenando-o na variavel
 * 'e'. Caso contrário zerar tal variável.
 * A hora excedente de trabalho vale R$ 20,00. No final do 
 * processamento imprimir o salário total e o salário excedente!
 * 
 */


#include <stdio.h>
int main(){
    //Variaveis.
    int c;
    float n, salario, e, valor_hora = 10.00;
    //Entrada de valores.
    printf("Informe seu código: ");
    scanf("%d", &c);
    printf("Informe a quantidade de horas: ");
    scanf("%f", &n);
    //Processamento
    if (n > 50){
        e = (n - 50) * 20.00;
        salario = (50 * valor_hora);
        //Saída
        printf("Salário Total: %.2f\n", salario);
        printf("Salário Extra: %.2f\n", e);
    }
    else{
        e = 0;
        salario = (n * valor_hora);
        //Saída
        printf("Salário Total: %.2f\n", salario);
        printf("Salário Extra: %.2f\n", e);
    }
    
}

/*
 * Sáida do programa
 * ------------------
 * Com hora extra
 * Informe seu código: 1
 *Informe a quantidade de horas: 60
 *Salário Total: 500.00
 *Salário Extra: 200.00
 * ------------------
 * Sem hora extra
 * Informe seu código: 1
 *Informe a quantidade de horas: 40
 *Salário Total: 400.00
 *Salário Extra: 0.00

 */