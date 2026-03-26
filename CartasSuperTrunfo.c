#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  int populacao,num_ponto_tur;
  float area,pib;
  char codigo[3],cidade[100], estado[2];
  
  
  // Área para entrada de dados
  printf("Entre com os Dados da Carta 1\n");
  printf("Codigo da Carta: ");scanf("%s",codigo);printf("\n");
  printf("Entre com estado (sigla) e cidade: \n"); 
  printf("Estado (sigla com dois caracteres): ");
  scanf("%s",estado);
  printf("\n");  
  printf("Cidade : ");
  scanf("%s",cidade);
  printf("\n");  
  printf("Entre com Dados Adicionais \n"); 
  printf("populacao: ");scanf("%i",&populacao);printf("\n");
  printf("Numero Pontos Turisticos: ");scanf("%i",&num_ponto_tur);printf("\n");
  printf("Área: ");scanf("%f",&area);printf("\n");
  printf("PIB: ");scanf("%f",&pib);printf("\n");
  // Área para exibição dos dados da cidade
  printf("Carta 1 - Codigo: %s\n",codigo);
  printf("Cidade: %s e Estado: %s \n",cidade,estado);
  printf("Populacao: %i e Num Pontos Turisticos: %i \n", populacao, num_ponto_tur );
  printf("Area: %f e PIB: %f \n", area, pib );
 








  // Área para entrada de dados
  printf("Entre com os Dados da Carta 2\n");
  printf("Codigo da Carta: ");scanf("%s",codigo);printf("\n");
  printf("Entre com estado (sigla) e cidade: \n"); 
  printf("Estado (sigla com dois caracteres): ");
  scanf("%s",estado);
  printf("\n");  
  printf("Cidade : ");
  scanf("%s",cidade);
  printf("\n");  
  printf("Entre com Dados Adicionais \n"); 
  printf("populacao: ");scanf("%i",&populacao);printf("\n");
  printf("Numero Pontos Turisticos: ");scanf("%i",&num_ponto_tur);printf("\n");
  printf("Área: ");scanf("%f",&area);printf("\n");
  printf("PIB: ");scanf("%f",&pib);printf("\n");
  // Área para exibição dos dados da cidade
  printf("Carta 1 - Codigo: %s\n",codigo);
  printf("Cidade: %s e Estado: %s \n",cidade,estado);
  printf("Populacao: %i e Num Pontos Turisticos: %i \n", populacao, num_ponto_tur );
  printf("Area: %f e PIB: %f \n", area, pib );
 
return 0;
} 
