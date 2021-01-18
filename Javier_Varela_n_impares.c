/*
crear un programa que permita ingresar la cantidad de numeros y determine cuales son impares


int acum=0,n
Preguntar la cantidad  de numeros
Leer n
repetir n veces:
	Leer numero
	si(numero es impar);
		acum=acum+1
	
	
imprimir("La cantidad de numeros impares es:", acum)	
*/


#include <stdio.h>
#include <math.h>
void pasoporvalor(float,float);
void pasoporreferencia(float *,float *);
void pvsumaresta(float,float);
void prsumaresta(float *,float *);
void npares(float *);
void nimpares(int *);//prototipo de la funcion
int main(){
    
    float n,m,i;
    int acum=0;
	nimpares(&acum);//Llamado a la funcion
	printf("La cantidad de numeros impares es: %d\n",acum);//imprimir la cantidad de numeros impares
    printf("Ingrese el primer numero: ");
    scanf("%f",&n);
    printf("Ingrese el segundo numero: ");
    scanf("%f",&m);
    printf("Paso por valor: \n");
    pasoporvalor(n,m);
    printf("n=%.f y m=%.f\n",n,m);
    printf("Paso por referencia: \n");
    pasoporreferencia(&n,&m);
    printf("n=%.f y m=%.f\n",n,m);
    printf("Paso por valor suma y resta: \n");
    pvsumaresta(n,m);
    printf("n=%.f y m=%.f\n",n,m);
    printf("Paso por referencia: \n");
    prsumaresta(&n,&m);
    printf("n=%.f y m=%.f\n",n,m);
    printf("Ingrese la cantidad de numeros: ");
    scanf("%f",&i);
    
        npares(&i);
    
}
void pasoporvalor(float x,float y){
    x=x*x;
    y=sqrt(y);
}
void pasoporreferencia(float *x,float *y){
    *x=(*x)*(*x);
    *y=sqrt(*y);
}
void pvsumaresta(float x, float y){
    float temp=x;
    x=x+y;
    y=temp-y;
}
void prsumaresta(float *x, float *y){
    float temp=*x;
    *x=*x+*y;
    *y=temp-(*y);
}
void npares(float *z){
    int cont=1,n=2;
    while(cont<=(*z)){
        printf("%i  ",n);
        n=n+2;
        cont++;
    }
}
void nimpares(int *acum){//Implementar funcion
	int i=0,ni,n;//definir variables
		
    do{//crepetir hasta que el numero ingresado sea positivo
    	printf("ingrese la cantidad de numeros: ");//preguntar la cantidad de numeros
		scanf("%i",&ni);//Leer la cantidad de n numeros
	}while(ni<=0);
 	for(i=0;i<ni;i++){//repetir n veces
 		printf("ingrese el numero: ");//pregunar el numero a evaluar
 		scanf("%i",&n);//Leer el numero a evaluar
 		if(n%2==1){//comprobar si es impar
 			*acum+=1;//sumar 1 a acum
		 }
	 }
}


