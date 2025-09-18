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
  int populacao1;
  float area1;
  float pib1;
  int turistico1;
  float densidade1;
  float percapita1;

  //Carta02
  char estado2;
  char codigo2[4];
  char nomeCidade2[50];
  int populacao2;
  float area2;
  float pib2;
  int turistico2;
  float densidade2;
  float percapita2;

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

  densidade1 = (populacao1/area1);
  percapita1 = (float)(pib1/populacao1);

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

  densidade2 = (populacao2/area2);
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

  return 0;

  } 
