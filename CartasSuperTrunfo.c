#include <stdio.h>

int main() {
/*
ALUNA: CINTIA DA SILVA E SILVA
CURSO: GESTAO TECNOLOGIA DA INFORMAÇÃO
DESAFIO SUPER TRUNFO: FUNDAMENTOS E TECNICAS AVANÇADAS
NIVEL AVENTUREIRO
*/

// Variáveis para a primeira carta do jogo
char codigo1[4], estado1[50], capital1[50];
int populacao1, pontosTuristicos1;
float area1, pib1, densPopulacional1, pibperCapta1;


// Leitura dos dados da primeira carta do jogo
printf("Digite o código da primeira carta: "); //Inicial do Estado e Numero da Carta
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
printf("****** DADOS DA CARTA 1 ******\n");

printf("Codigo: %s\n", codigo1); //coloquei como primeiro item pra ficar mais organizado como o jogo real

printf("Estado: %s\n", estado1);

printf("Capital: %s\n", capital1);

printf("População: %.3d milhões\n", populacao1);

printf("Área: %.3f km²\n", area1);

printf("PIB: %.3f bilhões de reais\n", pib1);

printf("Quantidade de Pontos Turísticos: %d aprox.\n", pontosTuristicos1); //dados aproximados


// calculo densidade populacional:
// dividir população pela area da cidade
densPopulacional1 = (float) populacao1 / area1; 
// calculo pib per capta:
// dividr pib pela população
pibperCapta1 = (float) pib1 / populacao1; 

//imprimindo resultados a partir do calculo dos dois dados acima:
printf("A Densidade Populacional é: %.3f hab/km²\n", densPopulacional1);
printf("O Pib per Capta é: %.3f mil reais\n", pibperCapta1);

// fim dos dados primeira carta.
printf("=============================================\n"); 

// Variáveis para a segunda carta do jogo
char codigo2[4], estado2[50] , capital2[50];
int populacao2, pontosTuristicos2;
float area2, pib2, densPopulacional2, pibperCapta2;


// Leitura dos dados da segunda carta
printf("Digite o código da segunda carta: "); //Inicial do Estado e Numero da Carta
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
printf("****** DADOS DA CARTA 2 ******\n");

printf("Codigo: %s\n", codigo2); //coloquei como primeiro item pra ficar mais organizado como o jogo real

printf("Estado: %s\n", estado2);

printf("Capital: %s\n", capital2);

printf("População: %.3d bilhões\n", populacao2);

printf("Área: %.3f km²\n", area2);

printf("PIB: %.3f bilhões de reais\n", pib2);

printf("Quantidade de Pontos Turísticos: %d aprox.\n", pontosTuristicos2); //dados aproximado


// calculo densidade populacional:
// dividir população pela area da cidade
densPopulacional2 = (float) populacao2 / area2; 
// calculo pib per capta:
// dividr pib pela população
pibperCapta2= (float) pib2 / populacao2; 

// imprimindo resultados a partir do calculo dos dados acima
printf("Densidade Populacional: %.3f hab/km²\n", densPopulacional2);
printf("PIB per Capta: %.3f mil reais\n", pibperCapta2);


// fim dos dados 2a carta
printf("=============================================\n"); 

return 0;

}