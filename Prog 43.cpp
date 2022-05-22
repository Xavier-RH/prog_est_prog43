/* Autor: Xavier Romero Hernández, Realizado: 07/04/2022 
	Hacer un programa que incluya la libreria string.h y 
	utilice las siguientes funciones para dar un ejemplo de su uso:
		-strlen
		-strcat
		-strcpy
		-strcmp
		-strncpy
		-strstr
	*/
	
#include <stdio.h>
#include <string.h>
#include "milibreria.h"
#include <stdlib.h>
#define MAX 30

int menu();
void strlen();
void strcat();
void strcpy();
void strcmp();
void strncpy();
void strstr();


int main(){
	int opcion;
	do{	
		opcion=menu();
		switch(opcion) {
			case 0: printf("Adios.....\n");
					break;
			case 1: strlen();
					system("PAUSE");
					break;
			case 2:	strcat();
					system("PAUSE");
					break;
			case 3: strcpy();
					system("PAUSE");
					break;
			case 4: strcmp();
					system("PAUSE");
					break;
			case 5: strncpy();
					system("PAUSE");
					break;
			case 6: strstr();
					system("PAUSE");
					break;
			default:printf("Opcion no valida, ingresa otra opcion\n\n");
					break;
		}
	}while(opcion!=0);
	
	return 0;
}

int menu(){
	int opcion;
	printf("\n----------Menu Principal----------\n");
	printf("0. Salir\n");
	printf("1. strlen\n");
	printf("2. strcat\n");
	printf("3. strcpy\n");
	printf("4. strcmp\n");
	printf("5. strncpy\n");
	printf("6. strstr\n");
	printf("----------------------------------\n");
	printf("Selecciona una opcion: ");
	scanf("%d",&opcion);
	return opcion;
}

void strlen(){
	printf("\nstrlen muestra la longitud de una cadena\n");
	char s[MAX];
	leers("Introduce un texto:",s,MAX);
	printf( "s=%s\n", s );
	printf( "strlen(s) = %d\n", strlen( s ) );
}

void strcat(){
	char s1[MAX];
	char s2[MAX];
	printf("\nstrcat añade una copia de una cadena al final de otra cadena \n");
	leers("Introduce un primer texto:",s1,MAX);
	leers("Introduce un segundo texto:",s2,MAX);
	printf( "s1=%s\t", s1 );
	printf( "s2=%s\n", s2 );
	printf("\nSe ejecuta strcat(s1,s2) donde se pondra lo de s2 al final de s1:\n");
	strcat( s1, s2 );
	printf( "s1=%s\n", s1 );
}

void strcpy(){
	char s1[MAX];
	char s2[MAX];
	printf("\nstrcpy copia el total de una cadena en otra otra cadena \n");
	leers("Introduce un texto:",s2,MAX);
	printf( "s1=%s\t", s1 );
	printf( "s2=%s\n", s2 );
	printf("Como se observa s1 puede contiene residuos\n");
	printf("Se ejecuta strcpy(s1,s2) donde se copiara lo de s2 en s1:\n");
	strcpy( s1, s2 );
	printf( "s1=%s\n", s1 );
}

void strcmp(){
	char s1[MAX];
	char s2[MAX];	
	int i;
	printf("\nstrcmd compara el valor de un numero 'n' de caracteres y determina cual es mayor basados en el codigo ASCII \n");
	leers("Introduce un primer texto:",s1,MAX);
	leers("Introduce un segundo texto:",s2,MAX);
	printf( "s1=%s\t", s1 );
	printf( "s2=%s\n", s2 );

	i = strncmp( s1, s2, 3 );
	printf( "Las 3 primeras letras de s1 son " );
	if( i < 0 )  printf( "menores que" );
	else if( i > 0 )  printf( "mayores que" );
	else  printf( "iguales a" );
	printf( " s2\n" );
}

void strncpy(){
	char s1[MAX];
	char s2[MAX];
	printf("\nstrncpy copia una 'n' cantidad de caracteres una cadena en otra otra cadena \n");
	leers("Introduce un texto:",s2,MAX);
	printf( "s1=%s\t", s1 );
	printf( "s2=%s\n", s2 );
	printf("Como se observa s1 puede contener residuos\n");
	printf("Se ejecuta strncpy(s1,s2) donde se copiaran, por ejemplo, 3 caracteres de la cadena s2 en s1:\n");
	strncpy( s1, s2, 3 );
	printf( "s1=%s\n", s1 );
}

void strstr(){
	char s1[MAX];
	char s2[MAX];	
	
	printf("\nstrstr busca en una primera cadena el valor de otra cadena, de encontrarlo mandara lo que hay en la primera cadena apartir de donde se encontro la otra cadena\n");
	printf("De no encontrarse solo regresara la primera cadena\n");

	leers("Introduce un primer texto:",s1,MAX);
	leers("Introduce el texto a buscar en el primer texto:",s2,MAX);

	printf( "s1=%s\n", s1 );
	printf( "s2=%s\n", s2 );
	printf( "strstr(s1,s2) = %s\n", strstr( s1, s2 ) );
}

