#include <stdio.h>

//Variaveis para armazenamento de dados das cartas
char estado[10], codigoCidade[20], uf[2]; //Armazenamento de strings
int populacao, pontosTuristicos; //Armazenamento de numeros inteiros
float area, pib; //Armazenamento de numeros flotantes

//Registro da primeira carta
void cartaA(){
    printf("Digite o nome do estado: ");
    scanf("%s", estado);
    printf("Digite o codigo da carta: ");
    scanf("%s", codigoCidade);
    printf("Digite a sigla do estado: ");
    scanf("%s", uf);
    printf("Digite a populacao: ");
    scanf("%d", &populacao);
    printf("Digite a area: ");
    scanf("%f", &area);
    printf("Digite o pib: ");
    scanf("%f", &pib);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos);
}
//Registro da segunda carta
void cartaB(){

    printf("Digite o nome do estado: ");
    scanf("%s", estado);
    printf("Digite o codigo da carta: ");
    scanf("%s", codigoCidade);
    printf("Digite a sigla do estado: ");
    scanf("%s", uf);
    printf("Digite a populacao: ");
    scanf("%d", &populacao);
    printf("Digite a area: ");
    scanf("%f", &area);
    printf("Digite o pib: ");
    scanf("%f", &pib);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos);
}

//* Exibir cartas **/
void exibirCartas(){
    printf("Estado: %s\n", estado);
    printf("Cidade: %s\n", codigoCidade);
    printf("Sigla do estado: %s\n", uf);
    printf("Populacao: %d\n", populacao);
    printf("Area: %.2f\n", area);
    printf("Pib: %.2f\n", pib);
    printf("Pontos turisticos: %d\n", pontosTuristicos);
}
//* Exibir cartas A **/
void exibirCartasA(){
    printf("*** Carta *** \n Seu codigo de cidade e: %s\n", codigoCidade);

    exibirCartas(); //Chamado da função exibirCartas para carta A
}
//* Exibir cartas B **/
void exibirCartasB(){
    printf("*** Carta *** \n Seu codigo de cidade e: %s\n", codigoCidade);
    
    exibirCartas(); //Chamado da função exibirCartas para carta B
}
//Organizar chamado de funções
int main(){

    cartaA(); //Registro da primeira carta
    printf("*** A carta foi registrada com sucesso *** \n");
    printf("\n"); //Pular linha
    cartaB(); //Registro da segunda carta
    printf("*** A carta foi registrada com sucesso *** \n");
    printf("\n"); //Pular linha

    //Exibir todas as cartas
    printf("\n"); //Pular linha
    exibirCartasA(); //Exibir a primeira carta
    printf("\n"); //Pular linha
    exibirCartasB(); //Exibir a segunda carta


    return 0;

}