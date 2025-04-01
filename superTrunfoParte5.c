#include <stdio.h>

int main() {
    char estado1[3], estado2[3];
    char codigoCarta1[4], codigoCarta2[4];
    char nomeCidade1[50], nomeCidade2[50];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int numeroPontosTuristicos1, numeroPontosTuristicos2;

    float densidadePopulacional1, densidadePopulacional2;
    float pibPerCapita1, pibPerCapita2;
    float superPoder1, superPoder2;

    printf("--------- BEM VINDO AO SUPER TRUNFO EM C ---------\n\n");

    printf("COLOQUE OS DADOS DA PRIMEIRA CARTA\n\n");
    printf("Estado da Carta 1 (A-H): ");
    scanf(" %2s", estado1);

    printf("Código da Carta (ex: A01): ");
    scanf(" %3s", codigoCarta1);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]s", nomeCidade1);

    printf("População: ");
    scanf(" %lu", &populacao1);

    printf("Área (em km²): ");
    scanf(" %f", &area1);

    printf("PIB (em bilhões de reais): ");
    scanf(" %f", &pib1);

    printf("Número de Pontos Turísticos: ");
    scanf(" %d", &numeroPontosTuristicos1);

    printf("\nCOLOQUE OS DADOS DA SEGUNDA CARTA\n\n");
    printf("Estado da Carta 2 (A-H): ");
    scanf(" %2s", estado2);

    printf("Código da Carta (ex: B02): ");
    scanf(" %3s", codigoCarta2);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]s", nomeCidade2);

    printf("População: ");
    scanf(" %lu", &populacao2);

    printf("Área (em km²): ");
    scanf(" %f", &area2);

    printf("PIB (em bilhões de reais): ");
    scanf(" %f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf(" %d", &numeroPontosTuristicos2);

    // Cálculo da densidade populacional e PIB per capita
    densidadePopulacional1 = populacao1 / area1;
    pibPerCapita1 = pib1 / populacao1;

    densidadePopulacional2 = populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;

    // Cálculo do super poder
    superPoder1 = (float)populacao1 + area1 + pib1 + (float)numeroPontosTuristicos1 + pibPerCapita1 + (1.0 / densidadePopulacional1);
    superPoder2 = (float)populacao2 + area2 + pib2 + (float)numeroPontosTuristicos2 + pibPerCapita2 + (1.0 / densidadePopulacional2);

    // Exibição dos dados das cartas
    printf("\n--------- DADOS DA CARTA 1 ---------\n");
    printf("ESTADO: %s\nCódigo: %s\nNome da Cidade: %s\nPopulação: %lu\nÁrea: %.2f km²\nPIB: %.2f bilhões\nPontos Turísticos: %d\nDensidade Populacional: %.2f hab/km²\nPIB per Capita: %.2f reais\nSuper Poder: %.2f\n",
           estado1, codigoCarta1, nomeCidade1, populacao1, area1, pib1, numeroPontosTuristicos1, densidadePopulacional1, pibPerCapita1, superPoder1);

    printf("\n--------- DADOS DA CARTA 2 ---------\n");
    printf("ESTADO: %s\nCódigo: %s\nNome da Cidade: %s\nPopulação: %lu\nÁrea: %.2f km²\nPIB: %.2f bilhões\nPontos Turísticos: %d\nDensidade Populacional: %.2f hab/km²\nPIB per Capita: %.2f reais\nSuper Poder: %.2f\n",
           estado2, codigoCarta2, nomeCidade2, populacao2, area2, pib2, numeroPontosTuristicos2, densidadePopulacional2, pibPerCapita2, superPoder2);
    
    int opcaoComparacao;
    printf("\n--------- Menu de Comparacao ---------\n");
    printf("1. Comparar População\n");
    printf("2. Comparar Área\n");
    printf("3. Comparar PIB\n");
    printf("4. Comparar Número de Pontos Turísticos\n");
    printf("5. Comparar Densidade Demográfica\n");
    printf("6. Sair\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcaoComparacao);
    
    switch (opcaoComparacao){
    case 1:
        printf("\n--------- Comparando Populacao, quem tiver a maior vence ---------\n");
        if (populacao1 > populacao2){
            printf("\nCarta 1 %s: %d", nomeCidade1, populacao1);
            printf("\nCarta 2 %s: %d", nomeCidade2, populacao2);
            printf("\nResultado: Carta 1 (%s) venceu!", nomeCidade1);
        } else if (populacao1 == populacao2){
            printf("\nCarta 1 %s: %d", nomeCidade1, populacao1);
            printf("\nCarta 2 %s: %d", nomeCidade2, populacao2);
            printf("\nResultado: Empate!");
        } else{
            printf("\nCarta 1 %s: %d", nomeCidade1, populacao1);
            printf("\nCarta 2 %s: %d", nomeCidade2, populacao2);
            printf("\nResultado: Carta 2 (%s) venceu!", nomeCidade2);
        }
        
        break;
    case 2:
        printf("\n--------- Comparando Area, quem tiver a maior vence ---------\n");
        if (area1 > area2){
            printf("\nCarta 1 %s: %.2f", nomeCidade1, area1);
            printf("\nCarta 2 %s: %.2f", nomeCidade2, area2);
            printf("\nResultado: Carta 1 (%s) venceu!", nomeCidade1);
        } else if (area1 == area2){
            printf("\nCarta 1 %s: %.2f", nomeCidade1, area1);
            printf("\nCarta 2 %s: %.2f", nomeCidade2, area2);
            printf("\nResultado: Empate!");
        }   
        else{
            printf("\nCarta 1 %s: %.2f", nomeCidade1, area1);
            printf("\nCarta 2 %s: %.2f", nomeCidade2, area2);
            printf("\nResultado: Carta 2 (%s) venceu!", nomeCidade2);
        }
        break;
    case 3:
        printf("\n--------- Comparando PIB, quem tiver a maior vence ---------\n");
        if (pib1 > pib2){
            printf("\nCarta 1 %s: %.2f", nomeCidade1, pib1);
            printf("\nCarta 2 %s: %.2f", nomeCidade2, pib2);
            printf("\nResultado: Carta 1 (%s) venceu!", nomeCidade1);
        } else if (pib1 == pib2){
            printf("\nCarta 1 %s: %.2f", nomeCidade1, pib1);
            printf("\nCarta 2 %s: %.2f", nomeCidade2, pib2);
            printf("\nResultado: Empate!");
        }   
        else{
            printf("\nCarta 1 %s: %.2f", nomeCidade1, pib1);
            printf("\nCarta 2 %s: %.2f", nomeCidade2, pib2);
            printf("\nResultado: Carta 2 (%s) venceu!", nomeCidade2);
        }
        break;

    case 4:
        printf("\n--------- Comparando Número de Pontos Turísticos, quem tiver a maior vence ---------\n");
        if (numeroPontosTuristicos1 > numeroPontosTuristicos2){
            printf("\nCarta 1 %s: %d", nomeCidade1, numeroPontosTuristicos1);
            printf("\nCarta 2 %s: %d", nomeCidade2, numeroPontosTuristicos2);
            printf("\nResultado: Carta 1 (%s) venceu!", nomeCidade1);
        } else if (numeroPontosTuristicos1 == numeroPontosTuristicos2){
            printf("\nCarta 1 %s: %d", nomeCidade1, numeroPontosTuristicos1);
            printf("\nCarta 2 %s: %d", nomeCidade2, numeroPontosTuristicos2);
            printf("\nResultado: Empate!");
        }   
        else{
            printf("\nCarta 1 %s: %d", nomeCidade1, numeroPontosTuristicos1);
            printf("\nCarta 2 %s: %d", nomeCidade2, numeroPontosTuristicos2);
            printf("\nResultado: Carta 2 (%s) venceu!", nomeCidade2);
        }
        break;
    case 5:
        printf("\n--------- Comparando Densidade Demográfica, quem tiver a menor vence ---------\n");
        if (densidadePopulacional1 < densidadePopulacional2){
            printf("\nCarta 1 %s: %f", nomeCidade1, densidadePopulacional1);
            printf("\nCarta 2 %s: %f", nomeCidade2, densidadePopulacional2);
            printf("\nResultado: Carta 1 (%s) venceu!", nomeCidade1);
        } else if (densidadePopulacional1 == densidadePopulacional2){
            printf("\nCarta 1 %s: %f", nomeCidade1, densidadePopulacional1);
            printf("\nCarta 2 %s: %f", nomeCidade2, densidadePopulacional2);
            printf("\nResultado: Empate!");
        }   
        else{
            printf("\nCarta 1 %s: %f", nomeCidade1, densidadePopulacional1);
            printf("\nCarta 2 %s: %f", nomeCidade2, densidadePopulacional2);
            printf("\nResultado: Carta 2 (%s) venceu!", nomeCidade2);
        }
        break;
    case 6:
        printf("Saindo...\n");
        break;
    default:
        printf("Opção inválida! Tente novamente.\n");
        break;
    }
    
    
    // printf("\n--------- RESULTADO DAS COMPARAÇÕES ---------\n");
    // printf("População: Carta %d venceu (%d)\n", (populacao1 > populacao2) ? 1 : 2, populacao1 > populacao2);
    // printf("Área: Carta %d venceu (%d)\n", (area1 > area2) ? 1 : 2, area1 > area2);
    // printf("PIB: Carta %d venceu (%d)\n", (pib1 > pib2) ? 1 : 2, pib1 > pib2);
    // printf("Pontos Turísticos: Carta %d venceu (%d)\n", (numeroPontosTuristicos1 > numeroPontosTuristicos2) ? 1 : 2, numeroPontosTuristicos1 > numeroPontosTuristicos2);
    // printf("Densidade Populacional: Carta %d venceu (%d)\n", (densidadePopulacional1 < densidadePopulacional2) ? 1 : 2, densidadePopulacional1 < densidadePopulacional2);
    // printf("PIB per Capita: Carta %d venceu (%d)\n", (pibPerCapita1 > pibPerCapita2) ? 1 : 2, pibPerCapita1 > pibPerCapita2);
    // printf("Super Poder: Carta %d venceu (%d)\n", (superPoder1 > superPoder2) ? 1 : 2, superPoder1 > superPoder2);

    
    // printf("\n--------- Comparação da População que tiver a maior vence!!! --------- \n");

    // printf("\nCarta 1 %s: %d", nomeCidade1, populacao1);
    // printf("\nCarta 2 %s: %d", nomeCidade2, populacao2);

    // if (populacao1 > populacao2) {
    //     printf("\nResultado: Carta 1 (%s) venceu!", nomeCidade1);
    // } else {
    //     printf("\nResultado: Carta 2 (%s) venceu!", nomeCidade2);
    // }

    // printf("\n--------- Comparação da Densidade populacional que tiver a menor vence!!! --------- \n");

    // printf("\nCarta 1 %s: %d", nomeCidade1, densidadePopulacional1);
    // printf("\nCarta 2 %s: %d", nomeCidade2, densidadePopulacional2);

    // if (densidadePopulacional1 < densidadePopulacional2) {
    //     printf("\nResultado: Carta 1 (%s) venceu!", nomeCidade1);
    // } else {
    //     printf("\nResultado: Carta 2 (%s) venceu!", nomeCidade2);
    // }
    return 0;
}
