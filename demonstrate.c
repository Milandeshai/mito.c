#include <stdio.h>

// NANR: No Argument, No Return
void add1()
{
    int a = 10, b = 20;
    printf("NANR: Sum = %d\n", a + b);
}

// ANR: Argument, No Return
void add2(int a, int b)
{
    printf("ANR: Sum = %d\n", a + b);
}

// NAWR: No Argument, With Return
int add3()
{
    int a = 30, b = 40;
    return a + b;
}

// AWR: Argument, With Return
int add4(int a, int b)
{
    return a + b;
}

int main()
{
    int result;

    add1();

    add2(10, 20);

    result = add3();
    printf("NAWR: Sum = %d\n", result);

    result = add4(30, 40);
    printf("AWR: Sum = %d\n", result);

    return 0;
}
