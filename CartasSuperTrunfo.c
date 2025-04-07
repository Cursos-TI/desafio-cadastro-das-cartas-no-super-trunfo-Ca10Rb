#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    #include <stdio.h>
        printf("Desafio cartas Super Trunfo nível novato\n");

        // Primeira Carta
        int carta1;
        char estado1;
        char codigocarta1[5]; 
        char nomedacidade1[40];
        int populacao1;
        float area1; 
        float pib1;
        int pontosturisticos1;
        float densidadepopulacional1;
        float pibpercapita1;

        // Segunda Carta
        int carta2;
        char estado2;
        char codigocarta2[5];
        char nomedacidade2[40];
        int populacao2;
        float area2;
        float pib2;
        int pontosturisticos2;
        float densidadepopulacional2;
        float pibpercapita2;

    // Leitura da primeira carta
    printf("Digite uma letra de A-H: \n");
    scanf("%c", &estado1);
    
    printf("Digite o código do estado: \n");
    scanf("%s", &codigocarta1);
    
    printf("Digite o nome da cidade: \n");
    scanf("%s", &nomedacidade1);
    
    printf("Digite o número de habitante na cidade: \n");
    scanf("%d", &populacao1);
    
    printf("Digite a área da cidade em Km²: \n");
    scanf("%f", &area1);
    
    printf("Digite o produto interno bruto da ciadade (PIB): \n");
    scanf("%f", &pib1);
    
    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontosturisticos1);
    
    densidadepopulacional1 = (float)(populacao1 / area1);

    pibpercapita1 = (float)(pib1 / populacao1);

    // Leitura da segunda carta
    printf("Digite uma letra de A-H: \n");
    scanf("%s", &estado2);
    
    printf("Digite o código do estado: \n");
    scanf("%s", &codigocarta2);
    
    printf("Digite o nome da cidade: \n");
    scanf("%s", &nomedacidade2);
    
    printf("Digite o número de habitante na cidade: \n");
    scanf("%d", &populacao2);
    
    printf("Digite a área da cidade em Km²: \n");
    scanf("%f", &area2);
    
    printf("Digite o produto interno bruto da cidade (PIB): \n");
    scanf("%f", &pib2);
    
    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontosturisticos2);
    
    densidadepopulacional2 = (float)(populacao2 / area2);

    pibpercapita2 = (float)(pib2 / populacao2);


    // Resultado Carta 1
    printf("\nCarta 1 \n");
    
    printf("Estado: %c\n", estado1);
    
    printf("Código da carta: %s\n", codigocarta1);
    
    printf("Cidade: %s\n", nomedacidade1);
    
    printf("Número de habitantes: %d\n", populacao1);
    
    printf("Área em Km²: %f\n", area1);
    
    printf("Produto interno bruto (PIB): %f\n", pib1);
    
    printf("Quantidade de pontos turísticos: %d\n", pontosturisticos1);
    
    printf("Densidade populacional: %f\n", densidadepopulacional1);

    printf("Pib per capita: %f\n", pibpercapita1);

    // Resultado da Carta 2
    printf("\nCarta 2 \n");
    
    printf("Estado: %c\n", estado2);
    
    printf("Código da carta: %s\n", codigocarta2);
    
    printf("Cidade: %s\n", nomedacidade2);
    
    printf("Número de habitantes: %d\n", populacao2);
    
    printf("Área em Km²: %f\n", area2);
    
    printf("Produto interno bruto (PIB): %f\n", pib2);
    
    printf("Quantidade de pontos turísticos: %d\n", pontosturisticos2);

    printf("Densidade populacional: %f\n", densidadepopulacional2);

    printf("Pib per capita: %f\n", pibpercapita2);
    
    return 0;
}
