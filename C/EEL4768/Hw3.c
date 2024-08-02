#include <stdio.h>

void main() {
    int r_1 = 0;    // sets r1 reg to zero, also can be said r1 = $zero + $zero
    int r_2 = 0 + 10;   // sets r2 reg to 10.
    int r_3 = r0 + 202; // set r3 to ($zero) reg with 808 offset.

    while(r_1 < r_2){   // loops until r_1 is equal to r_2.
        r_3++;          // add one to r_3.
        r_1++;          // add one to r_1.
    }

    r0 + 202 = r_3;     // stores value at r_3 back in 808($zero).
    r0 + 200 = r_1;     // stores value at r_1 back in 800($zero).
}