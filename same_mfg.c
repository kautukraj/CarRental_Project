#include <stdio.h>
#include <stdlib.h>
#include <string.h>



void same_mfg()
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



char mfg[10]; int i,count=0;
	FILE* fp;
	fp=fopen("car_rental.txt","r");
char ch;

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
	printf("Enter the name of the manufacturer:");
	scanf("%s",mfg);
	
	for(i=1;i<=count;i++)
	{
		fscanf(fp,"%s %s %d %d %d %s %d",temp.mfg,temp.model,&temp.base_fare,&temp.km_fare,&temp.seats,temp.trans,&temp.stock);
		if (strcmp(temp.mfg,mfg)==0)
			printf("%s %s %d %d %d %s %d\n",temp.mfg,temp.model,temp.base_fare,temp.km_fare,temp.seats,temp.trans,temp.stock);

	}
	
	fclose(fp);
}
