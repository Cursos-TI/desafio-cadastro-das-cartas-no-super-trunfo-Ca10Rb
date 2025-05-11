#include <stdio.h>

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
    
    int escolha;

    printf("\n Comparação das cartas: \n");
    
    printf("Escolha um atributo para comparar\n");

    printf("1. População\n");
    printf("2. Área\n");
    printf("3. Pib\n");
    printf("4. Pontos turísticos\n");
    printf("5. Densidade populacional\n");
    printf("6. Pib per capita\n");
    printf("7. Super Poder\n");
    scanf("%d", &escolha);

    switch (escolha)
    {

    case 1:
        if (populacao1 > populacao2)
    {
        printf("População: Carta 1 venceu\n");
    } 
    else if (populacao1 < populacao2)
    {
        printf("População: Carta 2 venceu\n");
    }
    else 
    {
    printf("Houve um empate\n");
    }
    break;
    

    case 2:
       if (area1 > area2)
    {
        printf("Área: Carta 1 venceu\n");
    } 
    else if (area1 < area2)
    {
        printf("Área: Carta 2 venceu\n");
    }
    else 
    {
    printf("Houve um empate\n");
    }
    break;


    case 3:
       if (pib1 > pib2)
    {
        printf("PIB: Carta 1 venceu\n");
    } 
    else if (pib1 < pib2)
    {
        printf("PIB: Carta 2 venceu\n");
    }
    else 
    {
    printf("Houve um empate\n");
    }
    break;


    case 4:
      if (pontosturisticos1 > pontosturisticos2)
    {
        printf("Pontos turísticos: Carta 1 venceu\n");
    } 
    else if (pontosturisticos1 < pontosturisticos2)
    {
        printf("Pontos turísticos: Carta 2 venceu\n");
    }
    else 
    {
    printf("Houve um empate\n");
    }
    break;


    case 5:
        if (densidadepopinvertida1 > densidadepopinvertida2)
    {
        printf("Densidade populacional: Carta 1 venceu\n");
    } 
    else if (densidadepopinvertida1 < densidadepopinvertida2)
    {
        printf("Densidade populacional: Carta 2 venceu\n");
    }
    else 
    {
    printf("Houve um empate\n");
    }
    break;

    case 6:
        if (pibpercapita1 > pibpercapita2)
   {
        printf("Pib per capita: Carta 1 venceu\n");
   } 
   else if (pibpercapita1 < pibpercapita2)
   {
        printf("Pib per capita: Carta 2 venceu\n");
   }
   else 
   {
    printf("Houve um empate\n");
   }   
   break;

    case 7:
         if (superpoder1 > superpoder2)
   {
    printf("Superpoder: Carta 1 venceu\n");
   } 
   else if (superpoder1 < superpoder2)
   {
    printf("Superpoder: Carta 2 venceu\n");
   }
   else 
   {
    printf("Houve um empate\n");
   }
   break;

    default:
    printf("opção invalida\n");
    break;

    }

    return 0;
}

