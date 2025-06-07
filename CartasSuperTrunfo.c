#include <stdio.h>

int main(){
    
char código[4];
char estado[20];
char cidade[20];
int população;
float área;
float pib;
int pontos_turísticos;

printf("Cadastro da carta: 1\n");
printf("Estado: A");

printf("Código da cidade: A01");
scanf("%s", &código);

Printf("Cidade: Itaboraí");
scanf("%s", &cidade);

printf("População: 260.930");
scanf("%d", &população);

printf("Área (Km²): 459.458");
scanf("%f", &área);

printf("PIB (em bilhões): 057,69");
scanf("%f", &pib);

printf("Número de pontos turísticos: 10");
scanf("%d", &pontos_turísticos);


printf("\n--- Cadastro da carta ---\n");
printf("Código: %s\n", código);
printf("população: %d\n", população);
printf("Área: %.2f km²\n", área);
printf("PIB: %.2f bilhões\n", pib);
printf("Pontos turísticos: 10 %d\n", pontos_turísticos);




    


    return 0;

}
