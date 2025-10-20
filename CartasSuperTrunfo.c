#include <stdio.h>
#include <string.h>

int main() {
    char codigo1[4], codigo2[4];
    char nome1[50], nome2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos_turisticos1, pontos_turisticos2;
    
    float densidade1, densidade2;
    float pib_per_capita1, pib_per_capita2;
    float super_poder1, super_poder2;
    
    printf("=== CADASTRO DA PRIMEIRA CARTA ===\n");
    printf("Digite o código da cidade (ex: A01): ");
    scanf("%s", codigo1);
    
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome1);
    
    printf("Digite a população: ");
    scanf("%d", &populacao1);
    
    printf("Digite a área (km²): ");
    scanf("%f", &area1);
    
    printf("Digite o PIB (bilhões): ");
    scanf("%f", &pib1);
    
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);
    
    densidade1 = populacao1 / area1;
    pib_per_capita1 = pib1 / populacao1 * 1000000000;
    super_poder1 = populacao1 + area1 + pib1 + pontos_turisticos1 + densidade1 + pib_per_capita1;
    
    printf("\n=== CADASTRO DA SEGUNDA CARTA ===\n");
    printf("Digite o código da cidade (ex: B02): ");
    scanf("%s", codigo2);
    
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome2);
    
    printf("Digite a população: ");
    scanf("%d", &populacao2);
    
    printf("Digite a área (km²): ");
    scanf("%f", &area2);
    
    printf("Digite o PIB (bilhões): ");
    scanf("%f", &pib2);
    
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);
    
    densidade2 = populacao2 / area2;
    pib_per_capita2 = pib2 / populacao2 * 1000000000;
    super_poder2 = populacao2 + area2 + pib2 + pontos_turisticos2 + densidade2 + pib_per_capita2;
    
    printf("\n=== DADOS DAS CARTAS ===\n");
    
    printf("\nCarta 1:\n");
    printf("Código: %s\n", codigo1);
    printf("Nome: %s\n", nome1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos turísticos: %d\n", pontos_turisticos1);
    printf("Densidade populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: %.2f\n", pib_per_capita1);
    printf("Super poder: %.2f\n", super_poder1);
    
    printf("\nCarta 2:\n");
    printf("Código: %s\n", codigo2);
    printf("Nome: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos turísticos: %d\n", pontos_turisticos2);
    printf("Densidade populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: %.2f\n", pib_per_capita2);
    printf("Super poder: %.2f\n", super_poder2);
    
    printf("\n=== COMPARAÇÃO DAS CARTAS ===\n");
    
    printf("\nPopulação: ");
    if (populacao1 > populacao2) {
        printf("Carta 1 (%s) vence!\n", nome1);
    } else if (populacao2 > populacao1) {
        printf("Carta 2 (%s) vence!\n", nome2);
    } else {
        printf("Empate!\n");
    }
    
    printf("Área: ");
    if (area1 > area2) {
        printf("Carta 1 (%s) vence!\n", nome1);
    } else if (area2 > area1) {
        printf("Carta 2 (%s) vence!\n", nome2);
    } else {
        printf("Empate!\n");
    }
    
    printf("PIB: ");
    if (pib1 > pib2) {
        printf("Carta 1 (%s) vence!\n", nome1);
    } else if (pib2 > pib1) {
        printf("Carta 2 (%s) vence!\n", nome2);
    } else {
        printf("Empate!\n");
    }
    
    printf("Pontos turísticos: ");
    if (pontos_turisticos1 > pontos_turisticos2) {
        printf("Carta 1 (%s) vence!\n", nome1);
    } else if (pontos_turisticos2 > pontos_turisticos1) {
        printf("Carta 2 (%s) vence!\n", nome2);
    } else {
        printf("Empate!\n");
    }
    
    printf("Densidade populacional: ");
    if (densidade1 < densidade2) {
        printf("Carta 1 (%s) vence!\n", nome1);
    } else if (densidade2 < densidade1) {
        printf("Carta 2 (%s) vence!\n", nome2);
    } else {
        printf("Empate!\n");
    }
    
    printf("PIB per capita: ");
    if (pib_per_capita1 > pib_per_capita2) {
        printf("Carta 1 (%s) vence!\n", nome1);
    } else if (pib_per_capita2 > pib_per_capita1) {
        printf("Carta 2 (%s) vence!\n", nome2);
    } else {
        printf("Empate!\n");
    }
    
    printf("Super poder: ");
    if (super_poder1 > super_poder2) {
        printf("Carta 1 (%s) vence!\n", nome1);
    } else if (super_poder2 > super_poder1) {
        printf("Carta 2 (%s) vence!\n", nome2);
    } else {
        printf("Empate!\n");
    }
    
    return 0;
} 
