#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{ 
	int I,K,BBINARIO[20],NUMBINARIO[20];
	int DECIMAL=0;
	char BINARIO[20];
	
	printf("INTRODUZCA UN NUMERO EN BINARIO: ");
	scanf("%s",BINARIO);
	
	for (I=0 ; BINARIO[I]!='\0' ; I++)
	{
		switch(BINARIO[I])
		{
		case '0': BBINARIO[I]=0;
		break;
		case '1': BBINARIO[I]=1;
		break;
		}
	}
	I--;
	
	for (K=0 ; I>=0 ; K++,I--)
	{
		NUMBINARIO[K]=BBINARIO[I];
	}
	
	
	for(I=0 ; BINARIO[I]!='\0' ; I++)
	{
		DECIMAL+=NUMBINARIO[I]*pow(2,I);
		
	}
	
	printf("\nEl resultado en decimal es: %i",DECIMAL);
	
	return 0;
}

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	return 0;
}
