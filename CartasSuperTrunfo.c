

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.



    #include <stdio.h>
    #include <stdlib.h>
    #include <time.h>
 

    int main () {

        // Primeira Carta
        int carta1;
        char estado1;
        char codigocarta1[5]; 
        char nomedacidade1[40];
        long int populacao1;
        float area1; 
        float pib1;
        int pontosturisticos1;
        float densidadepopulacional1;
        float pibpercapita1;
        float superpoder1; 
        float densidadepopinvertida1; // Essa vai ser para o calculo do superpoder
    
        // Segunda Carta
        int carta2;
        char estado2;
        char codigocarta2[5];
        char nomedacidade2[40];
        long int populacao2;
        float area2;
        float pib2;
        int pontosturisticos2;
        float densidadepopulacional2;
        float pibpercapita2;
        float superpoder2;
        float densidadepopinvertida2;
    
    // Leitura da primeira carta
    printf("Digite uma letra de A-H: \n");
    scanf("%c", &estado1);
    
    printf("Digite o código do estado: \n");
    scanf("%s", &codigocarta1);
    
    printf("Digite o nome da cidade: \n");
    scanf("%s", &nomedacidade1);
    
    printf("Digite o número de habitante na cidade: \n");
    scanf("%ld", &populacao1);
    
    printf("Digite a área da cidade em Km²: \n");
    scanf("%f", &area1);
    
    printf("Digite o produto interno bruto da ciadade (PIB): \n");
    scanf("%f", &pib1);
    
    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontosturisticos1);
    
    densidadepopulacional1 = (float)(populacao1 / area1);
    
    densidadepopinvertida1 = (float)(area1 / populacao1); 
    
    pibpercapita1 = (float)(pib1 / populacao1);
    
    superpoder1 = (float)(populacao1 + area1 + pib1 + pontosturisticos1 + densidadepopinvertida1 + pibpercapita1);
    
    
    // Leitura da segunda carta
    printf("Digite uma letra de A-H: \n");
    scanf("%s", &estado2);
    
    printf("Digite o código do estado: \n");
    scanf("%s", &codigocarta2);
    
    printf("Digite o nome da cidade: \n");
    scanf("%s", &nomedacidade2);
    
    printf("Digite o número de habitante na cidade: \n");
    scanf("%ld", &populacao2);
    
    printf("Digite a área da cidade em Km²: \n");
    scanf("%f", &area2);
    
    printf("Digite o produto interno bruto da cidade (PIB): \n");
    scanf("%f", &pib2);
    
    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontosturisticos2);
    
    densidadepopulacional2 = (float)(populacao2 / area2);
    
    densidadepopinvertida2 = (float)(area2 / populacao2);
    
    pibpercapita2 = (float)(pib2 / populacao2);
    
    superpoder2 = (float)(populacao2 + area2 + pib2 + pontosturisticos2 + densidadepopinvertida2 + pibpercapita2);
    
    // Resultado Carta 1
    printf("\nCarta 1 \n");
    
    printf("Estado: %c\n", estado1);
    
    printf("Código da carta: %s\n", codigocarta1);
    
    printf("Cidade: %s\n", nomedacidade1);
    
    printf("Número de habitantes: %ld\n", populacao1);
    
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
    
    printf("Número de habitantes: %ld\n", populacao2);
    
    printf("Área em Km²: %f\n", area2);
    
    printf("Produto interno bruto (PIB): %f\n", pib2);
    
    printf("Quantidade de pontos turísticos: %d\n", pontosturisticos2);
    
    printf("Densidade populacional: %f\n", densidadepopulacional2);
    
    printf("Pib per capita: %f\n", pibpercapita2);
    

    // Comparação das cartas
    
    int escolha1, escolha2;
    int resultado1, resultado2;

    printf("\n Comparação das cartas: \n");
    
    printf("Escolha o primeiro atributo para comparar\n");

    printf("1. População\n");
    printf("2. Área\n");
    printf("3. Pib\n");
    printf("4. Pontos turísticos\n");
    printf("5. Densidade populacional\n");
    printf("6. Pib per capita\n");
    printf("7. Super Poder\n");
    scanf("%d", &escolha1);

    switch (escolha1)
    {

    case 1:
        printf("Você escolheu população\n");
        resultado1 = populacao1 > populacao2 ? 1 : 0;
    break;
    

    case 2:
        printf("Você escolheu Área\n");
        resultado1 = area1 > area2 ? 1 : 0;
    break;


    case 3:
        printf("Você escolheu Pib\n");
        resultado1 = pib1 > pib2 ? 1 : 0;
    break;


    case 4:
        printf("Você escolheu pontosturísticos\n");
        resultado1 = pontosturisticos1 > pontosturisticos2 ? 1 : 0;
    break;


    case 5:
        printf("Você escolheu densidade populacional\n");
        resultado1 = densidadepopinvertida1 > densidadepopinvertida2 ? 1 : 0;
    break;

    case 6:
        printf("Você escolheu pib per capita\n");
        resultado1 = pibpercapita1 > pibpercapita2 ? 1 : 0;
   break;

    case 7:
        printf("Você escolheu Super poder\n");
        resultado1 = superpoder1 > superpoder2 ? 1 : 0;
   break;

    default:
    printf("opção invalida\n");
    break;

    }

    printf("Escolha o segundo atributo para comparar\n");
    printf("O segundo atributo deve ser diferente do primeiro\n");

    printf("1. População\n");
    printf("2. Área\n");
    printf("3. Pib\n");
    printf("4. Pontos turísticos\n");
    printf("5. Densidade populacional\n");
    printf("6. Pib per capita\n");
    printf("7. Super Poder\n");
    scanf("%d", &escolha2);

    if (escolha1 == escolha2)
    {
       printf("Você escolheu o mesmo atributo\n");
    }
    else 
    {
    
    switch (escolha2)
    {

    case 1:
        printf("Você escolheu população\n");
        resultado2 = populacao1 > populacao2 ? 1 : 0;
    break;
    

    case 2:
        printf("Você escolheu Área\n");
        resultado2 = area1 > area2 ? 1 : 0;
    break;


    case 3:
        printf("Você escolheu Pib\n");
        resultado2 = pib1 > pib2 ? 1 : 0;
    break;


    case 4:
        printf("Você escolheu pontos turísticos\n");
        resultado2 = pontosturisticos1 > pontosturisticos2 ? 1 : 0;
    break;


    case 5:
        printf("Você escolheu densidade populacional\n");
        resultado2 = densidadepopinvertida1 > densidadepopinvertida2 ? 1 : 0;
    break;

    case 6:
        printf("Você escolheu pib per capita\n");
        resultado2 = pibpercapita1 > pibpercapita2 ? 1 : 0;
    break;

    case 7:
        printf("Você escolheu Super poder\n");
        resultado2 = superpoder1 > superpoder2 ? 1 : 0;
   break;

    default:
    printf("opção invalida\n");
    break;

    }

    }

    if (resultado1 && resultado2)
    {
        printf("Parabéns, você venceu\n");
    } 
    else if (resultado1 != resultado2)
    {
        printf("Houve um empate\n");
    }
    else 
    {
        printf("Infelizmente, você perdeu\n");
    }
    
    
    return 0;
}

 