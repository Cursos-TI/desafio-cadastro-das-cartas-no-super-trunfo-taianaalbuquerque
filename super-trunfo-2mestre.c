#include <stdio.h>

int main(){

    int pontos1, pontos2, escolhaAtributo1, escolhaAtributo2, comparacaoAtributo1, comparacaoAtributo2; 
    unsigned long int populacao1, populacao2; 
    char estado1, estado2, codigo1[10], codigo2[10], cidade1[20], cidade2[20];
    float area1, area2, pib1, pib2, dens1, dens2;

    
    // Início das instruções para cadastro de 2 cartas no jogo Super Trunfo - Estados do Brasil

    printf("Vamos começar o jogo Super Trunfo cadastrando as 2 cartas do jogador.\n");

    printf("\nJogador, preencha os dados abaixo com as informações da CARTA 1:\n");

    // O Estado é informado na carta por uma letra entre A - H
    // Espaço antes do % para evitar erro de leitura por dados no buffer
    printf("O Estado: ");
    scanf(" %c", &estado1);

    // O Código da Carta é a junção da letra que representa o Estado e um número de 01 a 04
    // Limitando a quantidade de caracteceres (%9s) que pode ser fornecida pelo usuário para garantir bom funcionamento do programa
    printf("O Código da Carta: ");
    scanf("%9s", codigo1);

    // Informações fornecidas na carta
    printf("O nome da cidade: ");
    scanf("%19s", cidade1);

    printf("População habitacional: ");
    scanf("%lu", &populacao1);

    printf("Área (em km²): ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Quantidade de pontos turísticos existentes: ");
    scanf("%d", &pontos1);

    // Finalização do cadastro da primeira carta
    printf("\nAssim FINALIZAMOS o cadastro da CARTA 1.\n");


    // Início do cadastro da segunda carta
    printf("\nVamos seguir para o cadastramento da CARTA 2:\n");

    // Mesmas informações da Carta 1
    printf("O Estado: ");
    scanf(" %c", &estado2);

    printf("O Código da Carta: ");
    scanf("%9s", codigo2);

    printf("O nome da cidade: ");
    scanf("%19s", cidade2);

    printf("População habitacional (em milhões): ");
    scanf("%lu", &populacao2);

    printf("Área (em km²): ");
    scanf(" %f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Quantidade de pontos turísticos existentes: ");
    scanf("%d", &pontos2);
    
    // Fim do cadastramento da segunda carta
    printf("\nCADASTROS DAS CARTAS FINALIZADOS COM SUCESSO!\n");

    // Cálculo da densidade populacional das cartas
    dens1 = (float) populacao1 / area1;
    dens2 = (float) populacao2 / area2;

    // Visualização dos dados das cartas cadastradas
    printf("\nJogador, veja abaixo os dados das suas cartas:\n");

    printf("\nCARTA 1\n");
    printf("Estado: %c\n", estado1);
    printf("Código da Carta: %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %lu milhões de habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: R$ %.2f\n", pib1);
    printf("Quantidade de pontos turísticos: %d\n", pontos1);
    printf("Densidade populacional: %.2f hab/km²\n", dens1);

    printf("\nCARTA 2\n");
    printf("Estado: %c\n", estado2);
    printf("Código da Carta: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %lu milhões de habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2f\n", pib2);
    printf("Quantidade de pontos turísticos: %d\n", pontos2);
    printf("Densidade populacional: %.2f hab/km²\n", dens2);

    // Nível Mestre: Escolha de 2 atributos para comparação com menu interativo

    // Menu para escolha do primeiro atributo
    printf("\n### ESCOLHA O PRIMEIRO ATRIBUTO QUE SERÁ COMPARADO! ###\n");
    printf("Opção 1: População\n");
    printf("Opção 2: Área\n");
    printf("Opção 3: PIB\n");
    printf("Opção 4: Quantidade de pontos turísticos\n");
    printf("Opção 5: Densidade populacional\n");
    printf("Escolha a opção: ");
    scanf("%d", &escolhaAtributo1);

    //Comparação primeiro atributo
    //Switch para definição do primeiro atributo escolhido
    switch (escolhaAtributo1){
        case 1:
        printf("\nATRIBUTO ESCOLHIDO: População\n");
        printf("\nPopulações: %lu e %lu milhões de habitantes\n", populacao1, populacao2);
            comparacaoAtributo1 = populacao1 > populacao2 ? 1 : 0;
        break;
        case 2:
        printf("\nATRIBUTO ESCOLHIDO: Área\n");
        printf("\nÁreas: %.2f e %.2f km²\n", area1, area2);
            comparacaoAtributo1 = area1 > area2 ? 1 : 0;
        break;
        case 3:
        printf("\nATRIBUTO ESCOLHIDO: PIB\n");
        printf("\nPIBs: R$ %.2f e R$ %.2f\n", pib1, pib2);
            comparacaoAtributo1 = pib1 > pib2 ? 1 : 0;
        break;
        case 4:
        printf("\nATRIBUTO ESCOLHIDO: Quantidade de pontos turísticos\n");
        printf("\nQuantidade de pontos turísticos: %d e %d\n", pontos1, pontos2);
            comparacaoAtributo1 = pontos1 > pontos2 ? 1 : 0;
        break;
        case 5:
        printf("\nATRIBUTO ESCOLHIDO: Densidade populacional\n");
        printf("\nDensidades populacionais: %.2f e %.2f hab/km²", dens1, dens2);
            comparacaoAtributo1 = dens1 < dens2 ? 1 : 0;
        break;
        default:
        printf("\nOpção inválida!\n");
        break;
        }

    // Menu para escolha do segundo atributo
    printf("\n### ESCOLHA O SEGUNDO ATRIBUTO QUE SERÁ COMPARADO! ###\n");
    printf("**Atenção: Você deve escolher um atributo diferente do primeiro!**\n");
    printf("Opção 1: População\n");
    printf("Opção 2: Área\n");
    printf("Opção 3: PIB\n");
    printf("Opção 4: Quantidade de pontos turísticos\n");
    printf("Opção 5: Densidade populacional\n");
    printf("Escolha a opção: ");
    scanf("%d", &escolhaAtributo2);

    if (escolhaAtributo1 == escolhaAtributo2){
        printf("\nVocê escolheu o mesmo atributo. Recomece o jogo.\n");
    } else {
        switch (escolhaAtributo2){
            case 1:
            printf("\nATRIBUTO ESCOLHIDO: População\n");
            printf("\nPopulações: %lu e %lu milhões de habitantes\n", populacao1, populacao2);
                comparacaoAtributo2 = populacao1 > populacao2 ? 1 : 0;
            break;
            case 2:
            printf("\nATRIBUTO ESCOLHIDO: Área\n");
            printf("\nÁreas: %.2f e %.2f km²\n", area1, area2);
                comparacaoAtributo2 = area1 > area2 ? 1 : 0;
            break;
            case 3:
            printf("\nATRIBUTO ESCOLHIDO: PIB\n");
            printf("\nPIBs: R$ %.2f e R$ %.2f\n", pib1, pib2);
                comparacaoAtributo2 = pib1 > pib2 ? 1 : 0;
            break;
            case 4:
            printf("\nATRIBUTO ESCOLHIDO: Quantidade de pontos turísticos\n");
            printf("\nQuantidade de pontos turísticos: %d e %d\n", pontos1, pontos2);
                comparacaoAtributo2 = pontos1 > pontos2 ? 1 : 0;
            break;
            case 5:
            printf("\nATRIBUTO ESCOLHIDO: Densidade populacional\n");
            printf("\nDensidades populacionais: %.2f e %.2f hab/km²", dens1, dens2);
                comparacaoAtributo2 = dens1 < dens2 ? 1 : 0;
            break;
            default:
            printf("\nOpção inválida!\n");
            break;
            }
        
        }

        if (comparacaoAtributo1 && comparacaoAtributo2){
            printf("Cidades: %s e %s\n", cidade1, cidade2);
            printf("Carta 1 somou 2 atributos.\n");
            printf("\n### CARTA 1 VENCEU! ###\n");
        } else if (comparacaoAtributo1 != comparacaoAtributo2){
            printf("Cidades: %s e %s\n", cidade1, cidade2);
            printf("Carta 1 somou 1 atributo e Carta 2 somou 1 atributo.\n");
            printf("\n### O JOGO EMPATOU! ###\n");
        } else {
            printf("Cidades: %s e %s\n", cidade1, cidade2);
            printf("Carta 2 somou 2 atributos.\n");
            printf("\n### CARTA 2 VENCEU! ###\n");
        }



    return 0;

}