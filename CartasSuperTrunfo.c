#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char estado[20];
    char codigoDaCarta[20];
    char cidade[20];
    int populacao;
    float area;
    float pib;
    int numeroDePontosTuristicos; 
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Digite o nome do estado: \n");
    scanf(" %c ", &estado);

    printf("Digite o codigo da carta: \n");
    scanf(" %c ", &codigoDaCarta);

    printf("Digite o nome da cidade: \n");
    scanf(" %c ", &cidade);

    printf("Digite a população: \n");
    scanf(" %d ", &populacao);

    printf("Digite a aréa: \n");
    scanf(" %f ", &area);

    printf("Digite o pib: \n");
    scanf(" %f ", &pib);
    
    printf("Digite o número de ponto turisticos: \n");
    scanf(" %d ", &numeroDePontosTuristicos);
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
