// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

// Sugestão: Defina variáveis separadas para cada atributo da cidade.
// Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

// Cadastro das Cartas:
// Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
// Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

// Exibição dos Dados das Cartas:
// Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
// Exiba os valores inseridos para cada atributo da cidade, um por linha.

// ============================================================================================================================

#include <stdio.h>

int main()
{

    int opcao; // CRIEI UMA VARIAVEL PARA OPÇÃO DO switch

    char pais1[30], cidade1[30], codigo1[3];
    float area1, dens_pop1, cap_pib1;
    int ponts_turist1;
    double super1, pib1, populacao1;

    char pais2[30], cidade2[30], codigo2[3];
    float area2, dens_pop2, cap_pib2;
    int ponts_turist2;
    double super2, pib2, populacao2;

    printf("===============================================================================================\n\n");
    printf("Bem vindo ao Cadastro de cartas\n");
    printf("\n");
    printf("Nome da Cidade1: ");
    scanf(" %s", cidade1);
    printf("Nome do Pais da Cidade1: ");
    scanf(" %s", pais1);
    printf("Estado - UF: ");
    scanf(" %s", codigo1);
    printf("Populacao da Cidade1: ");
    scanf(" %lf", &populacao1);
    printf("Area da Cidade1: ");
    scanf(" %f", &area1);
    printf("PIB da Cidade1: ");
    scanf(" %lf", &pib1);
    printf("Pontuacao Turistica: ");
    scanf(" %d", &ponts_turist1);
    printf("\n");

    dens_pop1 = populacao1 / area1;
    cap_pib1 = pib1 / populacao1;
    super1 = populacao1 + area1 + pib1 + cap_pib1 + (area1 / populacao1) + ponts_turist1;

    printf("===============================================================================================\n\n");
    printf("Nome da Cidade2: ");
    scanf(" %s", cidade2);
    printf("Nome do Pais da Cidade2: ");
    scanf(" %s", pais2);
    printf("Estado - UF: ");
    scanf(" %s", codigo2);
    printf("Populacao da Cidade2: ");
    scanf(" %lf", &populacao2);
    printf("Area da Cidade2: ");
    scanf(" %f", &area2);
    printf("PIB da Cidade2: ");
    scanf(" %lf", &pib2);
    printf("Pontuacao Turistica: ");
    scanf(" %d", &ponts_turist2);
    printf("\n");

    dens_pop2 = populacao2 / area2;
    cap_pib2 = pib2 / populacao2;
    super2 = populacao2 + area2 + pib2 + cap_pib2 + (area2 / populacao2) + ponts_turist2;

    // DEIXEI PRA MOSTRAR SO DEPOIS AS INFORMAÇÕES

    printf("===============================================================================================\n");
    printf("CIDADE1: %s\n", cidade1);
    printf("PAIS DA CIDADE1: %s\n", pais1);
    printf("UF1: %s\n", codigo1);
    printf("POPULACAO1: %.0f\n", populacao1);
    printf("AREA1: %.1f km²\n", area1);
    printf("PIB1: R$ %.2f\n", pib1);
    printf("TURISMO: %d pontos\n", ponts_turist1);
    printf("DENSIDADE: %.1f hab/km²\n", dens_pop1);
    printf("PIB PERCAPITA: R$ %.2f\n", cap_pib1);
    printf("SUPER PODER: %.2f\n", super1);
    printf("===============================================================================================\n\n\n");

    printf("===============================================================================================\n");
    printf("CIDADE2: %s\n", cidade2);
    printf("PAIS DA CIDADE2: %s\n", pais2);
    printf("UF2: %s\n", codigo2);
    printf("POPULACAO2: %.0f\n", populacao2);
    printf("AREA2: %.1f km²\n", area2);
    printf("PIB2: R$ %.2f\n", pib2);
    printf("TURISMO: %d pontos\n", ponts_turist2);
    printf("DENSIDADE: %.1f hab/km²\n", dens_pop2);
    printf("PIB PERCAPITA: R$ %.2f\n", cap_pib2);
    printf("SUPER PODER: %.2f\n", super2);
    printf("===============================================================================================\n\n\n");

    // printf("=================================================\n");
    // printf("POPULACAO CIDADE1, GANHA?: %d \n", populacao1 > populacao2);
    // printf("AREA CIDADE1, GANHA?: %d \n", area1 > area2);
    // printf("PIB CIDADE1, GANHA?: %d \n", pib1 > pib2);
    // printf("TURISMO CIDADE1, GANHA?: %d \n", ponts_turist1 > ponts_turist2);
    // printf("DENSIDADE CIDADE1, GANHA?: %d \n", dens_pop1 > dens_pop2);
    // printf("PIB PERCAPITA CIDADE1, GANHA?: %d \n", cap_pib1 > cap_pib2);
    // printf("SUPER PODER CIDADE1, GANHA?: %d \n", super1 > super2);
    // printf("=================================================\n\n\n");

    // printf("=================================================\n");
    // printf("POPULACAO CIDADE2, GANHA?: %d \n", populacao2 > populacao1);
    // printf("AREA CIDADE2, GANHA?: %d \n", area2 > area1);
    // printf("PIB CIDADE2, GANHA?: %d \n", pib2 > pib1);
    // printf("TURISMO CIDADE2, GANHA?: %d \n", ponts_turist2 > ponts_turist1);
    // printf("DENSIDADE CIDADE2, GANHA?: %d \n", dens_pop2 > dens_pop1);
    // printf("PIB PERCAPITA CIDADE2, GANHA?: %d \n", cap_pib2 > cap_pib1);
    // printf("SUPER PODER CIDADE2, GANHA?: %d \n", super2 > super1);
    // printf("=================================================\n\n");

    // ACREDITO SER CODIGO DE NÃO-SERVENTIA JÁ MAIS.

    printf("===============================================================================================\n");

    printf("Escolha um item da para Comparar: \n\n");
    printf("1. POPULAÇÃO \n");
    printf("2. AREA \n");
    printf("3. PIB \n");
    printf("4. TURISMO \n");
    printf("5. DENSIDADE \n");
    printf("6. PIB PER CAPITA \n");
    printf("7. SUPER-PODER \n");
    printf("Digite aqui: ");
    scanf("%d", &opcao);

    // MENU DE ESCOLHA COM SWITCH

    switch (opcao)
    {
    case 1:
        if (populacao1 > populacao2) {
            printf("POPULAÇÃO DA %s É MAIOR: %f > %f \n", cidade1, populacao1, populacao2);
        } else if (populacao1 == populacao2) {
            printf("POPULAÇÃO DA %s É IGUAL Á DA %s: %f = %f \n", cidade1, cidade2, populacao1, populacao2);
        } else {
            printf("POPULAÇÃO DA %s É MAIOR: %f > %f \n", cidade2, populacao2, populacao1);
        }
        break;

    case 2:
        if (area1 > area2) {
            printf("AREA DA %s É MAIOR: %f > %f \n", cidade1, area1, area2);
        } else if (area1 == area2) {
            printf("AREA DA %s É IGUAL Á DA %s: %f = %f \n", cidade1, cidade2, area1, area2);
        } else {
            printf("AREA DA %s É MAIOR: %f > %f \n", cidade1, area2, area1);
        }
        break;

    case 3:
        if (pib1 > pib2) {
            printf("PIB DA %s É MAIOR: %f > %f \n", cidade1, pib1, pib2);
        } else if (pib1 == pib2) {
            printf("PIB DA %s É IGUAL Á DA %s: %f = %f \n", cidade1, cidade2, pib1, pib2);
        } else {
            printf("PIB DA %s É MAIOR: %f > %f \n", cidade2, pib2, pib1);
        }
        break;

    case 4:
        if (ponts_turist1 > ponts_turist2) {
            printf("TURISMO DA %s É MAIOR: %d > %d \n", cidade1, ponts_turist1, ponts_turist2);
        } else if (ponts_turist1 == ponts_turist2) {
            printf("TURISMO DA %s É IGUAL Á DA %s: %d = %d \n", cidade1, cidade2, ponts_turist1, ponts_turist2);
        } else {
            printf("TURISMO DA %s É MAIOR: %d > %d \n", cidade2, ponts_turist2, ponts_turist1);
        }
        break;

    case 5:
        if (dens_pop1 < dens_pop2) {
            printf("DENSIDADE DA %s É MELHOR: %f < %f \n", cidade1, dens_pop1, dens_pop2);
        } else if (dens_pop1 == dens_pop2) {
            printf("DENSIDADE DA %s É IGUAL Á DA %s: %f = %f \n", cidade1, cidade2, dens_pop1, dens_pop2);
        } else {
            printf("DENSIDADE DA %s É MELHOR: %f < %f \n", cidade2, dens_pop2, dens_pop1);
        }
        break;

    case 6:
        if (cap_pib1 > cap_pib2) {
            printf("PIB PER CAPITA DA %s É MAIOR: %f > %f \n", cidade1, cap_pib1, cap_pib2);
        } else if (cap_pib1 == cap_pib2) {
            printf("PIB PER CAPITA DA %s É IGUAL Á DA %s: %f = %f \n", cidade1, cidade2, cap_pib1, cap_pib2);
        } else {
            printf("PIB PER CAPITA DA %s É MAIOR: %f > %f \n", cidade2, cap_pib2, cap_pib1);
        }
        break;

    case 7:
        if (super1 > super2) {
            printf("SUPER PODER DA %s É MAIOR: %f > %f \n", cidade1, super1, super2);
        } else if (super1 == super2) {
            printf("SUPER PODER DA %s É IGUAL Á DA %s: %f = %f \n", cidade1, cidade2, super1, super2);
        } else {
            printf("SUPER PODER DA %s É MAIOR: %f > %f \n", cidade2, super2, super1);
        }
        break;
    }

    printf("===============================================================================================\n");

    return 0;
}