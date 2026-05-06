#include "mymath.h"

#define PI 3.14

/*
int bigone(int x, int y)
{
    if(x > y)
        return x;
    else if(y > x)
        return y;
    else
        return 0;
}
*/

int bigone(int x, int y, int *c)
{
    if(x<0 || y<0)
        return 1;

    if(x > y) {
        *c = x;
        return 0;
    } else if(y > x) {
        *c = y;
        return 0;
    } else {
        *c = 0;
        return 1;
    }
}