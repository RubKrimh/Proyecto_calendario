#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main()
{

	int i,j,k,m,l,cont;
	int dia,mes,anio,semana,moduloMes,febrero,total_mes; 
	int seleccion=1;
	
	time_t sisTime; 		
	struct tm *tiempo;	
	
	time(&sisTime);		 
	tiempo=localtime(&sisTime);	
		
	dia=tiempo->tm_mday;		 
	mes=tiempo->tm_mon;	
	
	anio=(tiempo->tm_year)+1900;	
	 
	printf("\t>>//>>//>>//>>//>>//>>//CALENDARIO\\<<\\<<\\<<\\<<\\<<\\<<n\n");
	printf("\t--------//--------<<-----Equipo 1----->>--------\\--------\n\n");
	printf("Avil%cs Ram%crez Rub%cn\nFlores Carlos\nMart%cnez S%cnchez Patricia\nS%cnchez Romero Sofia\n\n",130,161,130,161,160,160);
	printf("\t\t\t\t Hoy es: %d/%d/%d \n\n\n",dia,mes+1,anio);
	
		while(seleccion != 0)
			{          
					if ((anio%4==0) && (anio%100!=0) || anio%400==0)
					febrero=29;
					else
					febrero=28;
					
					switch(mes)
					{
						case 3: 
						case 5: 
						case 8: 
						case 10: 
						total_mes=30; 
						break;
					case 1: 
					total_mes=febrero;
					break;
					case 0: 
					case 2: 
					case 4: 
					case 6: 
					case 7: 
					case 9: 
				case 11: 
				total_mes=31; 
				break;
					}
	
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
   		while (seleccion<0 || seleccion>1)
			{
				printf("ERROR, Ingrese 1/0\n");
				printf("�Quiere poner otra fecha? \n\t1=SI 0=NO\t>> ");
				scanf("%d",&seleccion);
			}

		if (seleccion == 1)
			{	
			printf("\nIngrese el mes deseado (mm): ");
			scanf("%d",&mes);
 
			mes=mes-1; 
			printf ("Ingrese el A%co deseado (aaaa): ",164);
			scanf("%d",&anio);
	printf("\t>>//>>//>>//>>//>>//>>//CALENDARIO\\<<\\<<\\<<\\<<\\<<\\<<n\n");
			}
   } 
return 0;
}
