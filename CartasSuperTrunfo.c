#include <stdio.h>

int main(){
    
    char estado[20] =  "Rio de Janeiro";
    char codigo [20]  =  "A01, B02";
     char cidade[20]  =  "Itaborai";
    int populacao = 260.930;
    float area = 459.458;
    float pib = 57.69;
    int pontos_turisticos = 10;

    printf("cadastro da carta: c01\n");
    
    printf("estado: Rio de Janeiro\n");
    scanf("%s", estado);

    printf("cidade: Itaborai\n");
    scanf("%s", cidade);

    printf("populacao: 260.930\n");
    scanf("%d", &populacao);

    printf("area (km²) 459.458 \n");
    scanf("%2f", &area);

    printf("PIB(bilhoes): 057,690 \n");
    scanf("%f" , &pib);

    printf("numero de pontos turisticos: 10 \n");
    scanf("%d", &pontos_turisticos);


 printf("carta: \n");
 printf("codigo: %s\n", codigo);
printf("estado: %s\n", estado);
printf("cidade: %s\n", cidade);
printf("populacao: %d \n", populacao);
printf("area: %.2f km²\n", area);
printf("PIb: %2f bilhoes\n", pib);
printf("pontos_turisticos: %d\n", pontos_turisticos);





    return 0;

}
