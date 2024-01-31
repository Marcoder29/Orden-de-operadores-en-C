#include<stdio.h>
#include<conio.h>
#include<math.h>

float resultado1, resultado2, resultado3, resultado4;
main ( )
{
	// Operadores
	resultado1 = 9+3*16/(2*2*2)-5.0/2.0;
	resultado2 = 9+3*16/pow(2,3)-5.0/2.0;
	resultado3 = 6+2*(7-(4+2))-3*(10+(3*3)/6.0);
	resultado4 = 9%5+!(20%3*7<33||27/2*3<=10*3/10);
	printf("El resultado del ejemplo 1 es: %.2f\n", resultado1);
	printf("El resultado del ejemplo 2 es: %.2f\n", resultado2);
	printf("El resultado del ejemplo 3 es: %.2f\n", resultado3);
	printf("El resultado del ejemplo 4 es: %.2f\n", resultado4);
	
	getch ();
	return 0;
	
}
