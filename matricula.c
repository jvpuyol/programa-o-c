#include <stdio.h>

int main(){
    int idade, matricula;
    float altura;
    char nome[30];

    printf("Digite sua idade: \n");
    scanf("%d", &idade);

    printf("Digite sua matricula: \n");
    scanf("%d", &matricula);

    printf("Digite sua altura: \n");
    scanf("%f", &altura);
    
    printf("Digite seu nome: \n");
    scanf("%s", &nome);

    printf("Nome do Aluno: %s - Matrícula: %d \n", nome, matricula);
    printf("Altura: %.2f - idade: %d", idade, altura);

    return 0;


