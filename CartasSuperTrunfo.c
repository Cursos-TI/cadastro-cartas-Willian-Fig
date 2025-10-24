#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  int opcao1, opcao2;
  
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

   printf("=== SUPER TRUNFO ===\n\n");
    printf("Carta 1: %s\n", nomeCidade1);
    printf("Carta 2: %s\n\n", nomeCidade2);

    printf("Escolha o Primeiro atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos turísticos\n");
    printf("5 - Densidade demográfica\n");
    printf("Digite sua opção: ");
    scanf("%d", &opcao1);

    printf("Escolha o Segundo atributo para comparar:\n");
    for (int i = 1; i <= 5; i++){
        if (i == opcao1) continue; //não mostrar o mesmo atributo
        switch (i) {

        case 1: printf("1 - População\n"); break;
        case 2: printf("2 - Área\n"); break;
        case 3: printf("3 - PIB\n"); break;
        case 4: printf("4 - Pontos turísticos\n"); break;
        case 5: printf("5 - Densidade demográfica\n"); break;
        }
    }
    printf("Digite sua opção: ");
    scanf("%d", &opcao2);

    // Verifica se o jogador escolheu o mesmo atributo duas vezes
    if (opcao1 == opcao2) {
        printf("\nErro: Voce nao pode escolher o mesmo atributo duas vezes!\n");
        return 0;
    }

    switch (opcao1) {
        case 1: // População
            printf("Atributo escolhido: População\n");
            printf("%s: %d habitantes\n", nomeCidade1, populacao1);
            printf("%s: %d habitantes\n", nomeCidade2, populacao2);

            if (populacao1 > populacao2) {
                printf("Vencedor: %s\n", nomeCidade1);
            } else if (populacao2 > populacao1) {
                printf("Vencedor: %s\n", nomeCidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 2: // Área
            printf("Atributo escolhido: Área\n");
            printf("%s: %.2f km²\n", nomeCidade1, area1);
            printf("%s: %.2f km²\n", nomeCidade2, area2);

            if (area1 > area2) {
                printf("Vencedor: %s\n", nomeCidade1);
            } else if (area2 > area1) {
                printf("Vencedor: %s\n", nomeCidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 3: // PIB
            printf("Atributo escolhido: PIB\n");
            printf("%s: %.2f bilhões R$\n", nomeCidade1, pib1);
            printf("%s: %.2f bilhões R$\n", nomeCidade2, pib2);

            if (pib1 > pib2) {
                printf("Vencedor: %s\n", nomeCidade1);
            } else if (pib2 > pib1) {
                printf("Vencedor: %s\n", nomeCidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 4: // Pontos turísticos
            printf("Atributo escolhido: Pontos turísticos\n");
            printf("%s: %d pontos\n", nomeCidade1, turistico1);
            printf("%s: %d pontos\n", nomeCidade2, turistico2);

            if (turistico1 > turistico2) {
                printf("Vencedor: %s\n", nomeCidade1);
            } else if (turistico2 > turistico1) {
                printf("Vencedor: %s\n", nomeCidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 5: // Densidade demográfica (regra invertida)
            printf("Atributo escolhido: Densidade demográfica\n");
            printf("%s: %.4f hab/km²\n", nomeCidade1, densidade1);
            printf("%s: %.4f hab/km²\n", nomeCidade2, densidade2);

            if (densidade1 < densidade2) {
                printf("Vencedor: %s (menor densidade vence!)\n", nomeCidade1);
            } else if (densidade2 < densidade1) {
                printf("Vencedor: %s (menor densidade vence!)\n", nomeCidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        default:
            printf("Opção inválida! Por favor, escolha um número entre 1 e 5.\n");
            break;
    }

    switch (opcao2) {
        case 1: // População
            printf("Atributo escolhido: População\n");
            printf("%s: %d habitantes\n", nomeCidade1, populacao1);
            printf("%s: %d habitantes\n", nomeCidade2, populacao2);

            if (populacao1 > populacao2) {
                printf("Vencedor: %s\n", nomeCidade1);
            } else if (populacao2 > populacao1) {
                printf("Vencedor: %s\n", nomeCidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 2: // Área
            printf("Atributo escolhido: Área\n");
            printf("%s: %.2f km²\n", nomeCidade1, area1);
            printf("%s: %.2f km²\n", nomeCidade2, area2);

            if (area1 > area2) {
                printf("Vencedor: %s\n", nomeCidade1);
            } else if (area2 > area1) {
                printf("Vencedor: %s\n", nomeCidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 3: // PIB
            printf("Atributo escolhido: PIB\n");
            printf("%s: %.2f bilhões R$\n", nomeCidade1, pib1);
            printf("%s: %.2f bilhões R$\n", nomeCidade2, pib2);

            if (pib1 > pib2) {
                printf("Vencedor: %s\n", nomeCidade1);
            } else if (pib2 > pib1) {
                printf("Vencedor: %s\n", nomeCidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 4: // Pontos turísticos
            printf("Atributo escolhido: Pontos turísticos\n");
            printf("%s: %d pontos\n", nomeCidade1, turistico1);
            printf("%s: %d pontos\n", nomeCidade2, turistico2);

            if (turistico1 > turistico2) {
                printf("Vencedor: %s\n", nomeCidade1);
            } else if (turistico2 > turistico1) {
                printf("Vencedor: %s\n", nomeCidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 5: // Densidade demográfica (regra invertida)
            printf("Atributo escolhido: Densidade demográfica\n");
            printf("%s: %.4f hab/km²\n", nomeCidade1, densidade1);
            printf("%s: %.4f hab/km²\n", nomeCidade2, densidade2);

            if (densidade1 < densidade2) {
                printf("Vencedor: %s (menor densidade vence!)\n", nomeCidade1);
            } else if (densidade2 < densidade1) {
                printf("Vencedor: %s (menor densidade vence!)\n", nomeCidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        default:
            printf("Opção inválida! Por favor, escolha um número entre 1 e 5.\n");
            break;
    }

     printf("\n=== RESULTADO FINAL ===\n");
    if (opcao1 == opcao2) {
        printf("Empate!\n");
    } else if (opcao1 > opcao2) {
        printf("Vencedor: %s!\n", nomeCidade1);
    } else {
        printf("Vencedor: %s!\n", nomeCidade2);
    }

  return 0;

  } 
