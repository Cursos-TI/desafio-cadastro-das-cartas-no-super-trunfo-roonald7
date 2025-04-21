#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

typedef struct Carta {
    char estado;
    char codigo[5];
    char nomeDaCidade[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
} Carta;

int main() {
    Carta carta1, carta2;

    // Inserindo os dados da primeira carta
    printf("\nVamos cadastrar 2 cartas de cidades!\n");
    printf("Vamos começar com a primeira carta!\n");
    printf("Dígite a sigla do Estado: ");
    scanf(" %c", &carta1.estado);
    printf("Dígite o código da cidade: ");
    scanf(" %s", carta1.codigo);
    printf("Dígite o nome da cidade: ");
    scanf(" %s", carta1.nomeDaCidade);
    printf("Dígite a população da cidade: ");
    scanf(" %d", &carta1.populacao);
    printf("Dígite a área da cidade: ");
    scanf(" %f", &carta1.area);
    printf("Dígite o PIB da cidade: ");
    scanf(" %f", &carta1.pib);
    printf("Dígite o número de pontos turísticos da cidade: ");
    scanf(" %d", &carta1.pontos_turisticos);

    // Inserindo os dados da segunda carta
    printf("Vamos cadastrar a segunda carta!\n");
    printf("Dígite a sigla do Estado: ");
    scanf(" %c", &carta2.estado);
    printf("Dígite o código da cidade: ");
    scanf(" %s", carta2.codigo);
    printf("Dígite o nome da cidade: ");
    scanf(" %s", carta2.nomeDaCidade);
    printf("Dígite a população da cidade: ");
    scanf(" %d", &carta2.populacao);
    printf("Dígite a área da cidade: ");
    scanf(" %f", &carta2.area);
    printf("Dígite o PIB da cidade: ");
    scanf(" %f", &carta2.pib);
    printf("Dígite o número de pontos turísticos da cidade: ");
    scanf(" %d", &carta2.pontos_turisticos);

    // Exibindo os dados cadastrados da Primeira Carta
    printf("\nDados da primeira carta:\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Código: %s\n", carta1.codigo);
    printf("Nome da Cidade: %s\n", carta1.nomeDaCidade);
    printf("População: %d\n", carta1.populacao);
    printf("Área: %.2f\n", carta1.area);
    printf("PIB: %.2f\n", carta1.pib);
    printf("Pontos Turísticos: %d\n", carta1.pontos_turisticos);

    // Exibindo os dados cadastrados da Segunda Carta
    printf("\nDados da segunda carta:\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Código: %s\n", carta2.codigo);
    printf("Nome da Cidade: %s\n", carta2.nomeDaCidade);
    printf("População: %d\n", carta2.populacao);
    printf("Área: %.2f\n", carta2.area);
    printf("PIB: %.2f\n", carta2.pib);
    printf("Pontos Turísticos: %d\n", carta2.pontos_turisticos);

    return 0;
}
