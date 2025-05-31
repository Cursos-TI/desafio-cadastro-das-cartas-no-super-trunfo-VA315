#include <stdio.h>

int main(){
    
    char estado[20];
    char código[4];
     char cidade[20];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;

    printf("carta: 1\n");
   
    printf("estado: A");
    scanf("%s", estado);

    printf("código da cidade: A01");
    scanf("s", &código);



    printf("cidade: Itaborai");
    scanf("%s", cidade);

    printf("populacao: 260.930");
    scanf("%d", &populacao);

    printf("area (km²) 459.458");
    scanf("%2f", &area);

    printf("PIB( em bilhoes): 057,690");
    scanf("%f" , &pib);

    printf("numero de pontos turisticos: 10");
    scanf("%d", &pontos_turisticos);


 printf("carta: \n");
 printf("codigo: %s\n", &código);
printf("estado: %s\n", estado);
printf("cidade: %s\n", cidade);
printf("populacao: %d \n", populacao);
printf("area: %.2f km²\n", area);
printf("PIb: %2f bilhoes\n", pib);
printf("pontos_turisticos: %d\n", pontos_turisticos);





    return 0;

}
