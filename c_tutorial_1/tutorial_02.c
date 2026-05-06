#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
    int a, b, c;

    if(argc != 3) {
        printf("USAGE: %s <a> <b>\n", argv[0]);
        return 1;
    }
    
    a = atoi(argv[1]);
    b = atoi(argv[2]);

    c = a + b;

    printf("%d + %d = %d\n", a, b, c);

    return 0;
};