#include <stdio.h>

char estado = 'A', estado1 = 'B';
char Cod_carta[3] = "021", Cod_carta1[3] = "011";
char Nome_Cidade[20] = "Rio-de-Janeiro", Nome_Cidade1[20] = "São_Paulo";
int populaçao = 6748000, populaçao1 = 12325000, N_Turisticos = 30, N_Turisticos1 = 50;
float area = 1200.25, area1 = 1521.11, pib = 300.50, pib1 = 699.28;
float DP, PPC, DP1, PPC1;
double SP1, SP2;

int main() {

    // Cálculo da densidade populacional e PIB per capita para a primeira carta
    DP = (float) populaçao / area;
    PPC = (pib * 1000000000) / populaçao;
    DP1 = (float) populaçao1 / area1;
    PPC1 = (pib1 * 1000000000) / populaçao1;
    
    // Cálculo do Super Poder para as cartas
    float inversoDS = 1.0f / DP;
    SP1 = (double) populaçao + area + pib + N_Turisticos + PPC + inversoDS;

    float inversoDS1 = 1.0f / DP1;
    SP2 = (double) populaçao1 + area1 + pib1 + N_Turisticos1 + PPC1 + inversoDS1;

    //Entrada de dados para a primeira carta

    /*printf("Entrada de dados Card.1 :\n");

    printf("Digite uma sigla de A a H :\n");
    scanf(" %c", &estado);

    printf("Digite o Codigo da carta :\n");
    scanf("%s", Cod_carta);

    printf("Digite o nome da cidade :\n");
    scanf("%s", Nome_Cidade);

    printf("Digite a quantidade de habitantes :\n");
    scanf("%d", &populaçao);

    printf("Digite a tamanho da area da cidade :\n");
    scanf("%f", &area);

    printf("Digite o pib da cidade :\n");
    scanf("%f", &pib);   

    printf("Digite a quantidade de pontos turisticos :\n");
    scanf("%d", &N_Turisticos);

    printf("Registro da 1° Carta feito com sucesso \n");

    //Entrada de dados para a segunda carta

    printf("Entrada de dados Card.2 :\n");

    printf("Digite uma sigla de A a H :\n");
    scanf(" %c", &estado1);
    printf("Digite o Codigo da carta :\n");
    scanf("%s", Cod_carta1);
    printf("Digite o nome da cidade :\n");
    scanf("%s", Nome_Cidade1);
    printf("Digite a quantidade de habitantes :\n");
    scanf("%d", &populaçao1);
    printf("Digite a tamanho da area da cidade :\n");
    scanf("%f", &area1);
    printf("Digite o pib da cidade :\n");
    scanf("%f", &pib1);
    printf("Digite a quantidade de pontos turisticos :\n");
    scanf("%d", &N_Turisticos1);
    printf("Registro da 2° Carta feito com sucesso \n");*/

    // Exibição dos dados das cartas
    printf("\n=================================\n");
    printf("||     SUPER TRUNFO BRASIL     ||\n");
    printf("=================================\n");
    printf("||        CARTA 1              ||\n");
    printf("|| Estado: %c                   ||\n", estado);
    printf("|| Código: %s              ||\n", Cod_carta);
    printf("|| Cidade: %s      ||\n", Nome_Cidade);
    printf("|| População: %d          ||\n", populaçao);
    printf("|| Área: %.2f km²           ||\n", area);
    printf("|| PIB: %.2f bilhões         ||\n", pib);
    printf("|| Pontos Turísticos: %d       ||\n", N_Turisticos);
    printf("|| Densidade P/area: %.2f   ||\n", DP);
    printf("|| PIB per Capita: %.2f    ||\n", PPC);
    printf("|| Super Poder: %.2f     ||\n", SP1);
    printf("=================================\n");
    printf("||        CARTA 2              ||\n");
    printf("|| Estado: %c                   ||\n", estado1);
    printf("|| Código: %s                 ||\n", Cod_carta1);
    printf("|| Cidade: %s           ||\n", Nome_Cidade1);
    printf("|| População: %d         ||\n", populaçao1);
    printf("|| Área: %.2f km²           ||\n", area1);
    printf("|| PIB: %.2f bilhões         ||\n", pib1);
    printf("|| Pontos Turísticos: %d       ||\n", N_Turisticos1);
    printf("|| Densidade P/area: %.2f   ||\n", DP1);
    printf("|| PIB per Capita: %.2f    ||\n", PPC1);
    printf("|| Super Poder: %.2f    ||\n", SP2);
    printf("=================================\n");
    
    double poderes[] = {SP1, SP2};
    int vencedor = (poderes[0] > poderes[1]) ? 1 : 2;

    printf("O vencedor é a Carta %d com Super Poder de %.2f!\n", vencedor, poderes[vencedor - 1]);

}