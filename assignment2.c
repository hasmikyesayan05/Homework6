
#include <stdio.h>
#include <stdlib.h>

struct First {
    char a;
    int b;
    double c;
};

struct Second {
    double c;
    int b;
    char a;
};

int main(void)
{
    struct First s1 = { 'A', 10, 3.14 };
    struct Second s2 = { 3.14, 10, 'A' };

    printf("First struct size: %zu\n", sizeof(s1));
    printf("a: %p\n", (void *)&s1.a);
    printf("b: %p\n", (void *)&s1.b);
    printf("c: %p\n", (void *)&s1.c);

    printf("\nSecond struct size: %zu\n", sizeof(s2));
    printf("c: %p\n", (void *)&s2.c);
    printf("b: %p\n", (void *)&s2.b);
    printf("a: %p\n", (void *)&s2.a);

    return EXIT_SUCCESS;
}
