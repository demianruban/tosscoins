#include <
#include <stdio.h>
#include <stdlib.h>

void fun( int throws_n, int series_n ) {
    int won_eagles = 0;
    int won_tailes = 0;
    int side;

    for (int i = 0; i < series_n; i++) {

	for (int j = 0; j < throws_n; j++) {
	    side = rand()/((RAND_MAX + 1u)/2);

	    if (side)
		won_eagles++;
	    else
		won_tailes++;
	}
	printf("%d. Eagles dropped %d times.\n   Tail dropped %d times.\n", i+1, won_eagles, won_tailes);
	won_eagles = 0;
	won_tailes = 0;
    }
}

int main() {
    fun(128, 8);
    
    return 0;
}

