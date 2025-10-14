#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  
  //Carta 01
  char estado1;
  char codigo1[4];
  char nomeCidade1[50];
  unsigned long int populacao1;
  float area1;
  float pib1;
  int turistico1;
  float densidade1;
  float percapita1;
  float superpoder1;

  //Carta02
  char estado2;
  char codigo2[4];
  char nomeCidade2[50];
  unsigned long int populacao2;
  float area2;
  float pib2;
  int turistico2;
  float densidade2;
  float percapita2;
  float superpoder2;

  // Área para entrada de dados
  printf("Vamos jogar o Super Trunfo !\n \n");

  //Coletando dados Carta1
  
  printf("Digite o estado escolhido de (A-H): \n");
  scanf(" %c", &estado1);

  printf("Digite um código para a carta (Ex: A01): \n");
  scanf("%s", codigo1);

  printf("Digite o nome da cidade escolhida: \n");
  scanf("%s", nomeCidade1);

  printf("Digite o numero de população da cidade: \n");
  scanf("%d", &populacao1);

  printf("Digite o tamanho da área da cidade escolhida: \n");
  scanf("%f", &area1);

  printf("Digite o PIB da cidade: \n");
  scanf("%f", &pib1);

  printf("Digite o numero de Pontos Turisticos: \n");
  scanf("%d", &turistico1);

  //Calculando Densidade Populacional e PIB per Capita

  densidade1 = (float)(populacao1/area1);
  percapita1 = (float)(pib1/populacao1);

  //Calculando SuperPoder
  
  superpoder1 = populacao1 + area1 + pib1 + percapita1 + turistico1 + (1.0 / densidade1);
  superpoder2 = populacao2 + area2 + pib2 + percapita2 + turistico2 + (1.0 / densidade2);
  //Coletando dados Carta2

  printf("Digite o estado escolhido de (A-H): \n");
  scanf(" %c", &estado2);

  printf("Digite um código para a carta (Ex: A01): \n");
  scanf("%s", codigo2);

  printf("Digite o nome da cidade escolhida: \n");
  scanf("%s", nomeCidade2);

  printf("Digite o numero de população da cidade: \n");
  scanf("%d", &populacao2);

  printf("Digite o tamanho da área da cidade escolhida: \n");
  scanf("%f", &area2);

  printf("Digite o PIB da cidade: \n");
  scanf("%f", &pib2);

  printf("Digite o numero de Pontos Turisticos: \n");
  scanf("%d", &turistico2);

  //Calculando Densidade Populacional e PIB per Capita

  densidade2 = (float)(populacao2/area2);
  percapita2 = (float)(pib2/populacao2);

  // Área para exibição dos dados da cidade

  //Exibição de Dados Carta 01

  printf("\n Carta01 \n");
  printf("Estado: %c \n",estado1);
  printf("Código da Carta: %s \n", codigo1);
  printf("Nome da Cidade: %s \n", nomeCidade1);
  printf("População: %d \n", populacao1);
  printf("Área: %.2f km² \n", area1);
  printf("PIB: %.2f bilhões de reais \n", pib1);
  printf("Número de Pontos Turísticos: %d \n", turistico1);
  printf("Densidade Populacional: %.2f hab/km² \n",densidade1);
  printf("PIB per Capita: %.2f reais \n", percapita1);

  //Exibição de Dados Carta 02
  printf("\n Carta02 \n");
  printf("Estado: %c \n",estado2);
  printf("Código da Carta: %s \n", codigo2);
  printf("Nome da Cidade: %s \n", nomeCidade2);
  printf("População: %d \n", populacao2);
  printf("Área: %.2f km² \n", area2);
  printf("PIB: %.2f bilhões de reais \n", pib2);
  printf("Número de Pontos Turísticos: %d \n", turistico2);
  printf("Densidade Populacional: %.2f hab/km² \n",densidade2);
  printf("PIB per Capita: %.2f reais \n", percapita2);

  //Comparação das Cartas

  printf("\nComparação de Cartas: \n");

  //Comparação População
    printf("Carta 1: %s, %d  \n", nomeCidade1, populacao1);
    printf("Carta 2: %s, %d  \n", nomeCidade2, populacao2);
    if (populacao1 > populacao2)
    {
    printf("Resultado: Carta 1 venceu ! \n\n");
    } else {
    printf("Resultadao: Carta 2 Venceu !\n\n ");
    }

  //Comparação area
    printf("Carta 1: %s, %d \n", nomeCidade1, area1);
    printf("Carta 2: %s, %d \n", nomeCidade2, area2);
    if (area1 > area2 )
    {
    printf("Resultado: Carta 1 venceu ! \n\n");
    } else {
    printf("Resultadao: Carta 2 Venceu !\n \n");
    }
  //Comparação Pib

    printf("Carta 1: %s, %d  \n", nomeCidade1, pib1);
    printf("Carta 2: %s, %d  \n", nomeCidade2, pib2);
    if (pib1 > pib2 )
    {
    printf("Resultado: Carta 1 venceu ! \n\n");
    } else {
    printf("Resultadao: Carta 2 Venceu !\n \n");
    }
  

  //Comparação Turistico

    printf("Carta 1: %s, %d  \n", nomeCidade1, turistico1);
    printf("Carta 2: %s, %d  \n", nomeCidade2, turistico2);
    if (turistico1 > turistico2 )
    {
    printf("Resultado: Carta 1 venceu ! \n\n");
    } else {
    printf("Resultadao: Carta 2 Venceu !\n \n");
    }
  

  //Comparação Densidade

    printf("Carta 1: %s, %d  \n", nomeCidade1, densidade1);
    printf("Carta 2: %s, %d  \n", nomeCidade2, densidade2);
    if (densidade1 < densidade2 ) // menor vence
    {
    printf("Resultado: Carta 1 venceu ! \n\n");
    } else {
    printf("Resultadao: Carta 2 Venceu !\n\n");
    }
   

  //Comparação Percapita

    printf("Carta 1: %s, %d  \n", nomeCidade1, percapita1);
    printf("Carta 2: %s, %d  \n", nomeCidade2, percapita2);
    if (percapita1 > percapita2 )
    {
    printf("Resultado: Carta 1 venceu ! \n\n");
    } else {
    printf("Resultadao: Carta 2 Venceu !\n\n");
    }
  

  //Comparação Superpoder

    printf("Carta 1: %s, %d  \n", nomeCidade1, superpoder1);
    printf("Carta 2: %s, %d  \n", nomeCidade2, superpoder2);
    if (superpoder1 > superpoder2 )
    {
    printf("Resultado: Carta 1 venceu ! \n\n");
    } else {
    printf("Resultadao: Carta 2 Venceu !\n\n");
    }

  return 0;

  } 
