#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include "math_operations.h"
#define z 6

void main()
{
    printf("Lab 13.2. Using macros and preprocessing directive\n");
    int x, y, y_cube, x_plus_y, maximum, minimum;
    float rad, s;

    printf("Define the maximum of two numbers\n");
    printf("Input 2 integer numbers\n");
    scanf("%d", &x);
    PRINTI(x);
    scanf("%d", &y);
    PRINTI(y);
#if (z > 5)
    {
        y_cube = CUBE(y);
        PRINTI(y_cube);
        int xy = MULTIPLY(x, y_cube);
        PRINTI(xy);
        int x_plus_z = ADD(x, z);
        PRINTI(x_plus_z);
        minimum = SQR(MIN(x_plus_z, xy));
        PRINTR(minimum);

    }
#else
    {
        int xy = MULTIPLY(x, y);
        PRINTI(xy);
        int yz = MULTIPLY(y, z);
        PRINTI(yz);
        int x_minus_yz = MINUS(x, yz);
        PRINTI(x_minus_yz);
        int zx = MULTIPLY(x, z);
        PRINTI(zx);
        int xy_plus_z = ADD(xy, z);
        PRINTI(xy_plus_z);
        maximum = MAX(x_minus_yz, xy_plus_z);
        PRINTR(maximum);

    }
#endif

}