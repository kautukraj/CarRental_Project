#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void display_all()
{
	system("clear");
	FILE* fp; char ch;
	fp=fopen("car_rental.txt","r");
	
	while (1)
	{
		if (ch==EOF)
		break;
		ch = fgetc(fp);
		printf("%c",ch);
	}
	fclose(fp);
	
}
