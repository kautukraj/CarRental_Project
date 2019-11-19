#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void most_base_fare()
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
	} list, temp;


    int i,count=0; char ch;
    FILE* fp;
    fp = fopen("car_rental.txt", "r");

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
  int base_fare[count];
rewind(fp);
    for (i = 1; i <= count; i++)
    {
        fscanf(fp, "%s %s %d %d %d %s %d", temp.mfg, temp.model, &temp.base_fare, &temp.km_fare,
            &temp.seats, temp.trans, &temp.stock);
        base_fare[i - 1] = temp.base_fare;
    }

    int max = base_fare[0];
    for (i = 0; i < count; i++)
    {
        if (base_fare[i] > max)
            max = base_fare[i];
    }

    rewind(fp);
    for (i = 1; i <= count; i++)
    {
        fscanf(fp, "%s %s %d %d %d %s %d", temp.mfg, temp.model, &temp.base_fare, &temp.km_fare,
            &temp.seats, temp.trans, &temp.stock);
        if (temp.base_fare == max)
            printf("%s %s %d %d %d %s %d", temp.mfg, temp.model, temp.base_fare, temp.km_fare,
                temp.seats, temp.trans, temp.stock);
    }

    // if stock is zero then look for the next available one
    fclose(fp);
}
