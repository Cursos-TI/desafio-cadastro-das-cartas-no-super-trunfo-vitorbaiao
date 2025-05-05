#include <stdio.h>

int main() {
    // Carta 1 - Progra
    char estado1 = 'A';
    char codigo1[]= "A01";
    char nomeCidade1[] = "Progra";
    int populacao1 = 10000;
    float area1 = 30000.0;
    float pib1 = 1.65;
    int pontosTuristicos1 = 8;

    // Carta 2 - Mação
    char estado2 = 'B';
    char codigo2[] = "B02";
    char nomeCidade2[] = "Mação";
    int populacao2 = 20000;
    float area2 = 50000.0;
    float pib2 = 2.45;
    int pontosTuristicos2 = 5;

    // Exibição da Carta 1
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    // Exibição da Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;
}