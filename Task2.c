

#include <stdio.h>
#include "Task2.h"
int var = 13;
int newfunc() {
    static int counter = 0;
    counter++;
    return counter;

}

