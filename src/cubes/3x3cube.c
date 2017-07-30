/*
 * 3x3cube.c - holds implementation for the 3x3 cube
 * 
 * This handles anything requireing knowledge avout the encoding for
 * a 3x3 rubiks cube. 
 * 
 * 
 *
 */

#include <string.h>
#include <stdlib.h>
///* 
// * Unneeded?
// */
//void * getEmptyCube()
//{
//    char * cube = calloc( 20, 1 );
//    return cube;
//}

/*
 * Returns a pointer to a solved cube
 */
void * getSolvedCube()
{
    char * cube = calloc( 20, 1 );

    /* Corners */
    cube[0] = 0x00;
    cube[1] = 0x01;
    cube[2] = 0x02;
    cube[3] = 0x03;
    cube[4] = 0x04;
    cube[5] = 0x05;
    cube[6] = 0x06;
    cube[7] = 0x07;

    /* Edges */
    cube[8] = 0x00;
    cube[9] = 0x01;
    cube[10] = 0x02;
    cube[11] = 0x03;
    cube[12] = 0x04;
    cube[13] = 0x05;
    cube[14] = 0x06;
    cube[15] = 0x07;
    cube[16] = 0x08;
    cube[17] = 0x0A;
    cube[18] = 0x0B;
    cube[19] = 0x0C;

    return cube;
}

/* --- Rotations --- */

void * rotateTop( void * incube )
{
    char * cube = calloc( 20 );
    char * in = incube;
    memcpy( cube, in, 20 );

    char p = cube[0];    //placeholder
    /* Corners */
    cube[0] = cube[2];
    cube[2] = cube[3];
    cube[3] = cube[1];
    cube[1] = p;

    p = cube[8];    //placeholder
    /* Edges */
    cube[8] = cube[10];
    cube[10] = cube[11];
    cube[11] = cube[9];
    cube[9] = p;
}

void * rotateBottom( void * incube )
{
    char * cube = calloc( 20 );
    char * in = incube;
    memcpy( cube, in, 20 );

    char p = cube[4];    //placeholder
    /* Corners */
    cube[4] = cube[6];
    cube[6] = cube[7];
    cube[7] = cube[5];
    cube[5] = p;

    p = cube[16];    //placeholder
    /* Edges */
    cube[16] = cube[18];
    cube[18] = cube[19];
    cube[19] = cube[17];
    cube[17] = p;
}
