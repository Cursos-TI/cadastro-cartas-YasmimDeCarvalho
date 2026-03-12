#include <stdio.h>

/* Desafio Super Trunfo - Países
 Tema 1 - Cadastro das cartas
 Objetivo: No nível novato você deve criar as cartas representando 
 as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

 O que você vai fazer: 
Criar um programa em C que permita ao usuário inserir os dados de duas cartas do Super Trunfo. 
Para cada carta, o usuário deverá fornecer as seguintes informações: 

Estado: Uma letra de 'A' a 'H' (representando um dos oito estados). Tipo: char 
Código da Carta: A letra do estado seguida de um número de 01 a 04
                (ex: A01, B03). Tipo: char[] (um array de caracteres, ou string)
 
Nome da Cidade: O nome da cidade. Tipo: char[] (string)
População: O número de habitantes da cidade. Tipo: int
Área (em km²): A área da cidade em quilômetros quadrados. Tipo: float
PIB: O Produto Interno Bruto da cidade. Tipo: float
Número de Pontos Turísticos: A quantidade de pontos turísticos na cidade. Tipo: int
 
Após o usuário inserir os dados de cada carta,
seu programa deve exibir na tela as informações cadastradas, 
de forma organizada e legível. Para cada carta, 
imprima cada informação em uma linha separada, com uma descrição clara. 

Por exemplo:


Carta 1:                                            Carta 2:

Estado: A                                           Estado: B
Código: A01                                         Código: B02
Nome da Cidade: São Paulo                           Nome da Cidade: Rio de Janeiro
População: 12325000                                 População: 6748000
Área: 1521.11 km²                                   Área: 1200.25 km²
PIB: 699.28 bilhões de reais                        PIB: 300.50 bilhões de reais
Número de Pontos Turísticos: 50                     Número de Pontos Turísticos: 30

    */

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

  char state,state2;
  char codigoState[6], cidade[70], codigoState2[6], cidade2[70];
  int population,pontosTuristico, population2, pontosTuristico2;
  float areaKM,PIB, areaKM2, PIB2;

  // INFORMACOES CARTA 01

  printf("Ola! Digite uma letra entre A e H: ");
  scanf(" %c", &state);
  printf("Digite o codigo do estado: ");
  scanf(" %s", codigoState);
  printf("Digite o nome da sua cidade: ");
  scanf(" %[^\n]", cidade);
  printf("Digite o numero correspondente a populacao: ");
  scanf(" %d", &population);
  printf("Digite o numero da area em KM: ");
  scanf(" %f", &areaKM);
  printf("Digite o numero PIB: ");
  scanf(" %f", &PIB);
  printf("Digite o numero de pontos turisticos: ");
  scanf(" %d", &pontosTuristico);

  // INFORMACOES PARA CARTA 02
  printf("\n\nVamos para carta 02!\nDigite uma letra entre A e H: ");
  scanf(" %c", &state2);
  printf("Digite o codigo do estado: ");
  scanf(" %s", codigoState2);
  printf("Digite o nome da sua cidade: ");
  scanf(" %[^\n]", cidade2);
  printf("Digite o numero correspondente a populacao: ");
  scanf(" %d", &population2);
  printf("Digite o numero da area em KM: ");
  scanf(" %f", &areaKM2);
  printf("Digite o numero PIB: ");
  scanf(" %f", &PIB2);
  printf("Digite o numero de pontos turisticos: ");
  scanf(" %d", &pontosTuristico2);


  // Área para CARTA 01 exibição dos dados da cidade
  printf("\nCarta 01");
  printf("\nEstado: %c",state);
  printf("\nCodigo: %c%s",state,codigoState);
  printf("\nCidade: %s",cidade);
  printf("\nPopulacao: %d habitantes",population);
  printf("\nArea: %f km²",areaKM);
  printf("\nPIB: %f bilhões de reais",PIB);
  printf("\nPontos Turisticos: %d",pontosTuristico);

  // Área para CARTA 02 exibição dos dados da cidade

  printf("\n\nCarta 02");
  printf("\nEstado: %c",state2);
  printf("\nCodigo: %c%s",state2,codigoState2);
  printf("\nCidade: %s",cidade2);
  printf("\nPopulacao: %d habitantes",population2);
  printf("\nArea: %f km²",areaKM2);
  printf("\nPIB: %f bilhões de reais",PIB2);
  printf("\nPontos Turisticos: %d",pontosTuristico2);

return 0;
} 
