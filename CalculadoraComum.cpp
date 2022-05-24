#include "CalculadoraComum.h"
#include <stdio.h> //biblioteca
#include <stdlib.h> //biblioteca



void soma(){ 
    float valor1, valor2, result; 
    printf("\nDigite o 1 valor: "); 
    scanf ("%f", &valor1); r
    printf("Digite o 2 valor: "); 
    scanf ("%f", &valor2); t
    result = valor1 + valor2; 
    printf("\nResultado: %.2f\n\n ", result); 
    system ("pause"); 
    system("cls"); 
    menu(); 
}
void subtrai(){ 
    float valor1, valor2, result; 
    printf("\nDigite o 1 valor: ");
    scanf ("%f", &valor1); 
    printf("Digite o 2 valor: "); 
    scanf ("%f", &valor2); 
    result = valor1 - valor2; 
    printf("\nResultado: %.2f\n\n ", result); 
    system ("pause");
    system("cls"); 
    menu(); 
}
void divide(){ //funcao divide
    float valor1, valor2, result;
    printf("\nDigite o 1 valor: ");
    scanf ("%f", &valor1);
    printf("Digite o 2 valor: ");
    scanf ("%f", &valor2);
    result = valor1 / valor2;
    printf("\nResultado: %.2f\n\n ", result);
    system ("pause");
    system("cls");
    menu();
}
void multiplica(){ //funcao multiplica
    float valor1, valor2, result;
    printf("\nDigite o 1 valor: ");
    scanf ("%f", &valor1);
    printf("Digite o 2 valor: ");
    scanf ("%f", &valor2);
    result = valor1 * valor2;
    printf("\nResultado: %.2f\n\n ", result);
    system ("pause");
    system("cls");
    menu();
}
void menu(){ 
    int escolha; //variavel inteira

    printf("\t\tBem vindo a calculadora em C\n\n"); //imprime msg na tela \n = salta linha

    printf("Selecione uma operacao matematica:\n"); // msg na tela
    printf("\t1- Adicao\n");
    printf("\t2- Subtracao\n");
    printf("\t3- Divisao\n");
    printf("\t4- Multiplicacao\n");
    printf("\t5- Sair\n");
    printf("Operacao: "); //msg na tela
    scanf ("%d", &escolha); //armazena o int digitado em escolha

    switch (escolha){ //funcao de selecao de escolha do ,menu
        case 1: //caso digitado 1 execute isto:
            soma(); //funcao soma feita anteriomente acima
        break; //termina a funcao de soma

        case 2:
            subtrai();
        break;

        case 3:
            divide();
        break;

        case 4:
            multiplica();
            break;

        case 5: //caso selecionado 5 executa:
            system("exit"); // fechar o programa
            printf("\nFinalizando...\n\n"); //da uma msg na tela
        break; // termina a funcao 5 seleciojada

        default: // caso nao se digite nenhum do case disponoveis execute
            printf("\nComando invalido, tente novamente!\n\n"); //msg
            system ("pause"); //pausa
            system ("cls"); //limpa
            menu(); //volta pro menu inicial
            break; //termina funcao
    }
}

