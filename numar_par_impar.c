#include <stdio.h>

//Program creat de Daniel Savescu
//Verificare numar par sau impar

int main(){

int numar;

printf("Introduce-ti un numar: ");
scanf("%d", &numar);

if((numar % 2 == 0)){
	printf("Numarul este par");
}
else
{
	printf("Numarul este impar");
}

}
