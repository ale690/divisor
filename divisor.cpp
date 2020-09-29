//REALIZADO: Jose Alejandro Taneco Sanchez//28/09/2020 
#include<stdio.h>

//FORMULA1: I=V/R// FORMULA2: R=V/I 

int main() {float V, R1, R2, R3;

printf("DAME EL VALOR DEL VOLTAJE: ");

scanf("%f",&V);

R1=V/0.02;
R2=V/0.015;
R3=V/0.02;

printf("EL RESULTADO DE LA RESISTENCIA ROJO BRILLANTE ES %f /n", R1);

printf("EL RESULTADO DE LA RESISTENCIA AMARIILLO SID ES %f /n", R2);

printf("EL RESULTADO DE LA RESISTENCIA BLANCO ES %f /n", R3);

}
