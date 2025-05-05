#include <stdio.h>

int main() {
    // Carta 1
    char estado1 = 'A';
    char codigo1[] = "A01";
    char nomeCidade1[] = "Progra";
    int populacao1 = 10000;
    float area1 = 30000.0;
    float pib1 = 1.65; // PIB em bilhões
    int pontosTuristicos1 = 8;
    
    // Carta 2
    char estado2 = 'B';
    char codigo2[] = "B02";
    char nomeCidade2[] = "Mação";
    int populacao2 = 20000;
    float area2 = 50000.0;
    float pib2 = 2.45; // PIB em bilhões
    int pontosTuristicos2 = 5;

    // Cálculos para a carta 1
    float densidadePopulacional1 = populacao1 / area1;
    float pibPerCapita1 = pib1 * 1000000000 / populacao1;  // PIB em reais / população

    // Cálculos para a carta 2
    float densidadePopulacional2 = populacao2 / area2;
    float pibPerCapita2 = pib2 * 1000000000 / populacao2;  // PIB em reais / população

    // Exibição dos resultados para a carta 1
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f habitantes por km²\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f reais\n\n", pibPerCapita1);

    // Exibição dos resultados para a carta 2
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f habitantes por km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    return 0;
}