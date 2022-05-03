// datos de entrada:
// x1,x2,a,b,c enteros
//formula
//x1=(-b+sqrt(pow(b,2)-4*a*c))/2*a
//x2=(-b-sqrt(pow(b,2)-4*a*c))/2*a




#include <stdio.h>//libreria stdio
#include <math.h>//libreria math
int main(){ //funcion principal
	float a,b,c,x1,x2=0;// declaracion de variables
	printf("ingrese el coeficiente a : ");//mensaje para ingresar a
	scanf("%f",&a); //Leer a
	printf("ingrese el coeficiente b: ");//mensaje para ingresar b
	scanf("%f",&b); //Leer a
	printf("ingrese el coeficiente c: ");//mensaje para ingresar c
	scanf("%f",&c); //Leer a
	// proceso
	x1=(-b+sqrt(pow(b,2)-4*a*c))/2*a;//formula de x1
	x2=(-b-sqrt(pow(b,2)-4*a*c))/2*a;//formula de x2
	//salida de datos
	printf("x1=%.2f\n",x1);//salida de x1
	printf("x2=%.2f\n",x2);//salida de x2
	
		
}

