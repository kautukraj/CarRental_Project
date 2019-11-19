#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct car
{
	char mfg[10];
	char model[10];
	int base_fare;
	int km_fare;
	int seats;
	char trans[9];
	int stock;
} list;

int main()
{
	system("cls");
	FILE* fp;
	fp=fopen("car_rental.txt","a");
	
	for (;;)
	{
        fflush(stdin);
		printf("To exit enter blank space in the input\nManufacturer:");
		scanf("%[^\n]",list.mfg);
		
		if(strcmp(list.mfg,"")==0 || strcmp(list.mfg," ")==0)
		break;
		
		fflush(stdin);
		printf("Model:");
		scanf("%[^\n]",list.model);
		fflush(stdin);
		printf("Base fare:");
		scanf("%d",&list.base_fare);
		fflush(stdin);
		printf("Kilometer fare:");
		scanf("%d",&list.km_fare);
		fflush(stdin);
		printf("Seats:");
		scanf("%d",&list.seats);
		fflush(stdin);
		printf("Transmission:");
		scanf("%[^\n]",list.trans);
		printf("Stock:");
		scanf("%d",&list.stock);
		
		fprintf(fp, "\n%s %s %d %d %d %s %d",list.mfg,list.model,list.base_fare,list.km_fare,list.seats,list.trans,list.stock);

    }
	fclose(fp);
	
}
