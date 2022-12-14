#include "integer_set.h"
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

int main ()
{
        IntegerSet *setA = set_create ();
        IntegerSet *setB = set_create ();
        // add all numbers in 0 to 120 to setA
        for (int i = 0; i < 120; i++) {
                set_add (setA, i);
        }
        // add only even numbers in 0 to 140 to setB
        for (int i = 0; i < 140; i += 2) {
                set_add (setB, i);
        }

        // remove from setA all items in setB, this should leave only the odd
        // numbers from 1 to 120 in setA
        set_subtraction (setA, setB);

        for (int i = 0; i < 120; i++) {
                if (i % 2 == 0) {
                        if (set_has (setA, i))
                                return 1;

                } else {
                        if (!set_has (setA, i))
                                return 1;
                }
        }

        // ensure setC doesn't contain anything from 120 to 140
        for (int i = 120; i < 140; i++)
                if (set_has (setA, i))
                        return 1;

        set_destroy (setA);
        set_destroy (setB);

        return 0;
}