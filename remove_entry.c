#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void remove_entry()
{
struct car
{
	char mfg[10];
	char model[10];
	int base_fare;
	int km_fare;
	int seats;
	char trans[9];
	int stock;
} list,temp;

	char model[10]; int i,count=0;
	FILE* fp;
	FILE* ft;
	char ch;
	fp=fopen("car_rental.txt","r");
	ft=fopen("temp.txt","w");
	printf("Enter the model of car to delete:");
	scanf("%s",model);
	
    while (1) // counting number of entries
    {
        ch = fgetc(fp);
        if (ch == '\n')
        {
            count++;
        }
        if (ch == EOF)
            break;
    }
 
	rewind(fp);
	for(i=1;i<=count;i++)
	{
		fscanf(fp,"%s %s %d %d %d %s %d",temp.mfg,temp.model,&temp.base_fare,&temp.km_fare,&temp.seats,temp.trans,&temp.stock);
		if (strcmp(temp.model,model)==0)
			continue;
		else
			fprintf(ft,"%s %s %d %d %d %s %d\n",temp.mfg,temp.model,temp.base_fare,temp.km_fare,temp.seats,temp.trans,temp.stock);
	}
	
	fclose(fp);
	fclose(ft);
	remove("car_rental.txt");
	rename("temp.txt","car_rental.txt");
	
}
