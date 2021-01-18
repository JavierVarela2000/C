/*
definir variables: largo,i,acum,numero como enteros
acum=1
numero=11
imprimir "ingrese el largo"
leer largo
imprimir numero
repetir:
	i=11
	acum+=1
	i*=acum
	numero*=100
	numero+=i
	imprimir numero
mientras(acum<largo)

repetir:
	i=11
	i*=acum
	numero-=i
	numero/=100
	acum-=1
	imprimit numero
mientras(acum>1)	
*/
//librerias
#include <stdio.h>

void main(){//funcion principal
	int largo=0, i=0, acum=1,numero=11;//declaracion de variables
	
	printf("ingrese el largo(max:5): ");//preguntar largo
	scanf("%i",&largo);//leer largo
	system("cls");//limpiar pantalla	
	printf("%i\n",numero);//imprimir numero
	do{//repetir
		i=11;//inicializacion de i			
		acum+=1;//aumento en 1 del acumulador
		i*=acum;//	i=i*acum
		numero*=100;//numero=numero*100
		numero+=i;//numero=numero+i
		printf("%i\n",numero);	//imprimir numero	
	}while(acum<largo);//si acum>=largo fin de repetir
	
	do{	//repetir
		i=11;//inicializacion de i
		i*=acum;//i=i*acum
		numero-=i;//numero=numero*i
		numero/=100;//numero=numero/100
		acum-=1;//acum=acum*1
		printf("%i\n",numero);//imprimir numero
				
	}while(acum>1);//si acum<=1 fin de repetir
}
