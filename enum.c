//
//
//Auteur Ignacio Ito
//
/*
	Enumerações

	enum


*/

#include<stdio.h>
#include<stdlib.h>


enum componentes{transistor,capacitor,resistor,diodo,mcu};

char[][20]= 
{
	"transistor",
	"capacitor",
	"resistor",
	"diodo",
	"mcu"
};

int main(int argc, char const *argv[])
{
	enum componentes referencia;

	for(referencia = transistor;referencia <= mcu; referencia++){
		printf("%s\n", matriz[][referencia]);
	}

	system("PAUSE");
	return 0;
}