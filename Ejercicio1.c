/*
Definir menu,cedula,nplatos,i,cantidad como enteros
definir iva,total,precio,subtotal como flotantes
definir nombre,plato como cadena de caracteres

Repetir
	imprimir "ingrese 1 para continuar y 2 para salir: "
	leer opcion
	imprimir  "ingrese la cedula: "
	leer cedula
	imprimir "ingrese el nombre del cliente: "
	leer nombre
	imprimir "ingrese el numero de platos ha ordenar: "
	leer nplatos
	ciclo for(inicia en 1, repite mientras sea menor o igual que nplatos, aumenta en 1)
		imprimit "ingrese el nombre del plato"
		leer plato
		imprimit "ingrese la cantidad de plato"
		leer cantidad
		imprimir "ingrese el precio del plato"
		leer precio
		subtotal=precio*cantidad
	iva = subtotal*0.12
	total=iva+subtotal
	imprimir cedula
	imprimir nombre
	imprimir subtotal
	imprimir iva
	imprimir total
mientras menu=1		
*/
//librerias
#include <stdio.h>

void main(){//funcion principal
	//definir variables
	int menu,cedula,nplatos,i,cantidad,j=0; 
	float iva,total,precio,subtotal =0;

	char nombre[12];
	char plato[20];
	do{//inicio del ciclo do while
	if(i>0){
	
			printf("ingrese 1 para continuar y 2 para salir: ");//opciones de menu
			i++;
		}
		scanf("%i",&menu);//leer opcion
		if(menu==2){break;}//opcion salir del menu
		printf("ingrese la cedula: ");//preguntar cedula
		scanf("%i",&cedula);//leer cedula
		printf("ingrese el nombre del cliente: ");//preguntar nombre
		scanf(" %s", nombre);//leer nombre
		printf("ingrese el numero de platos ha ordenar: ");//preguntar el numero de platos
		scanf("%i",&nplatos);//leer el nombre de los platos
		for(i=1; i<=nplatos; i++){//inicio del bucle for
			printf("ingrese el nombre del plato %i: ",i);//preguntar el nombre del plato
			scanf(" %s", plato);//leer plato
			printf("ingrese la cantidad de %s: ",plato);//preguntar la cantidad del plato ordenado
			scanf("%i",&cantidad);//leer cantidad
			printf("ingrese el precio del plato %i: ",i);//preguntar el precio
			scanf("%f",&precio);//leer precio
			subtotal+=precio*cantidad;//se suma el subtotal	
		}
		iva=subtotal*0.12;//calculo del iva	
		total=iva+subtotal;//calculo del total
		//impresion de la factura
		printf("Factura del cliente %s\n",nombre);
		printf("Cedula: %i\n",cedula);
		printf("subtotal: %.2f\n",subtotal);
		printf("iva: %.2f\n",iva);
		printf("valor a pagar: %.2f\n",total);
				
		system("pause");//pausa
		system("cls");//borrar pantalla
				
		
	}while(menu==1);//condicion para que el ciclo se repita
	
	
}
