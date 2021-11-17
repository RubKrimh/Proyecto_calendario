#include<stdio.h>
#include<time.h>

int main(){
int i,j,k,m,l,cont;
int dia,mes,anio,semana,moduloMes,febrero,total_mes;//Variables para almacenar el tiempo de la estructura tm.
int seleccion=1;					//Variable para un ciclo de respuestas.
i=j=k=m=l=cont=0;
time_t sisTime;
struct tm*tiempo;

time(&sisTime);
tiempo=localtime(&sisTime);
}
