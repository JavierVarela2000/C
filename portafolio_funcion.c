//librerias
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
//prototipo d funciones
void producto(int,int);
void cociente(int,int);
void perfect(int);
void sumserie(int *);
int fact(int);
void coss(int *,double *);


void main(){
	int op=0,a,b,n,s,sum=0;//variables
	double xi;
	int x;
	//menu repetitivo
	while(1){
		printf("MENU\n1.Producto\n2.cociente\n3.Numeros perfectos\n4.serie\n5.cos(x)\n6.salir\nopcion: ");
		scanf("%i",&op);
		switch(op){
			case(1):
				printf("a x b\n");
				do{//verificar si a es positivo
					printf("ingrese a: ");
					scanf("%i",&a);//leer a
				}while(a<0);
				do{// verificar si b es positivo
					printf("ingrese b: ");	//leer b
					scanf("%i",&b);
				}while(b<0);				
				producto(a,b);//llamado a la funcion

			break;	
			case(2):
				printf("a/b\n");
				do{//verificar si a es positivo
					printf("ingrese a: ");
					scanf("%i",&a);// leer a
				}while(a<0);//verificar si b es positivo
				do{
					printf("ingrese b: ");	
					scanf("%i",&b);//leer b
				}while(b<=0);
				cociente(a,b);//llamado a la funcion
			break;
			case(3):
				do{
					printf("ingrese n numeros perfectos: ");
					scanf("%d",&n);//leer n
				}while(n<=0);//verificar si n es positivo
				perfect(n);//llamado a la funcion
				
			break;	
			case(4):
				sumserie(&sum);//lamado a la funcion por referencia
				printf("la sumatoria es: %d\n\n",sum);//imprimir la sumatoria
				
			break;
			case(5):
				printf("ingrese x: ");//preguntar x
				scanf("%i",&x);//lleer x
				coss(&x,&xi);//llamado a la funcion
				printf("cos(%i)=%g\n\n",x,xi);//imprimir resultado
				
				
			break;
			case(6):
				exit(0);//SALIR				
			break;
			default:
			printf("Opcion invalida\n\n");
			break;	
		}
	}
}

void producto(int a,int b){//funcion para el ejercicio 1
	int i,p=0;

	for(i=0;i<b;i++){//repetir hasta i<b con paso 1
		p+=a;// suma susesiva
	}
	printf("el producto de axb es: %d\n\n",p);//imprimir resultado
}
void cociente(int a,int b){// funcion para el ejercicio 2
	int c=0,i;
	while(a>=b){//repetir mientras a>=b
		a-=b; // cociente por restas consecutivas
		c++;
	}
	printf("el cocinte es: %d\n",c);//imprimir el cociente
	printf("el residuo es: %d\n\n",a);// imprimir el residuo	
	
}


void perfect(int n){//funcion para el ejercicio 3
	long p=2,i,acum;
	while(n>0){// repetir mientras n>0
		acum=0; //inicializar acum=0 en cada vuelta
		p++;//pasar al siguiente numero a comprobar
		for(i=1;i<p;i++){//repetir mientras i<p
			if(p%i==0){//comprobar si la division entre p y 1...p-1 no deja residuo
				acum+=i;//sumar i del bucle
			}
		}
		if(acum==p){// comprobar si p es u numero perfecto
			printf("%i ",p);//imprimir p
			n-=1;//restar 1 a los valores n por imprimir
		}
	}
	printf("\n\n");
}

void sumserie(int *sum){// funcion para el ejercicio 4
	int n,op=1,i,acum=0;
	do{
		printf("ingrese n elementos para la sumatoria: ");
		scanf("%d",&n);//leer n
	}while(n<0);// comprobar si n es positivo
	for(i=1;i<=n;i++){//repetir n veces
	    // se utiliza un switch para alternar entre suma y resta 
		switch(op){
			case(1):
				acum+=pow(i,i);
				op=2;
			break;
			case(2):
				acum-=pow(i,i);
				op=1;
			break;		
		}
	}
	*sum=acum;//igualar el valor de la sumatoria a la variable principal
}
int fact(int x){//funcion para obtener el factorial de un numero
	int j,f=1;
	for(j=1;j<=x;j++){
		f*=j;
	}
	return f;
}
void coss(int *x,double *xi){//funcion para el ejercicio 5
	int n,i,op=1;
	double coss=1;
	printf("ingrese la cantidad de terminos positivos: ");
	scanf("%i",&n);//leer n
	for(i=1;i<n;i++){//repetir n veces
		// se utiliza switch para alternar entre suma y resta
		switch(op){
			case(1):
				coss-=pow(*x,2*i)/fact(2*i);//llamado a la funcion fact
				op=2;
			break;
			case(2):
				coss+=pow(*x,2*i)/fact(2*i);//llamado a la funcion fact
			break;		
		}		
	}
	*xi=coss;//igualar el valor de la sumatoria a la variable principal
	// al no poder trabajar con memoria dinamica el resultado impreso es erroneo si se usan valores muy altos
}






