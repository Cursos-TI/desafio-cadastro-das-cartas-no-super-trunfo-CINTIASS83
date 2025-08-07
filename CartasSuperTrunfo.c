#include <stdio.h>
// GESTÃO TECNOLOGIA DA INFORMAÇÃO
// NIVEL NOVATO: DESAFIO SUPER-TRUNFO
// ALUNA: CINTIA DA SILVA E SILVA
// MATRICULA: 202507032682

int main() {
    
// Variáveis para a primeira carta
char codigo1[4];
char estado1[50]; 
char capital1[50];
int populacao1; 
float area1;
float pib1;
int pontosTuristicos1;

// Leitura dos dados da primeira carta
printf("Digite o código da primeira carta: ");
scanf("%s", &codigo1);

printf("Digite o estado da primeira carta:");
scanf("%s", &estado1);

printf("Digite a capital da primeira carta: ");
scanf("%s", &capital1);

printf("Digite a população da primeira carta: ");
scanf("%d", &populacao1);

printf("Digite a área da primeira carta: ");
scanf("%f", &area1);

printf("Digite o PIB da primeira carta: ");
scanf("%f", &pib1);

printf("Digite os pontos turisticos da primeira carta: ");
scanf("%d", &pontosTuristicos1);

// Imprimindo os dados da primeira carta
printf("======= DADOS DA CARTA 1 =======:\n");

printf("Codigo: %s\n", codigo1); //coloquei como primeiro item pra ficar mais organizado

printf("Estado: %s\n", estado1);

printf("Capital: %s\n", capital1);

printf("População: %d milhões\n", populacao1);

printf("Área: %.2f km²\n", area1);

printf("PIB: %.2f bilhões de reais\n", pib1);

printf("Quantidade de Pontos Turísticos: %d aprox.\n", pontosTuristicos1); //dados aproximados
//fim dados primeira carta
printf("\n")

printf("=============================================\n"); 
printf("\n");

// Variáveis para a segunda carta
char codigo2[4];
char estado2[50]; 
char capital2[50];
int populacao2; 
float area2;
float pib2;
int pontosTuristicos2;

// Leitura dos dados da segunda carta
printf("Digite o código da segunda carta: ");
scanf("%s", &codigo2);

printf("Digite o estado da segunda carta:");
scanf("%s", &estado2);

printf("Digite a capital da segunda carta: ");
scanf("%s", &capital2);

printf("Digite a população da segunda carta: ");
scanf("%d", &populacao2);

printf("Digite a área da segunda carta: ");
scanf("%f", &area2);

printf("Digite o PIB da segunda carta: ");
scanf("%f", &pib2);

printf("Digite os pontos turisticos da segunda carta: ");
scanf("%d", &pontosTuristicos2);

// Imprimindo os dados segunda carta
printf("======= DADOS DA CARTA 2 =======:\n");

printf("Codigo: %s\n", codigo2); //coloquei como primeiro item pra ficar mais organizado

printf("Estado: %s\n", estado2);

printf("Capital: %s\n", capital2);

printf("População: %d bilhões\n", populacao2);

printf("Área: %.2f km²\n", area2);

printf("PIB: %.2f bilhões de reais\n", pib2);

printf("Quantidade de Pontos Turísticos: %d aprox.\n", pontosTuristicos2);//dados aproximado
//fim dados da segunda carta


return 0;
}