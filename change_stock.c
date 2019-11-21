#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void change_stock()
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
} temp;

	char model[10];
	int i,count=0, new_stock;
	FILE* fp;
	FILE* ft;
	char ch;
	fp=fopen("car_rental.txt","r");
	ft=fopen("temp.txt","w");
	printf("Enter the model of car to modify stock:");
	scanf("%s",model);
	printf("Enter the new stock:");
	scanf("%d",&new_stock);
	

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
			fprintf(ft,"%s %s %d %d %d %s %d\n",temp.mfg,temp.model,temp.base_fare,
				            temp.km_fare,temp.seats,temp.trans,new_stock);
			
		else
			fprintf(ft,"%s %s %d %d %d %s %d\n",temp.mfg,temp.model,temp.base_fare,
				            temp.km_fare,temp.seats,temp.trans,temp.stock);
			// write code for try again
			// program should tell then and there that such car does not exist
			// successfully done message
	}
	
	fclose(fp);
	fclose(ft);
	remove("car_rental.txt");
	rename("temp.txt","car_rental.txt");
}
