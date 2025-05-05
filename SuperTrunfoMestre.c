#include <stdio.h>

// Função principal
int main() {
    // Declaração das variáveis
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char nomeCidade1[50], nomeCidade2[50];
    
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;

    // Leitura dos dados da Carta 1
    printf("Carta 1:\n");
    printf("Estado: ");
    scanf(" %c", &estado1);

    printf("Código da Carta: ");
    scanf("%s", codigo1);

    printf("Nome da Cidade: ");
    scanf("%s", nomeCidade1);

    printf("População: ");
    scanf("%lu", &populacao1);

    printf("Área (em km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões de R$): ");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Leitura dos dados da Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: ");
    scanf(" %c", &estado2);

    printf("Código da Carta: ");
    scanf("%s", codigo2);

    printf("Nome da Cidade: ");
    scanf("%s", nomeCidade2);

    printf("População: ");
    scanf("%lu", &populacao2);

    printf("Área (em km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões de R$): ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculo dos atributos derivados
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    float pibPerCapita1 = pib1 * 1000000000 / populacao1;
    float pibPerCapita2 = pib2 * 1000000000 / populacao2;

    // Cálculo do Super Poder
    float superPoder1 = (float)populacao1 + area1 + pib1 * 1000000000 + pontosTuristicos1 + pibPerCapita1 + (1 / densidade1);
    float superPoder2 = (float)populacao2 + area2 + pib2 * 1000000000 + pontosTuristicos2 + pibPerCapita2 + (1 / densidade2);

    // Comparações
    int venceuPopulacao = populacao1 > populacao2;
    int venceuArea = area1 > area2;
    int venceuPib = pib1 > pib2;
    int venceuPontosTuristicos = pontosTuristicos1 > pontosTuristicos2;
    int venceuDensidade = densidade1 < densidade2;  // menor vence!
    int venceuPibPerCapita = pibPerCapita1 > pibPerCapita2;
    int venceuSuperPoder = superPoder1 > superPoder2;

    // Resultados
    printf("\nComparação de Cartas:\n");
    printf("População: Carta 1 venceu (%d)\n", venceuPopulacao);
    printf("Área: Carta 1 venceu (%d)\n", venceuArea);
    printf("PIB: Carta 1 venceu (%d)\n", venceuPib);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", venceuPontosTuristicos);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", venceuDensidade);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", venceuPibPerCapita);
    printf("Super Poder: Carta 1 venceu (%d)\n", venceuSuperPoder);

    return 0;
}