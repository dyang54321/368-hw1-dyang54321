#include "hw1.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#ifdef TEST_COINS
void coins(int val){
    // iterating through quarters
    for(int q = val / 25; q >= 0; q--){
        int qr = val - q * 25; //cents remaining after quarters are removed
        // iterating through dimes
        for(int d = qr / 10; d >= 0; d--){
            int dr = qr - d * 10; //cents remaining after dimes are removed
            // iterating through nickels
            for(int n = dr / 5; n >= 0; n--){
                int p = dr - n * 5; //pennies remaining after nickels removed
                printf("Expected: %d quarter(s), %d dime(s), %d nickel(s), %d pennie(s)\n", q, d, n, p);
            }
        }
    }

    return;
}
#endif
