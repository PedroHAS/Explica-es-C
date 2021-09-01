#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <locale.h>

main(){
setlocale(LC_ALL, "");

float acres, valor;
acres = valor = 0;

int tipo, preco;
tipo = preco = 0;

printf("Escolha qual o tipo de pulveriza��o:\n1 - Pulveriza��o contra ervas daninhas. R$700,00 por acre.");
printf("\n2 - Pulveriza��o contra gafanhotos. R$1200,00 por acre.");
printf("\n3 - Pulveriza��o contra broca. R$1600,00 por acre.");
printf("\n4 - Pulveriza��o contra tudo acima. R$2300,00 por acre.\n");
scanf("%d", &tipo);

printf("\n\nQuantos acres?\n");
scanf("%f", &acres);

if(tipo == 1){
	preco = 700;
}else if(tipo == 2){
	preco = 1200;
}else if(tipo == 3){
	preco = 1600;
}else if(tipo == 4){
	preco = 2300;
}else{
	printf("Valor inv�lido");
}

if(acres <= 300){
	valor = preco*acres;
}else if(acres > 300){
	valor = (preco*acres);
	valor -= valor * 0.075;
}

if(valor > 300000){
	valor -= 0.13*valor;
}


printf("O valor total da pulveriza��o de tipo %d em %.2f acre/s foi de R$%.2f.", tipo, acres, valor);
}
