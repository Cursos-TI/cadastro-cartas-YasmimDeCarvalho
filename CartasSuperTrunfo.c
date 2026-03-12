#include <stdio.h>

/*
 
Calcular a Densidade Populacional: 
Divida a população da cidade pela sua área. 
O resultado será a densidade populacional, que representa o número de habitantes 
por quilômetro quadrado. Armazene esse valor em uma variável do tipo float.
 
Calcular o PIB per Capita: 
Divida o PIB da cidade pela sua população. 
O resultado será o PIB per capita, que indica a riqueza média por pessoa na cidade. 
Armazene esse valor em uma variável do tipo float.
 
Exibir os Resultados: 
Além de exibir as informações lidas do usuário (como no nível básico), 
seu programa também deve exibir a densidade populacional e o 
PIB per capita calculados para cada cidade. 
Formate os valores de ponto flutuante com duas casas decimais.

Por exemplo:


Carta 1:                                            Carta 2:

Estado: A                                           Estado: B
Código: A01                                         Código: B02
Nome da Cidade: São Paulo                           Nome da Cidade: Rio de Janeiro
População: 12325000                                 População: 6748000
Área: 1521.11 km²                                   Área: 1200.25 km²
PIB: 699.28 bilhões de reais                        PIB: 300.50 bilhões de reais
Número de Pontos Turísticos: 50                     Número de Pontos Turísticos: 30
Densidade Populacional: 8102.47 hab/km²             Densidade Populacional: 5622.24 hab/km²
PIB per Capita: 56724.32 reais                      PIB per Capita: 44532.91 reais

    */

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

  char state,state2;
  char codigoState[6], cidade[70], codigoState2[6], cidade2[70];
  int population,pontosTuristico, population2, pontosTuristico2;
  float areaKM,PIB, areaKM2, PIB2,densidade,densidade2,PIBCapita,PIBCapita2;

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

  densidade = population/areaKM;
  PIBCapita = PIB/population;

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

  densidade2 = population2/areaKM2;
  PIBCapita2 = PIB2/population2;

  // Área para CARTA 01 exibição dos dados da cidade
  printf("\nCarta 01");
  printf("\nEstado: %c",state);
  printf("\nCodigo: %c%s",state,codigoState);
  printf("\nCidade: %s",cidade);
  printf("\nPopulacao: %d habitantes",population);
  printf("\nArea: %f km²",areaKM);
  printf("\nPIB: %f bilhões de reais",PIB);
  printf("\nPontos Turisticos: %d",pontosTuristico);
  printf("\nDensidade Populacional: %.2f hab/km²",densidade);
  printf("\nPIB per Capita: %.2f reais",PIBCapita);

  // Área para CARTA 02 exibição dos dados da cidade

  printf("\n\nCarta 02");
  printf("\nEstado: %c",state2);
  printf("\nCodigo: %c%s",state2,codigoState2);
  printf("\nCidade: %s",cidade2);
  printf("\nPopulacao: %d habitantes",population2);
  printf("\nArea: %f km²",areaKM2);
  printf("\nPIB: %f bilhões de reais",PIB2);
  printf("\nPontos Turisticos: %d",pontosTuristico2);
  printf("\nDensidade Populacional: %.2f hab/km²",densidade2);
  printf("\nPIB per Capita: %.2f reais",PIBCapita2);

return 0;
} 
