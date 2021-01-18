//un programa que a travez del indice de masa corporal determe el peso ideal de una persona
 #include <stdio.h>
 #include <math.h>
 int main(){
 	float peso,altura,imc=0;
 	printf("ingrese el peso en kg: ");
 	scanf("%f",&peso);
	printf("ingrese la altura en metros: ");
	scanf("%f",&altura);
	imc=peso/pow(altura,2);
	printf("el imc es %2.f: \n",imc);
    if (imc<18.5)
    	printf("tiene un peso bajo\n");
	
	else if(imc>=18.5 && imc<=24.9)
		printf("tiene un peso normal\n");
	else if(imc>=25 && imc<=29.9)
		printf("tiene sobrepeso\n");
	else if(imc>=30 && imc<39.9)
	    printf("tiene ibesidad\n");
	else 
	printf("tiene obesidad morbida");		
 }
