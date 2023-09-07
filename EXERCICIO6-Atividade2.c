#include <stdio.h>
int codigo=0,quantidade=0;
float valor=0;
int main(){
printf("Lista de Lanches:\n 100-Cachorro quente\n 101-Bauru Silmpes\n 102-Bauru com Ovo\n 103-Hamburger\n 104-Cheeseburger\n");
printf("Qual o codigo do Item que sera pedido?\n");
scanf("%d",&codigo);
if (codigo==100||codigo==101||codigo==102||codigo==103||codigo==104){
    switch (codigo){
        case 100:
        printf("Item: Cachorro quente\n");
        printf("Valor: R$ 10,10\n");
        valor=10.10;
        break;

        case 101:
        printf("Item: Bauru Silmpes\n");
        printf("Valor: R$ 8,30\n");
        valor=8.30;
        break;
    
        case 102:
        printf("Item: Bauru com Ovo\n");
        printf("Valor: R$ 8,50\n");
        valor=8.50;
        break;
    
        case 103:
        printf("Item: Hamburger\n");
        printf("Valor: R$ 12,50\n");
        valor=12.50;
        break;
    
        case 104:
        printf("Item: Cheeseburger\n");
        printf("Valor: R$ 13,25\n");
        valor=13.25;
        break;
    default:
        break;
}
    printf("Qual a quantidade de itens?\n");
    scanf("%d",&quantidade);
    valor=valor*quantidade;

    printf("O valor sera de: R$ %.2f",valor);
}
else{
    printf("Houve um erro, valor fora dos parametros\n");
}
}
