#include <stdio.h>

int main() {
    // Carta 1 - Santa Luzia
    char estado1 = 'A';
    char codigo1[4] = "A01";
    char cidade1[30] = "Santa Luzia";
    int populacao1 = 220444;
    float area1 = 235.0;
    float pib1 = 3.20;  // em bilhões de reais
    int pontosTuristicos1 = 12;

    // Carta 2 - Sete Lagoas
    char estado2 = 'B';
    char codigo2[4] = "B02";
    char cidade2[30] = "Sete Lagoas";
    int populacao2 = 241835;
    float area2 = 537.0;
    float pib2 = 6.10;
    int pontosTuristicos2 = 18;

    // Carta 3 - Nova Lima
    char estado3 = 'C';
    char codigo3[4] = "C03";
    char cidade3[30] = "Nova Lima";
    int populacao3 = 95000;
    float area3 = 428.0;
    float pib3 = 9.50;
    int pontosTuristicos3 = 15;

    // Carta 4 - Belo Horizonte
    char estado4 = 'D';
    char codigo4[4] = "D04";
    char cidade4[30] = "Belo Horizonte";
    int populacao4 = 2500000;
    float area4 = 331.0;
    float pib4 = 92.00;
    int pontosTuristicos4 = 35;

    // Exibição das cartas
    printf("=== Carta 1 ===\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Pontos Turisticos: %d\n\n", pontosTuristicos1);

    printf("=== Carta 2 ===\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Pontos Turisticos: %d\n\n", pontosTuristicos2);

    printf("=== Carta 3 ===\n");
    printf("Estado: %c\n", estado3);
    printf("Codigo: %s\n", codigo3);
    printf("Cidade: %s\n", cidade3);
    printf("Populacao: %d\n", populacao3);
    printf("Area: %.2f km2\n", area3);
    printf("PIB: %.2f bilhoes de reais\n", pib3);
    printf("Pontos Turisticos: %d\n\n", pontosTuristicos3);

    printf("=== Carta 4 ===\n");
    printf("Estado: %c\n", estado4);
    printf("Codigo: %s\n", codigo4);
    printf("Cidade: %s\n", cidade4);
    printf("Populacao: %d\n", populacao4);
    printf("Area: %.2f km2\n", area4);
    printf("PIB: %.2f bilhoes de reais\n", pib4);
    printf("Pontos Turisticos: %d\n", pontosTuristicos4);

    return 0;
}
