#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    // Declaração das variáveis da Carta 1
    char estado1[50];
    char codigo1[7];
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidadepopulacional1;
    float pibpercapita1;

    // Declaração das variáveis da Carta 2
    char estado2[50];
    char codigo2[7];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidadepopulacional2;
    float pibpercapita2;

    // Leitura dos dados da Carta 1
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Estado: ");
    scanf(" %49s[^\n]", estado1);

    printf("Código da Carta: ");
    scanf("%s", codigo1);

    printf("Nome da Cidade: ");
    scanf(" %s[^\n]", nomeCidade1); 

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área (em km²): ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    printf("Densidade Populacional: %.2f\n", densidadepopulacional1);
    printf("PIB Per Capita: %.2f\n", pibpercapita1);

    // cálculo vem depois da leitura
    densidadepopulacional1 = (area1 != 0) ? (populacao1 / area1) : 0; 
    pibpercapita1 = (populacao1 != 0) ? (pib1 / populacao1) : 0;

    // Mostra os cálculos logo após a leitura (opcional)

    // Leitura dos dados da Carta 2
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Estado: ");
    scanf(" %49s[^\n]", estado1);

    printf("Código da Carta: ");
    scanf("%s", codigo2);

    printf("Nome da Cidade: ");
    scanf(" %s[^\n]", nomeCidade2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área (em km²): ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    printf("Densidade Populacional: %.2f\n", densidadepopulacional2);
    printf("PIB Per Capita: %.2f\n", pibpercapita2);

    densidadepopulacional2 = (area2 != 0) ? (populacao2 / area2) : 0;
    pibpercapita2 = (populacao2 != 0) ? (pib2 / populacao2) : 0;

    // Exibição final dos dados
    printf("\n=== Dados Cadastrados ===\n");

    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n habitantes", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional1);
    printf("PIB Per Capita: %.2f reais\n", pibpercapita1);

    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n habitantes", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional2);
    printf("PIB Per Capita: %.2f reais\n", pibpercapita2);

    return 0;
}
