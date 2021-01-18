#include <stdio.h>

int main(){
	float c1,c2,f1,f2=0;
	printf("ingrese los grados centigragos: ");
	scanf("%f",&c1);
	f1=(9*c1/5)+32;
	printf("en grados farenheith son %.2f\n",f1);
	printf("ingrese los grasos farenheith: ");
	scanf("%f",&f2);
	c2=(f2-32)*5/9;
	printf("en grados centigrados son %.2f",c2);
}
