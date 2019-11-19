all : main.o display_all.o least_base_fare.o most_base_fare.o display_automatic.o given_capacity.o given_range.o same_mfg.o change_stock.o 	remove_entry.o billing.o
	gcc main.c display_all.c least_base_fare.c most_base_fare.c display_automatic.c given_capacity.c given_range.c same_mfg.c 		change_stock.c remove_entry.c billing.c -o main

clean:
	rm *.o
