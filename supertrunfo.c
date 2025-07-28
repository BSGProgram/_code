#include <stdio.h>

/* Desafio consiste em criar 2 Cartas do jogo Super Trunfo, con seguintes dados:
Carta 1: Exemplo 1
Estado: A
Código: A01
Nome da Cidade: São Paulo
População: 12325000
Área: 1521.11 km²
PIB: 699.28 bilhões de reais
Número de Pontos Turísticos: 50
 
Carta 2: Exemplo 2
Estado: B
Código: B02
Nome da Cidade: Rio de Janeiro
População: 6748000
Área: 1200.25 km²
PIB: 300.50 bilhões de reais
Número de Pontos Turísticos: 30*/

int main() { //abertura Principal

    printf("\n\nDesafio Super Trunfo!\n\n"); // Título do desafio

    //VARIÁVEIS E TIPOS DE DADOS
      
    char estado1[20], estado2[20];
    char codigo1[10], codigo2[10];
    char nome1[20], nome2[20];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int numero1, numero2;

    printf("Dados da Carta 01\n\n"); //cabeçalho carta 01

    printf("Digite o Estado:"); //estado 01
    scanf("%s", estado1);

    printf("Digite o Código da região:"); // codigo 01
    scanf("%s", codigo1);

    printf("Digite a Cidade escolhida:"); // Cidade 01
    scanf("%s", nome1);

    printf("Digite a população da cidade:"); // População 01
    scanf("%d", &populacao1);

    printf("Digite a Área em km²:"); // Área 01
    scanf("%f", &area1);

    printf("Digite o PIB:"); // PIB 01
    scanf("%f", &pib1);

    printf("Digite a quantidade de Pontos Turísticos:");
    scanf("%d", &numero1);

    /*CABEÇALHO DA ESCRITA DA CARTA 01, COM AS ESCOLHAS REALIZADAS PELO USUÁRIO*/

    printf("\n\n*CARTA 01*\n\n"); //Cabeçalho da carta 01 

    printf("O estado escolhido foi: %s\n", estado1);
    printf("O Código da Região é: %s\n", codigo1);
    printf("O nome da cidade é: %s\n", nome1);
    printf("A população da cidade é: %d\n", populacao1);
    printf("A área da cidade é: %f km²\n", area1);
    printf("O PIB da cidade é: %f\n", pib1);
    printf("A quantidade de pontos turisticos é: %d\n\n", numero1);


    printf("Dados da carta 02: \n\n"); //Cabeçalho da Carta 02 

    printf("Digite o Estado:"); //Estado 02
    scanf("%s", estado2);

    printf("Digite o Código da região:"); //Código 02
    scanf("%s", codigo2);

    printf("Digita a cidade escolhida:"); //Cidade 02
    scanf("%s", nome2);

    printf("Digite a população da cidade:"); //População 02
    scanf("%d", &populacao2);

    printf("Qual a área da cidade escolhida:"); //Área 02
    scanf("%f", &area2);

    printf("Digite o PIB da cidade:"); //PIB 02
    scanf("%f", &pib2);

    printf("Digite a quanidade de pontos turisticos:"); //Ponto Turístico 02
    scanf("%d", &numero2);

    /*CABEÇALHO DA ESCRITA DA CARTA 02, COM AS ESCOLHAS REALIZADAS PELO USUÁRIO*/

    printf("\n\n*CARTA 02*\n\n"); 

    printf("O estado escolhido foi: %s\n", estado2);
    printf("O código da cidade escolhida é: %s\n", codigo2);
    printf("A cidade escolhida foi: %s\n", nome2);
    printf("A população da cidade é: %d\n", populacao2);
    printf("A área da cidade mede: %f km²\n", area2);
    printf("O PIB da cidade é: %f\n", pib2);
    printf("A cidade %s possui %d pontos turísticos", nome2, numero2);

    return 0;
    
}