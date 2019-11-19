#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void billing()
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

	char model[10]; int i,km,bill,count=0; char ch;
	FILE* fp;
	fp=fopen("car_rental.txt","r");
	printf("Enter the model of car used:");
	scanf("%s",model);
	printf("Enter the number of kilometers:");
	scanf("%d",&km);

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
			{
				bill = temp.base_fare + km*temp.km_fare;
				break;
			}
			
			// write code for try again
	}		// program should tell then and there that such car does not exist
	
	printf("Car : %s Base fare : %d KM fare : %d Bill : %d",temp.model, temp.base_fare, temp.km_fare,bill);
	fclose(fp);
}
