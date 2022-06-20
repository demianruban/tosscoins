#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void tosscoins( int throws, int repeats);

int main(int argc, char *argv[]) {

    switch (argc) {
	case 1:
	    printf("Usage: tosscoins THROWS [REPEATS]\n");
	    break;
	case 2:
	    tosscoins(atoi(argv[1]), 1);
	    break;
	case 3:
	    tosscoins(atoi(argv[1]), atoi(argv[2]));
	default:
	    printf("Usage: tosscoins THROWS [REPEATS]\n");
	    break;
    }

    return 0;
}

void tosscoins( int throws, int repeats ) {
    int eagles = 0;
    int tailes = 0;
    int side;

    for (int i = 0; i < repeats; i++) {

	for (int j = 0; j < throws; j++) {
	    side = rand()/((RAND_MAX + 1u)/2);

	    if (side)
		eagles++;
	    else
		tailes++;
	}
	printf("%d. Eagles dropped %d times.\n   Tail dropped %d times.\n", i+1, eagles, tailes);
	eagles = 0;
	tailes = 0;
    }
}

