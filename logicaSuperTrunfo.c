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

    
    int escolhacomparacao1, escolhacomparacao2;
    int resultado1, resultado2;

    printf("\n***Escolha o Primeiro Elemento de Comparação***\n");
    printf("1.População\n");
    printf("2.Área\n");
    printf("3.PIB\n");
    printf("4.Número de pontos Tuísticos\n");
    printf("5.Densidade Populacional\n");
    printf("6.PIB per Capita\n");
    printf("Escolha:");
    scanf("%d", &escolhacomparacao1);


    switch (escolhacomparacao1)
    {
    case 1:
        printf("\nVocê escolheu a Opção População!\n");
        resultado1 = populacao1 > populacao2 ? 1 : 0;
        printf("Carta 1 tem População: %f\n Carta 2 tem População: %f\n", populacao1, populacao2);
        break;
    case 2:
        printf("Você escolheu a Opção Área!\n");
        resultado1 = area1 > area2 ? 1 : 0;
        printf("Carta 1 tem Área: %f\n Carta 2 tem Área: %f\n", area1, area2);
        break;
    case 3:
        printf("Você escolheu a Opção PIB\n");
        resultado1 = PIB1 > PIB2 ? 1 : 0;
        printf("Carta 1 tem PIB: %f\n Carta 2 tem PIB: %f\n", PIB1, PIB2);
        break;
    case 4:
        printf("Você escolheu a Opção Pontos Turisticos\n");
        resultado1 = Numerodepontosturisticos1 > Numerodepontosturisticos2 ? 1 : 0;
        printf("Carta 1 tem Pontos Turisticos: %d\n Carta 2 tem Pontos Turisticos: %d\n", Numerodepontosturisticos1, Numerodepontosturisticos2);
        break;   
    case 5:
        printf("Você escolheu a Opção Densidade Populacional\n");
        resultado1 = Densidadepopulacional1 < Densidadepopulacional2 ? 1 : 0;
        printf("Carta 1 tem Densidade Populacional: %f\n Carta 2 tem Densidade Populacional: %f\n", Densidadepopulacional1, Densidadepopulacional2);
        break;
    case 6:
        printf("Você escolheu a Opção PIB Per Capita\n");
        resultado1 = PIBPerCarpita1 > PIBPerCarpita2 ? 1 : 0;
        printf("Carta 1 tem PIB Per Capita: %f\n Carta 2 tem PIB Per Capita: %f\n", PIBPerCarpita1, PIBPerCarpita2);
        break;
    default:
        printf("Opção inválida\n");
        break;            
    }    

    printf("\n***Escolha o Segundo Elemento de Comparação***\n");
    printf("1.População\n");
    printf("2.Área\n");
    printf("3.PIB\n");
    printf("4.Número de pontos Tuísticos\n");
    printf("5.Densidade Populacional\n");
    printf("6.PIB per Capita\n");
    printf("Escolha:");
    scanf("%d", &escolhacomparacao2);    

    switch (escolhacomparacao1)
    {
    case 1:
        printf("\nVocê escolheu a Opção População!\n");
        resultado2 = populacao1 > populacao2 ? 1 : 0;
        printf("Carta 1 tem População: %f\n Carta 2 tem População: %f\n", populacao1, populacao2);
        break;
    case 2:
        printf("Você escolheu a Opção Área!\n");
        resultado2 = area1 > area2 ? 1 : 0;
        printf("Carta 1 tem Área: %f\n Carta 2 tem Área: %f\n", area1, area2);
        break;
    case 3:
        printf("Você escolheu a Opção PIB\n");
        printf("Carta 1 tem PIB: %f\n Carta 2 tem PIB: %f\n", PIB1, PIB2);
        resultado2 = PIB1 > PIB2 ? 1 : 0;
        break;
    case 4:
        printf("Você escolheu a Opção Pontos Turisticos\n");
        resultado2 = Numerodepontosturisticos1 > Numerodepontosturisticos2 ? 1 : 0;
        printf("Carta 1 tem Pontos Turisticos: %d\n Carta 2 tem Pontos Turisticos: %d\n", Numerodepontosturisticos1, Numerodepontosturisticos2);
        break;   
    case 5:
        printf("Você escolheu a Opção Densidade Populacional\n");
        resultado2 = Densidadepopulacional1 > Densidadepopulacional2 ? 1 : 0;
        printf("Carta 1 tem Densidade Populacional: %f\n Carta 2 tem Densidade Populacional: %f\n", Densidadepopulacional1, Densidadepopulacional2);
        break;
    case 6:
        printf("Você escolheu a Opção PIB Per Capita\n");
        resultado2 = PIBPerCarpita1 > PIBPerCarpita2 ? 1 : 0;
        printf("Carta 1 tem PIB Per Capita: %f\n Carta 2 tem PIB Per Capita: %f\n", PIBPerCarpita1, PIBPerCarpita2);
        break;
    default:
        printf("Opção inválida\n");
        break;            
    }    

    if (resultado1 && resultado2) 
    {
       printf("Parabens, Você Venceu!\n");
    } else if (resultado1 != resultado2) 
    {
       printf("Empatou!\n");
    } else 
    {
       printf("Infelizmente, Você perdeu!\n");
    }
        return 0;
}