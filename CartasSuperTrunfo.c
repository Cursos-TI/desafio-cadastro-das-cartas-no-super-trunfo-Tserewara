#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Álvaro Junqueira

int main() {
    // Variáveis

    char estado1[2], estado2[2];
    char codigoCarta1[4], codigoCarta2[4];
    char nomeCidade1[30], nomeCidade2[30];

    int populacaoCidade1, populacaoCidade2;
    float areaCidade1, areaCidade2;
    float pibCidade1, pibCidade2;
    int numeroPontosTuristicosCidade1, numeroPontosTuristicosCidade2;

    // Cadastro de cartas
    printf("CADASTRO DE CARTAS\n");
    printf("==================\n");

    // Carta 1
    printf("Insira os dados da carta 1:\n");

    printf("Estado: ");
    scanf("%s", estado1);

    printf("Código da carta: ");
    scanf("%s", codigoCarta1);

    printf("Nome da cidade: ");
    scanf("%[^\n]s", nomeCidade1);

    printf("População: ");
    scanf("%d", &populacaoCidade1);

    printf("Area: ");
    scanf("%f", &areaCidade1);

    printf("PIB (bilhões): ");
    scanf("%f", &pibCidade1);

    printf("Número de pontos túristicos: ");
    scanf("%d", &numeroPontosTuristicosCidade1);


    // Carta 2

    printf("==================\n");
    printf("Insira os dados da carta 2:\n");

    printf("Estado: ");
    scanf("%s", estado2);

    printf("Código da carta: ");
    scanf("%s", codigoCarta2);

    printf("Nome da cidade: ");
    scanf(" %[^\n]s", nomeCidade2);

    printf("População: ");
    scanf("%d", &populacaoCidade2);

    printf("Area: ");
    scanf("%f", &areaCidade2);

    printf("PIB (bilhões): ");
    scanf("%f", &pibCidade2);

    printf("Número de pontos túristicos: ");
    scanf("%d", &numeroPontosTuristicosCidade2);


    // Exibição dos valores

    printf("DADOS\n\n");

    // Carta 1

    printf("==================\n");
    printf("CARTA 1\n");

    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigoCarta1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacaoCidade1);
    printf("Área: %.2f km²\n", areaCidade1);
    printf("PIB: %.2f bilhões de reais\n", pibCidade1);
    printf("Número de Pontos Turísticos: %d\n", numeroPontosTuristicosCidade1);

    // Carta 2

    printf("==================\n");
    printf("CARTA 2\n");

    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigoCarta2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacaoCidade2);
    printf("Área: %.2f km²\n", areaCidade2);
    printf("PIB: %.2f bilhões de reais\n", pibCidade2);
    printf("Número de Pontos Turísticos: %d\n", numeroPontosTuristicosCidade2);

    return 0;
}
