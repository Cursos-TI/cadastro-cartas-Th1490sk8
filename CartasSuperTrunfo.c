#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  
 // Declaração das variáveis para a Carta 1
  
    char estado1;
    char codigo1[5]; // Ex: A01\0
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Declaração das variáveis para a Carta 2
  
    char estado2;
    char codigo2[5];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
  
  // Área para entrada de dados

   // Instruções para o usuário
    printf("Cadastro da Carta 1:\n"); // Aqui começa o cadastro da primeira carta

    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado1); //aqui eu usei %c por ser um unico caractere

    printf("Digite o código da carta (ex: A01): ");
    scanf(" %4s", codigo1); // aqui eu usei %4s para limitar a entrada a 4 caracteres

    printf("Digite o nome da cidade: ");
    scanf(" %49s", nomeCidade1); // aqui eu usei %49s para limitar a entrada a 49 caracteres

    printf("Digite a população: ");
    scanf("%d", &populacao1); // aqui eu usei %d por ser um numero inteiro

    printf("Digite a área (em km²): ");
    scanf("%f", &area1); // aqui eu usei %f por ser um numero com ponto flutuante

    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    printf("\nCadastro da Carta 2:\n"); // Aqui começa o cadastro da segunda carta

    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Digite o código da carta (ex: B02): ");
    scanf(" %4s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf(" %49s", nomeCidade2);

    printf("Digite a população: ");
    scanf("%d", &populacao2);

    printf("Digite a área (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);


  // Área para exibição dos dados da cidade

   // Exibição dos dados cadastrados
    printf("\nCarta 1:\n"); // Aqui começa a exibição da primeira carta

    printf("Estado: %c\n", estado1);

    printf("Código: %s\n", codigo1);

    printf("Nome da Cidade: %s\n", nomeCidade1);

    printf("População: %d\n", populacao1);

    printf("Área: %.2f km²\n", area1);

    printf("PIB: %.2f bilhões de reais\n", pib1);

    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);


    printf("\nCarta 2:\n"); // Aqui começa a exibição da segunda carta

    printf("Estado: %c\n", estado2);

    printf("Código: %s\n", codigo2);

    printf("Nome da Cidade: %s\n", nomeCidade2);

    printf("População: %d\n", populacao2);

    printf("Área: %.2f km²\n", area2);

    printf("PIB: %.2f bilhões de reais\n", pib2);

    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    


return 0;
} 
