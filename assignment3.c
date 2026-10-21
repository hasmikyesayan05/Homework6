
#include <stdio.h>
#include <stdlib.h>

struct Normal {
    char a;
    int b;
    double c;
};

#pragma pack(1)
struct Packed1 {
    char a;
    int b;
    double c;
};

#pragma pack(2)
struct Packed2 {
    char a;
    int b;
    double c;
};

#pragma pack(4)
struct Packed4 {
    char a;
    int b;
    double c;
};

int main(void)
{
    struct Normal n = {'A', 10, 3.14};
    struct Packed1 p1 = {'A', 10, 3.14};
    struct Packed2 p2 = {'A', 10, 3.14};
    struct Packed4 p4 = {'A', 10, 3.14};

    printf("Normal size: %zu\n", sizeof(n));
    printf("a: %p\n", (void *)&n.a);
    printf("b: %p\n", (void *)&n.b);
    printf("c: %p\n", (void *)&n.c);

    printf("\nPack(1) size: %zu\n", sizeof(p1));
    printf("a: %p\n", (void *)&p1.a);
    printf("b: %p\n", (void *)&p1.b);
    printf("c: %p\n", (void *)&p1.c);

    printf("\nPack(2) size: %zu\n", sizeof(p2));
    printf("a: %p\n", (void *)&p2.a);
    printf("b: %p\n", (void *)&p2.b);
    printf("c: %p\n", (void *)&p2.c);

    printf("\nPack(4) size: %zu\n", sizeof(p4));
    printf("a: %p\n", (void *)&p4.a);
    printf("b: %p\n", (void *)&p4.b);
    printf("c: %p\n", (void *)&p4.c);

    return EXIT_SUCCESS;
}
