#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main()
{
	int i,j,k,m,l,cont;
	int dia,mes,anio,semana,moduloMes,febrero,total_mes; 
	int seleccion=1;					 
	
	time_t sisTime;
	struct tm*tiempo;

	time(&sisTime);
	tiempo=localtime(&sisTime);

printf("\t>>//>>//>>//>>//>>//>>//CALENDARIO\\<<\\<<\\<<\\<<\\<<\\<<n\n");
	printf("\t--------//--------<<-----Equipo 1----->>--------\\--------\n\n");
	printf("Avil%cs Ram%crez Rub%cn\nFlores Carlos\nMart%cnez S%cnchez Patricia\nS%cnchez Romero Sofia\n\n",130,161,130,161,160,160);
	printf("\t\t\t\t Hoy es: %d/%d/%d \n\n\n",dia,mes+1,anio);
	
	semana=((anio-1)%7+ ((anio-1)/4 -(3*((anio-1)/100+1)/4))%7+moduloMes+1%7)%7;
		printf("\nDo\tLu\tMar\tMier\tJue\tVier\tSab\n");				
		for(m=0;m<semana;m++) 
		printf("\t");
		printf("\t");
		printf("\t");
		for(i=1;i<=total_mes;i++) 
		{			
			if(i==8-semana||i==15-semana||i==22-semana||i==29-semana || i== 36-semana)
				printf("\n%d\t",i);
			else	
				printf("%d\t",i);
		}

return 0;
}
