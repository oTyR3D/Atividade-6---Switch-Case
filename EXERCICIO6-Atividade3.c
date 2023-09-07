#include <stdio.h>
#include <stdlib.h>
int prato,sobremesa,bebida,calorias,total;
int main(){
printf("Lista de Prato:\n 1-Vegetariano\n 2-Peixe \n 3-Frango \n 4-Carne\n");
printf("Qual o Prato escolhido?\n");
scanf("%d",&prato);

switch (prato){
case 1:
    printf("\nPrato: Vegetariano\n");
    printf("180 calorias\n\n");
    calorias=180;    
    break;
case 2:
    printf("\nPrato: Peixe \n");
    printf("230 calorias\n\n");
    calorias=230;    
    break;
case 3:
    printf("\nPrato: Frango\n");
    printf("250 calorias\n\n");
    calorias=250;    
    break;
case 4:
    printf("\nPrato: Carne\n");
    printf("350 calorias\n\n");
    calorias=350;    
    break;
default:
    printf("Houve um erro, valor fora dos parametros\n");
    exit(EXIT_SUCCESS);
    break;
}
total=total+calorias;

printf("Lista de Sobremesas:\n 1-Abacaxi\n 2-Sorvete Diet \n 3-Mouse Diet \n 4-Mouse Chocolate\n");
printf("Qual a Sobremesa escolhida?\n");
scanf("%d",&sobremesa);

switch (sobremesa){
case 1:
    printf("\nSobremesa: Abacaxi\n");
    printf("75 calorias\n\n");
    calorias=75;    
    break;
case 2:
    printf("\nSobremesa: Sorvete Diet \n");
    printf("110 calorias\n\n");
    calorias=110;    
    break;
case 3:
    printf("\nSobremesa: Mouse Diet\n");
    printf("170 calorias\n\n");
    calorias=170;    
    break;
case 4:
    printf("\nSobremesa: Mouse Chocolate\n");
    printf("200 calorias\n\n");
    calorias=200;    
    break;
default:
    printf("Houve um erro, valor fora dos parametros\n");
    exit(EXIT_SUCCESS);
    break;
}
total=total+calorias;
printf("Lista de Bebida:\n 1-Cha\n 2-Suco de Laranja \n 3-Suco de Melao \n 4-Refrigerante Diet\n");
printf("Qual a Bebida escolhida?\n");
scanf("%d",&bebida);

switch (bebida){
case 1:
    printf("\nBebida: Cha\n");
    printf("20 calorias\n\n");
    calorias=20;    
    break;
case 2:
    printf("\nBebida: Suco Laranja \n");
    printf("70 calorias\n\n");
    calorias=70;    
    break;
case 3:
    printf("\nBebida: Suco Melao\n");
    printf("100 calorias\n\n");
    calorias=100;    
    break;
case 4:
    printf("\nBebida: Refrigerante Diet\n");
    printf("65 calorias\n\n");
    calorias=65;    
    break;
default:
    printf("Houve um erro, valor fora dos parametros\n");
    exit(EXIT_SUCCESS);
    break;
}
total=total+calorias;
printf("O total de Calorias consumidas e de: %d calorias",total);
}