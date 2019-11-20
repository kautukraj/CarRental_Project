#include <stdio.h>
#include <stdlib.h>
#include "display_all.h"
#include "least_base_fare.h"
#include "most_base_fare.h"
#include "display_automatic.h"
#include "given_capacity.h"
#include "given_range.h"
#include "same_mfg.h"
#include "change_stock.h"
#include "remove_entry.h"
#include "billing.h"

int main()
{
	int ch;
main:
	system("clear");
	printf("\n\t **** Welcome to Car Rental System ****\n");
	printf("MENU OPTIONS\n\n 1.Display All\n2.Least Base Fare\n3.Most Base Fare\n4.Display Automatic\n5.Given Capacity\n6.Given Range\n7.Same MFG\n8.Change Stock\n9.Add Entry\n10.Billing\n");
	printf("Enter the choice:");
	scanf("%d",&ch);

    switch(ch)
	{
	case 0:
		printf("\n\n\t\tAre you sure you want to exit?");
		break;

	case 1:
		display_all();
		// function call 1 
		break;
        case 2: 
		least_base_fare();
		break;

    case 3:     most_base_fare();
		break;


	case 4:
		display_automatic();
		// function call
		break;
        case 5: 
		given_capacity();
		break;

    case 6:     given_range();
		break;


	case 7:
		display_automatic();
		// function call
		break;
        case 8: 
		same_mfg();
		break;

    case 9:     given_range();
		break;

	case 10:
		change_stock();
		// function call
		break;
        case 12: 
		remove_entry();
		break;

    case 13:     billing();
		break;

    default:
		system("clear");		
		printf("Invalid choice, try again...");
		// system("sleep 3");
		goto main;

	}

retry:    
	printf("\n\n\n..::Enter the Choice:\n\n\t[1] Main Menu\t\t[0] Exit\n");
	scanf("%d",&ch);

	switch (ch)
	{
		
    case 1:
		goto main;

    case 0:
		break;

    default:
		goto retry; // if user enters number other than 0 or 1
	}

    return 0;

}
