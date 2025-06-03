#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    
    int Numerodepontosturisticos1, Numerodepontosturisticos2;
    float area1, PIB1, area2, PIB2, populacao1, populacao2, SuperPoder1, SuperPoder2;
    float  Densidadepopulacional1, Densidadepopulacional2, PIBPerCarpita1, PIBPerCarpita2;
    char estado1[20], estado2[20]; 
    char Codigodacarta1[50];
    char Codigodacarta2[20];
    char Nomedacidade1[50];
    char Nomedacidade2[20];

    printf("Digite o Estado: \n");
    scanf("%s", &estado1);

    printf("Digite o Codigo: \n");
    scanf("%s", Codigodacarta1);

    printf("Digite o Nome da Cidade: \n");
    scanf("%s", Nomedacidade1);

    printf("Digite a População: \n");
    scanf("%f", &populacao1);

    printf("Digite a Área: \n");
    scanf("%f", &area1);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB1);

    printf("Digite o Número de pontos Turisticos: \n");
    scanf("%d", &Numerodepontosturisticos1);

    Densidadepopulacional1 = populacao1 / area1;
    PIBPerCarpita1 = PIB1 / populacao1;
    SuperPoder1 = populacao1 + area1 + PIB1 + PIBPerCarpita1 + Densidadepopulacional1/1 + Numerodepontosturisticos1;   

    printf("Digite o Estado: \n");
    scanf("%s", &estado2);

    printf("Digite o Codigo: \n");
    scanf("%s", Codigodacarta2);

    printf("Digite o Nome da Cidade: \n");
    scanf("%s", Nomedacidade2);

    printf("Digite a População: \n");
    scanf("%f", &populacao2);

    printf("Digite a Área: \n");
    scanf("%f", &area2);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB2);

    printf("Digite o Número de pontos Turisticos: \n");
    scanf("%d", &Numerodepontosturisticos2);

    Densidadepopulacional2 = populacao2 / area2;
    PIBPerCarpita2 = PIB2 / populacao2;
    SuperPoder2 = populacao2 + area2 + PIB2 + PIBPerCarpita2 + Densidadepopulacional2/1 + Numerodepontosturisticos2;   
    
    printf("Carta 1: \n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", Codigodacarta1);
    printf("Nome da Cidade: %s\n", Nomedacidade1);
    printf("População: %.2f\n", populacao1);
    printf("Área: %.2f M² \n", area1);
    printf("PIB: %.2f\n", PIB1);
    printf("Número de Pontos Turísticos: %d\n", Numerodepontosturisticos1);
    printf("Densidade Populacional: %.2f\n", Densidadepopulacional1);
    printf("PIB per Capita: %.2f\n", PIBPerCarpita1);
    printf("Super Poder: %.2f\n", SuperPoder1);

    printf("Carta 2: \n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", Codigodacarta2);
    printf("Nome da Cidade: %s\n", Nomedacidade2);
    printf("População: %.2f\n", populacao2);
    printf("Área: %.2f M²\n", area2);
    printf("PIB: %.2f\n", PIB2);
    printf("Número de Pontos Turísticos: %d\n", Numerodepontosturisticos2);
    printf("Densidade Populacional: %.2f\n", Densidadepopulacional2);
    printf("PIB per Capita: %.2f\n", PIBPerCarpita2);
    printf("Super Poder: %.2f\n", SuperPoder2);

    
    int escolhacomparacao;

    printf("\n***Escolha o Elemento de Comparação***\n");
    printf("1.População\n");
    printf("2.Área\n");
    printf("3.PIB\n");
    printf("4.Número de pontos Tuísticos\n");
    printf("5.Densidade Populacional\n");
    printf("6.PIB per Capita\n");
    printf("Escolha:");
    scanf("%d", &escolhacomparacao);


    switch (escolhacomparacao)
    {
    case 1:
        printf("\nJogador: População:\n");

        if (escolhacomparacao == 1 && (populacao1 > populacao2)) {
         printf("Cidade 1 tem maior população.\n");
    } else {
         printf("Cidade 2 tem maior população.\n");
    }
        break;
    case 2:
        printf("jogador: Área\n");

        if (escolhacomparacao == 2 && (area1 > area2)) {
         printf("Cidade 1 tem Área maior.\n");
    } else {
         printf("Cidade 2 tem Área maior.\n");
    }
        break;
    case 3:
        printf("jogador: PIB\n");

        if (escolhacomparacao == 3 && (PIB1 > PIB2)) {
         printf("Cidade 1 tem o PIB maior.\n");
    } else {
         printf("Cidade 2 tem o PIB maior.\n");
    }
        break;
    case 4:
        printf("jogador: Número de pontos Turisticos\n");

        if (escolhacomparacao == 5 && (Numerodepontosturisticos1 > Numerodepontosturisticos2)) {
         printf("Cidade 1 tem mais Pontos Turisticos maior.\n");
    } else {
         printf("Cidade 2 tem mais pontos Turisticos maior.\n");
    }
        break;   
    case 5:
        printf("jogador: Densidade Populacional\n");

        if (escolhacomparacao == 5 && (Densidadepopulacional1 < Densidadepopulacional2)) {
         printf("Cidade 1 tem a Densidade Populacional menor.\n");
    } else {
         printf("Cidade 2 tem a Densidade Populacional menor.\n");
    }
        break;
    case 6:
        printf("jogador: PIB Per Capita\n");

        if (escolhacomparacao == 6 && (PIBPerCarpita1 > PIBPerCarpita2)) {
         printf("Cidade 1 tem o maior PIB per Carpita.\n");
    } else {
         printf("Cidade 2 tem a PIB per Carpita maior.\n");
    }
        break;
    default:
        printf("Opção inválida\n");
        break;            
    }    
    return 0;
}