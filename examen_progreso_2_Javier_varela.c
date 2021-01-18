//librerias
#include <stdio.h>
#include <stdlib.h>
//prototipo de funciones
int ingreso_datos(float []);
void imprimir(float [], int);
void promedio(float [], int);
//funcion principal
int main(){
	int op,i,largo;
	float datos[100];
	//menu repetitivo
	while(1){
		printf("MENU \n\n\n1.Ingresar datos\n2.Impresion de Datos\n3.Promedio de Toneladas\n4.Salir\nopcion:");	//mostrar menu
		scanf("%i",&op);	//leer opcion
		switch(op){
			case(1)://ingresar datos
				i=ingreso_datos(datos);//llamado a la funcion para ingresar datos y almacena la cantidad de datos en i
				system("pause");//pausar pantalla
    		    system("cls");//limpiar pantalla				
			break;	
			case(2)://imprimir datos
				imprimir(datos,i);//llamado a la funcion para imprimir
				system("pause");//pausar pantalla
    		    system("cls");//limpiar pantalla					
			break;
			case(3)://obtener promedio
				promedio(datos,i);//llamado a la funcion para obtener el promedio
				system("pause");//pausar pantalla
    		    system("cls");//limpiar pantalla					
			break;
			case(4)://salir
			exit(0);//sale del programa
			break;
			default:
				printf("opcion invalida\n\n");//opcion por sefecto
			break;	
		}
	}
	return 0;

}
int ingreso_datos(float datos[]){//funcion para ingresar datos
	int i,n;
	float dat;
	do{
		printf("datos ha ingresar: ");	//preunta el numero de datos	
		scanf("%i",&n);	//leer el numero de datos
	}while(n<0);//comprobar que sea mayor que 0

	for(i=0;i<n;i++){//repite n veces el numero de datos
		do{
			printf("ingrese las toneladas del mes %i: ",i+1);//pregunta el dato
			scanf("%f",&dat);//leer dato
		}while(dat<0);//comprobar que los datos ingresados sean positivos
		datos[i]=dat;//devuelve el valor ingresado al vector
	}
	return i;//devuelte el numero de datos 
}
void imprimir(float dato[],int p){//funcion para imprimir los datos
	int j=0;
	for(j=0;j<p;j++){//repite n veces la cantidad de datos
		printf("Mes %i= %.2f T\n",j+1,dato[j]);//imprime los datos
	}
}

void promedio(float dato[], int i){//funcion para obtener el promedio
	float promedio=0;
	int j;
	for(j=0;j<i;j++){//repite n veces los datos ingresados
		promedio+=dato[j];//suma los valores de los datos ingresados en la variable promedio
	}
	promedio/=i;//divide la suma de los datos ingresados para el numero de datos para obtener asi el promedio
	printf("El promedio es: %.2f T",promedio);//imprime el promedio
}
