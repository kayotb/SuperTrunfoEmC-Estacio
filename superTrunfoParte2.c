#include <stdio.h>

int main() {

    char estado1;
    char codigoCarta1[4];
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int numeroPontosTuristicos1;

    char estado2;
    char codigoCarta2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int numeroPontosTuristicos2;

    float densidadePopulacional1;
    float pibPerCapita1;

    float densidadePopulacional2;
    float pibPerCapita2;

    printf("--------- BEM VINDO AO SUPER TRUNFO EM C ---------\n\n");

    printf("COLOQUE OS DADOS DA PRIMEIRA CARTA\n\n");

    printf("Estado da Carta 1 (A-H): ");
    scanf(" %c", &estado1);
    
    printf("Código da Carta (ex: A01): ");
    scanf(" %3s", codigoCarta1);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]s", nomeCidade1);

    printf("População: ");
    scanf(" %d", &populacao1);

    printf("Área (em km²): ");
    scanf(" %f", &area1);

    printf("PIB (em bilhões de reais): ");
    scanf(" %f", &pib1);

    printf("Número de Pontos Turísticos: ");
    scanf(" %d", &numeroPontosTuristicos1);

    printf("\nCOLOQUE OS DADOS DA SEGUNDA CARTA\n\n");

    printf("Estado da Carta 2 (A-H): ");
    scanf(" %c", &estado2);
    
    printf("Código da Carta (ex: B02): ");
    scanf(" %3s", codigoCarta2);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]s", nomeCidade2);

    printf("População: ");
    scanf(" %d", &populacao2);

    printf("Área (em km²): ");
    scanf(" %f", &area2);

    printf("PIB (em bilhões de reais): ");
    scanf(" %f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf(" %d", &numeroPontosTuristicos2);

    densidadePopulacional1 = populacao1 / area1;
    pibPerCapita1 = pib1 / populacao1;

    densidadePopulacional2 = populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2; 

    printf("\n--------- DADOS DA CARTA 1 ---------\n\n");
    printf("ESTADO: %c\n", estado1);
    printf("Código: %s\n", codigoCarta1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", numeroPontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km² \n", densidadePopulacional1);
    printf("PIB per Capita: %.2f reais \n\n", pibPerCapita1);

    printf("\n--------- DADOS DA CARTA 2 ---------\n\n");
    printf("ESTADO: %c\n", estado2);
    printf("Código: %s\n", codigoCarta2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", numeroPontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km² \n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais \n", pibPerCapita2);

    return 0;
}
