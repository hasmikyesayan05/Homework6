
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a = 10;
    char b = 'A';
    double c = 3.14;
    short d = 20;

    printf("int: size = %zu, address = %p\n",
           sizeof(a), (void *)&a);

    printf("char: size = %zu, address = %p\n",
           sizeof(b), (void *)&b);

    printf("double: size = %zu, address = %p\n",
           sizeof(c), (void *)&c);

    printf("short: size = %zu, address = %p\n",
           sizeof(d), (void *)&d);

    return EXIT_SUCCESS;
}
