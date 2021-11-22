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
	
	hora=tiempo->tm_hour;
	min=tiempo->tm_min;
	seg=tiempo->tm_sec;	
	 
	printf("\t>>//>>//>>//>>//>>//>>//CALENDARIO\\<<\\<<\\<<\\<<\\<<\\<<n\n");
	printf("\t--------//--------<<-----Equipo 1----->>--------\\--------\n\n");
	printf("Avil%cs Ram%crez Rub%cn\nFlores Carlos\nMart%cnez S%cnchez Patricia\nS%cnchez Romero Sofia\n\n",130,161,130,161,160,160);
	printf("\t\t\t\t Hoy es: %d/%d/%d\n",dia,mes+1,anio);
	printf("\t\t\t\t La hora es:%d:%d:%d\n\n\n",hora,min,seg);
	
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

				switch (mes)
				{
				case 0:
				printf("\t\tENERO\t%d",anio);
				break;
				case 1:
				printf("\t\tFEBRERO\t%d",anio);
				break;
				case 2:
				printf("\t\tMARZO\t%d",anio);
				break;
				case 3:
				printf("\t\tABRIL\t%d",anio);
				break;
				case 4:
				printf("\t\tMAYO\t%d",anio);
				break;
				case 5:
				printf("\t\tJUNIO\t%d",anio);
				break;
				case 6:
				printf("\t\tJULIO\t%d",anio);
				break;
				case 7:
				printf("\t\tAGOSTO\t%d",anio);
				break;
				case 8:printf("\t\tSEPTIEMBRE\t%d",anio);
				break;
				case 9:
				printf("\t\tOCTUBRE\t%d",anio);
				break;
				case 10:
				printf("\t\tNOVIEMBRE\t%d",anio);
				break;
				case 11:printf("\t\tDICIEMBRE\t%d",anio);
				break;
				}
	 		if (febrero==29)  
				{
				switch (mes)
				{
					case 0:
					moduloMes=0;
					break;
					case 1:
					moduloMes=3;
					break;
					case 2:
					moduloMes=4;
					break;
					case 3:
					moduloMes=0;
					break;
					case 4:
					moduloMes=2;
					break;
					case 5:
					moduloMes=5;
					break;
					case 6:
					moduloMes=0;
					break;
					case 7:
					moduloMes=3;
					break;
					case 8:
					moduloMes=6;
					break;
					case 9:
					moduloMes=1;
					break;
					case 10:
					moduloMes=4;
					break;
					case 11:
					moduloMes=6;
					break;
				}
			}
			else
			{
				switch (mes)
				{
					case 0:
					moduloMes=0;
					break;
					case 1:
					moduloMes=3;
					break;
					case 2:
					moduloMes=3;
					break;
					case 3:
					moduloMes=6;
					break;
					case 4:
					moduloMes=1;
					break;
					case 5:
					moduloMes=4;
					break;
					case 6:
					moduloMes=6;
					break;
					case 7:
					moduloMes=2;
					break;
					case 8:
					moduloMes=5;
					break;
					case 9:
					moduloMes=0;
					break;
					case 10:
					moduloMes=3;
					break;
					case 11:
					moduloMes=5;
					break;
				}
			}
				
		semana=((anio-1)%7+ ((anio-1)/4 -(3*((anio-1)/100+1)/4))%7+moduloMes+1%7)%7;
		printf("\nDo\tLu\tMar\tMier\tJue\tVier\tSab\n");				
		for(m=0;m<semana;m++) 
		printf("\t");

		for(i=1;i<=total_mes;i++) 
		{			
			if(i==8-semana||i==15-semana||i==22-semana||i==29-semana || i== 36-semana)
				printf("\n%d\t",i);
			else	
				printf("%d\t",i);
		}
		printf("\n\n\tQuiere poner otra fecha? \n\t1=Si 0=No\t>> ");
		scanf("%d",&seleccion);

		while (seleccion<0 || seleccion>1)
			{
				printf("ERROR, Ingrese 1/0\n");
				printf("¿Quiere poner otra fecha? \n\t1=SI 0=NO\t>> ");
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
