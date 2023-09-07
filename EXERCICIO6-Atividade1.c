#include <stdio.h>
int main(){
int numero;
printf("Digite o numero de DDD:");
scanf("%d",&numero);
switch (numero)
{
case 11:
    printf("O DDD e de Sao Paulo ");
    break;
case 19:
    printf("O DDD e de Campinas ");
    break;
case 21:
    printf("O DDD e de Rio de Janeiro ");
    break;
case 27:
    printf("O DDD e de Vitoria ");
    break;
case 31:
    printf("O DDD e de Belo Horizonte ");
    break;
case 32:
    printf("O DDD e de Juiz de Fora ");
    break;
case 61:
    printf("O DDD e de Brasilia ");
    break;
case 71:
    printf("O DDD e de Salvador ");
    break;
default:
    printf("Uma cidade no Brasil sem identificacao");
}

}

/*
11 - São Paulo 
19 - Campinas 
21 - Rio de Janeiro 
27 - Vitória 
31 - Belo Horizonte 
32 - Juiz de Fora 
61 - Brasília 
71 - Salvador 

Usando o comando switch, faça um algoritmo que leia o número de DDD e informe a qual cidade pertence,
 considerando só os seguintes valores: Qualquer outro - uma cidade no Brasil sem identificação 

*/