#include <stdio.h>
#include <string.h> // Para usar strcspn e fgets

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Teste Álvaro Junqueira

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

    // Limpa o buffer para evitar problemas com fgets
    getchar();

    printf("Nome da cidade: ");
    fgets(nomeCidade1, sizeof(nomeCidade1), stdin); // Usa fgets para ler a string com espaços
    // Remove o caractere de nova linha que fgets pode deixar
    // sizeof(nomeCidade1) é usado para garantir que não ultrapasse o tamanho do buffer que é determinado
    // pelo tamanho do array nomeCidade1
    
    nomeCidade1[strcspn(nomeCidade1, "\n")] = 0;

    printf("População: ");
    scanf("%d", &populacaoCidade1);

    printf("Área: ");
    scanf("%f", &areaCidade1);

    printf("PIB: ");
    scanf("%f", &pibCidade1);

    printf("Número de pontos turísticos: ");
    scanf("%d", &numeroPontosTuristicosCidade1);

    // Carta 2
    printf("==================\n");
    printf("Insira os dados da carta 2:\n");

    printf("Estado: ");
    scanf("%s", estado2);

    printf("Código da carta: ");
    scanf("%s", codigoCarta2);

    // Como antes usamos scanf, precisamos limpar o buffer novamente para evitar problemas com fgets
    getchar();

    printf("Nome da cidade: ");
    fgets(nomeCidade2, sizeof(nomeCidade2), stdin);
    nomeCidade2[strcspn(nomeCidade2, "\n")] = 0;

    printf("População: ");
    scanf("%d", &populacaoCidade2);

    printf("Área: ");
    scanf("%f", &areaCidade2);

    printf("PIB: ");
    scanf("%f", &pibCidade2);

    printf("Número de pontos turísticos: ");
    scanf("%d", &numeroPontosTuristicosCidade2);

    // Exibição dos valores
    printf("\nDADOS\n");

    // Carta 1
    printf("==================\n");
    printf("CARTA 1\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigoCarta1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacaoCidade1);
    printf("Área: %.2f km²\n", areaCidade1);
    printf("PIB: %.2f reais\n", pibCidade1);
    printf("Número de Pontos Turísticos: %d\n", numeroPontosTuristicosCidade1);
    
    // Calcula a densidade populacional
    printf("Densidade populacional: %.2f habitantes/km²\n", (float)populacaoCidade1 / areaCidade1);

    // Calcula PIB per capita da carta 1
    printf("PIB per capita: %.2f reais\n", (pibCidade1  / populacaoCidade1));
    
    // Carta 2
    printf("==================\n");
    printf("CARTA 2\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigoCarta2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacaoCidade2);
    printf("Área: %.2f km²\n", areaCidade2);
    printf("PIB: %.2f reais\n", pibCidade2);
    printf("Número de Pontos Turísticos: %d\n", numeroPontosTuristicosCidade2);

    // Calcula a densidade populacional
    printf("Densidade populacional: %.2f habitantes/km²\n", (float)populacaoCidade2 / areaCidade2);

    // Calcula PIB per capita da carta 2
    printf("PIB per capita: %.2f reais\n", (pibCidade2  / populacaoCidade2));
    /*
    Comparação das cartas
    
    Nessa etapa, iremos comparar apenas um dos atributos das duas cartas, por exemplo, a população, e decidir
    qual carta é a "vencedora" com base nesse critério. O formato de saída será algo como:
    
    Comparação de cartas (Atributo: População):
    Carta 1 - São Paulo (SP): 12.300.000
    Carta 2 - Rio de Janeiro (RJ): 6.000.000
    Resultado: Carta 1 (São Paulo) venceu!
    */
    printf("==================\n");
    printf("COMPARAÇÃO DE CARTAS (Atributo: População):\n");
    printf("Carta 1 - %s (%s): %d\n", nomeCidade1, estado1, populacaoCidade1);
    printf("Carta 2 - %s (%s): %d\n", nomeCidade2, estado2, populacaoCidade2);
    if (populacaoCidade1 > populacaoCidade2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
    } else if (populacaoCidade1 < populacaoCidade2) {
        printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}
