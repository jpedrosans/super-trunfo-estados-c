#include <stdio.h>
#include <string.h>

int main (){
    char estado1;
    char codigo1[3];
    char cidade1[20];
    int populacao1; 
    float area1;
    float pib1;
    int npt1; //(numero_pontos_turisticos) 

    char estado2;
    char codigo2[3];
    char cidade2[20];
    int populacao2; 
    float area2;
    float pib2;
    int npt2; //(numero_pontos_turisticos) 

    printf("Carta 1\n");
    printf("Digite uma letra de 'A' a 'H':\n");
    scanf(" %c",&estado1);
    getchar ();

    printf("Agora digite a letra escolhida mais um numero entre 01 e 04 (EX.:C01): \n");
    scanf("%3s", codigo1);

    printf("Nome da cidade:\n");
    scanf("%20s", cidade1);

    printf("População da cidade:\n");
    scanf("%d", &populacao1);

    printf("Área (em KM²):\n");
    scanf("%f", &area1);

    printf("PIB:\n");
    scanf("%f", &pib1);

    printf("Número de pontos turisticos:\n");
    scanf("%i", &npt1);

    printf("Carta 1\n");
    printf("Digite uma letra de 'A' a 'H':\n");
    scanf(" %c",&estado2);
    getchar ();

    printf("Agora digite a letra escolhida mais um numero entre 01 e 04 (EX.:C01): \n");
    scanf("%3s", codigo2);

    printf("Nome da cidade:\n");
    scanf("%20s", cidade2);

    printf("População da cidade:\n");
    scanf("%d", &populacao2);

    printf("Área (em KM²):\n");
    scanf("%f", &area2);

    printf("PIB:\n");
    scanf("%f", &pib2);

    printf("Número de pontos turisticos:\n");
    scanf("%i", &npt2);

    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.3f\n", area1);
    printf("PIB:%.2f bilhões de reais\n", pib1);
    printf("Número de pontos turisticos:%c\n", npt1);

    printf("Carta 1:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.3f\n", area2);
    printf("PIB:%.2f bilhões de reais\n", pib2);
    printf("Número de pontos turisticos:%c\n", npt2);
return 0;
}


