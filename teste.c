#include <stdio.h>

int main(){

    char estado_1[2];
    char codigo_da_carta_1[4];
    char nome_da_cidade_1[100];
    int populacao_1;
    int p_turisticos_1;
    float area_1;
    float pib_1;

    char estado_2[2];
    char codigo_da_carta_2[4];
    char nome_da_cidade_2[100];
    int populacao_2;
    int p_turisticos_2;
    float area_2;
    float pib_2;


    printf("---CARTA 1---\n");
    printf("Estado (sigla): ");
    scanf("%s", &estado_1);

    printf("código da carta (Ex: A01): ");
    scanf("%s", &codigo_da_carta_1);

    printf("Nome da cidade: ");
    scanf("%s", &nome_da_cidade_1);
    
    printf("Populaçao: (Em Milhoes) ");
    scanf("%d", &populacao_1);

    printf("Pontos Turisticos: ");
    scanf("%d", &p_turisticos_1);

    printf("Área (Em Km): ");
    scanf("%f", &area_1);

    printf("PIb (Em milhoes): ");
    scanf("%f", &pib_1);



    printf("---CARTA 2---\n");
    printf("Estado (sigla): ");
    scanf("%s", &estado_2);

    printf("código da carta (Ex: B02): ");
    scanf("%s", &codigo_da_carta_2);

    printf("Nome da cidade: ");
    scanf("%s"; &nome_da_cidade_2);
    
    printf("Populaçao: (Em Milhoes) ");
    scanf("%d", &populacao_2);

    printf("Pontos Turisticos: ");
    scanf("%d", &p_turisticos_2);

    printf("Área (Em Km): ");
    scanf("%f", &area_2);

    printf("PIb (Em milhoes): ");
    scanf("%f", &pib_2); 

    // Exibição das cartas
    printf("\n=== Informações da Carta 1 ===\n");
    printf("Estado: %c\n", estado_1);
    printf("Código da Carta: %s\n", codigo_da_carta_1);
    printf("Nome da Cidade: %s\n", nome_da_cidade_1);
    printf("População: %d habitantes\n", populacao_1);
    printf("Área: %.2f km²\n", area_1);
    printf("PIB: R$ %.2f bilhões\n", pib_1);
    printf("Pontos Turísticos: %d\n", p_turisticos_1);

    printf("\n=== Informações da Carta 2 ===\n");
    printf("Estado: %c\n", estado_2);
    printf("Código da Carta: %s\n", codigo_da_carta_2);
    printf("Nome da Cidade: %s\n", nome_da_cidade_2);
    printf("População: %d habitantes\n", populacao_2);
    printf("Área: %.2f km²\n", area_2);
    printf("PIB: R$ %.2f bilhões\n", pib_2);
    printf("Pontos Turísticos: %d\n", p_turisticos_2);

    return 0;
}
