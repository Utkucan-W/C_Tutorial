#include <stdlib.h>
#include <stdio.h>

#include "mymath.h"

int main(int argc, char *argv[])
{
    int a, b, c, ret;

    if(argc != 3) {
        fprintf(stderr, "USAGE: %s <a> <b>\n", argv[0]);
        return 1;
    }

    a = atoi(argv[1]);
    b = atoi(argv[2]);

    ret = bigone(a, b, &c);

    if(!ret)
        printf("Big one is %d\n", c);
    else
        printf("Something went wrong!");

    return 0;
}