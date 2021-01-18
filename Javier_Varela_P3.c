#include <stdio.h>
#include <stdlib.h>
void ingreso(int,char [][100], int [],char [][100],float [][100],int [][100]);
void impresion(int,char [][100], int [],char [][100],float [][100],int [][100]);
void factura(int,char [][100], int [],char [][100],float [][100],int [][100]);
void escribir(int,char [][100], int [],char [][100],float [][100],int [][100]);


void main(){
	int nclientes,op;
	float precio[100][100];
	int nventas[100];
	char ventas[100][100];
	char clientes[100][100];
	int cantidad[100][100];
	while(1){
		printf("Menu\n1.ingreso de datos\n2.imprimir\n3.Factura\n4.Escribir Factura\n5.Salir\nopcion: ");
		scanf("%i",&op);
		switch(op){
			case 1:
				
				do{
					printf("ingrese el numero de clientes : ");
					scanf("%i",&nclientes);
				}while(nclientes<=0);
				ingreso(nclientes,clientes,nventas,ventas,precio,cantidad);
				break;
			case 2:
				impresion(nclientes,clientes,nventas,ventas,precio,cantidad);
				break;
			case 3:
				factura(nclientes,clientes,nventas,ventas,precio,cantidad);
				break;
			case 4:	
				escribir(nclientes,clientes,nventas,ventas,precio,cantidad);
				break;	
			case 5:
				exit(0);		
		}
	}
	
}

void ingreso(int nclientes,char clientes[][100],int nventas[],char ventas[][100],float precio[][100],int cantidad[][100]){
	int i,j=0,nv,acumj=0,p=0;
	for(i=0;i<nclientes;i++){
		acumj+=j;
		printf("Cliente %i \n",i+1);
		printf("ingrese el nombre: ");
		getchar();
		gets(clientes[i]);
		do{
			printf("Ingrese la cantidad de productos: ");
			scanf("%i",&nv);
		}while(nv<=0);
		nventas[i]=nv;
		for(j=acumj,p=0;j<(nv+acumj);j++,p++){
		
			printf("Producto %i: \n",p+1);
			printf("Ingrese la descripcion: ");				
			getchar();
			gets(ventas[j]);
			do{
				printf("Ingrese el precio: ");
				scanf("%f",&precio[i][p]);
			}while(precio[i][p]<0);
			do{
				printf("Ingrese la cantidad: ");
				scanf("%i",&cantidad[i][p]);
			}while(cantidad[i][p]<0);
		}
	}
	system("pause");
}
	

void impresion(int nclientes,char clientes[][100],int nventas[],char ventas[][100],float precio[][100],int cantidad[][100]){
	int i=0,j=0,acumj=0,p=0;
	for(i=0;i<nclientes;i++){
		acumj+=j;
		printf("Cliente %i \n",i+1);
		printf("Nombre: %s\n",clientes[i]);
		printf("Descripcion\tPrecio\tCantidad\n");
		for(j=acumj,p=0;j<(nventas[i]+acumj);j++,p++){
			printf("%s\t\t%.2f\t%i\n",ventas[j],precio[i][p],cantidad[i][p]);
			
		}
	}
	system("pause");
}	

void factura(int nclientes,char clientes[][100],int nventas[],char ventas[][100],float precio[][100],int cantidad[][100]){
	int i=0,j=0,acumj=0,p=0;
	float vuni,subt=0,iva,total;
	for(i=0;i<nclientes;i++){
		iva=0;
		total=0;
		subt=0;
		acumj+=j;
		printf("Cliente %i \n",i+1);
		printf("Nombre: %s\n",clientes[i]);
		printf("Descripcion\tPrecio\tCantidad\tValor Unitario\n");
		for(j=acumj,p=0;j<(nventas[i]+acumj);j++,p++){
			vuni=precio[i][p]*cantidad[i][p];
			subt+=vuni;
			printf("%s\t\t%.2f\t%i\t\t%.2f\n",ventas[j],precio[i][p],cantidad[i][p],vuni);	
		}
		iva=subt*0.12;
		total=subt+iva;
		printf("\nSubtotal\t%.2f\n",subt);
		printf("IVA\t\t%.2f\n",iva);
		printf("Total\t\t%.2f\n\n\n",total);
	}
	system("pause");
}	

void escribir(int nclientes,char clientes[][100],int nventas[],char ventas[][100],float precio[][100],int cantidad[][100]){
	FILE *archivo;
	archivo=fopen("factura.txt","w");
		int i=0,j=0,acumj=0,p=0;
	float vuni,subt=0,iva,total;
	for(i=0;i<nclientes;i++){
		iva=0;
		total=0;
		subt=0;
		acumj+=j;
		fprintf(archivo,"Cliente %i \n",i+1);
		fprintf(archivo,"Nombre: %s\n",clientes[i]);
		fprintf(archivo,"Descripcion\tPrecio\tCantidad\tValor Unitario\n");
		for(j=acumj,p=0;j<(nventas[i]+acumj);j++,p++){
			vuni=precio[i][p]*cantidad[i][p];
			subt+=vuni;
			fprintf(archivo,"%s\t\t%.2f\t%i\t\t%.2f\n",ventas[j],precio[i][p],cantidad[i][p],vuni);	
		}
		iva=subt*0.12;
		total=subt+iva;
		fprintf(archivo,"\nSubtotal\t%.2f\n",subt);
		fprintf(archivo,"IVA\t\t%.2f\n",iva);
		fprintf(archivo,"Total\t\t%.2f\n\n\n",total);
	}
	printf("\n\nTu factura ha sido creada\n\n\n");
	fclose(archivo);
}

	
	
