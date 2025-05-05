#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char estado1[50], estado2[50];
    char codigo[2] = {'A', 'B'};
    char nome1[50], nome2[50];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float PIB1, PIB2;
    int pontos1, pontos2;
    float densidade1, densidade2;
    float PIBC1, PIBC2;
    
    // Cadastro das Cartas:
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    printf("@@ -Cadastro de Cartas- @@\n");
    
    printf("\nCadastro da primeira carta: \n");

    printf("Qual o estado? \n");
    scanf(" %s", estado1);                          

    printf("Qual o nome? \n");
    scanf(" %s", nome1);

    printf("Número da população? \n");
    scanf(" %lu", &populacao1);

    printf("Número de área? \n");
    scanf(" %f", &area1);

    printf("Número do PIB? \n");
    scanf(" %f", &PIB1);

    printf("Números de pontos turísticos? \n");
    scanf(" %d", &pontos1);


    //Cadastro da segunda carta:
    printf("\nCadastro da segunda:\n");


    printf("Qual o estado? \n");
    scanf("%s", estado2);

    printf("Qual o nome? \n");
    scanf("%s", nome2);

    printf("Número da população? \n");
    scanf("%lu", &populacao2);

    printf("Número de área? \n");
    scanf("%f", &area2);

    printf("Número do PIB? \n");
    scanf("%f", &PIB2);

    printf("Números de pontos turísticos? \n");
    scanf("%d", &pontos2);


    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    PIBC1 = PIB1 / populacao1;
    PIBC2 = PIB2 / populacao2;

    float poder1, poder2;

    poder1 = populacao1 + area1 + PIB1 + pontos1 + PIBC1 - densidade1;
    poder2 = populacao2 + area2 + PIB2 + pontos2 + PIBC2 - densidade2;
    
    printf("\nCarta 1:\n");

    // Exibição dos Dados das Cartas:

    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf(". Estado: %s\n Código: %c01\n Nome: %s\n população: %d\n", estado1, codigo[0], nome1, populacao1);
    printf(". Área: %f km²\n PIB: %2.f\n Pontos Turistíscos: %d\n", area1, PIB1, pontos1);
    printf(". densidade: %.2f hab/km².\n PIB per capita: %.2f reais\n", densidade1, PIBC1);
    printf(". O poder de %s é: %.2f\n", nome1, poder1);

    printf("\nCarta 2:\n");

    printf(". Estado: %s\n Código: %c02\n Nome: %s\n população: %d\n", estado2, codigo[1], nome2, populacao2);
    printf(". Área: %f km²\n PIB: %2.f\n Pontos Turistíscos: %d\n", area2, PIB2, pontos2);
    printf(". densidade: %.2f hab/km²\n PIB per capita: %.2f reais\n", densidade2, PIBC2);
    printf(". O poder de %s é: %.2f\n", nome2, poder2);

    printf("\n**É HORA DO DUELO**\n");

    printf("O vencedor em População: %d\n", populacao1 > populacao2);
    printf("O vencedor em Área: %d\n", area1 > area2);
    printf("O vencedor em PIB: %d\n", PIB1 > PIB2);
    printf("O vencedor em Pontos turísticos: %d\n", pontos1 > pontos2);
    printf("O vencedor em Densidade: %d\n", densidade1 < densidade2);
    printf("O vencedor em PIB per capita: %d\n", PIBC1 > PIB2);
    printf("O vencedor em Poder: %d\n", poder1 > poder2);

    return 0;
}

