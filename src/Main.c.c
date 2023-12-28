/*
 ============================================================================
 Name        : Main.c
 Author      : Goran Vujnovic
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float saberi(int x, int y)
{
	return x + y;
}

float pomnozi(int x, int y)
{
	return x * y;

}

float oduzmi(int x, int y)
{
	return x - y;
}

float podeli(int x, int y)
{
	return x / y;
}

int izracunaj(int x, int y, float (*foo)(int, int))
{
	return foo(x, y);
}


void main(void)
{
	printf("\t\tPRIMER CALLBACK FUNKCIJE\n\n");
	printf("Rezultat sabiranja broja %d i broja %d iznosi: %d\n",6,2, izracunaj(6,2,saberi));
	printf("Rezultat mnozenja broja %d i broja %d iznosi: %d\n", 6, 2, izracunaj(6,2,pomnozi));
	printf("Rezultat oduzimanja broja %d i broja %d iznosi: %d\n",6, 2, izracunaj(6,2,oduzmi));
	printf("Rezultat deljenja broja %d i broja %d iznosi: %d\n",6, 2, izracunaj(6,2,podeli));
}








