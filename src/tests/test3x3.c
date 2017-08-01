/*
 * test3x3.c - Tests the 3x3 implementation 
 * 
 * 
 */

#include <stdio.h>
#include <string.h>
#include "../cubes/3x3cube.h"


int main( void )
{
    void * solved = getSolvedCube();

    //rotate top
    void * test = rotateTop( solved );
    if ( testRotateTop( test ) == 1 )
        printf( "Success\n" );
    else
        printf( "FAILURE: Rotate Top" );
    freeCube( test );

    test = rotateBottom( solved );
    if ( testRotateBottom( test ) == 1 )
        printf( "Success\n" );
    else
        printf( "FAILURE: Rotate Bottom" );
    
}

int testRotateTop( void * test )
{
    char * testCube = calloc( 20, 1 );
    /* Corners */
    testCube[0] = 0x02;
    testCube[1] = 0x00;
    testCube[2] = 0x03;
    testCube[3] = 0x01;
    testCube[4] = 0x04;
    testCube[5] = 0x05;
    testCube[6] = 0x06;
    testCube[7] = 0x07;

    /* Edges */
    testCube[8] = 0x02;
    testCube[9] = 0x00;
    testCube[10] = 0x03;
    testCube[11] = 0x01;
    testCube[12] = 0x04;
    testCube[13] = 0x05;
    testCube[14] = 0x06;
    testCube[15] = 0x07;
    testCube[16] = 0x08;
    testCube[17] = 0x0A;
    testCube[18] = 0x0B;
    testCube[19] = 0x0C;
    
    int result = memcmp( test, testCube, 20 );
    free( testCube );

    return result;
}

int testRotateBottom( void * test )
{
    char * testCube = calloc( 20, 1 );
    /* Corners */
    testCube[0] = 0x00;
    testCube[1] = 0x01;
    testCube[2] = 0x02;
    testCube[3] = 0x03;
    testCube[4] = 0x05;
    testCube[5] = 0x07;
    testCube[6] = 0x04;
    testCube[7] = 0x06;

    /* Edges */
    testCube[8] = 0x00;
    testCube[9] = 0x01;
    testCube[10] = 0x02;
    testCube[11] = 0x03;
    testCube[12] = 0x04;
    testCube[13] = 0x05;
    testCube[14] = 0x06;
    testCube[15] = 0x07;
    testCube[16] = 0x08;
    testCube[17] = 0x09;
    testCube[18] = 0x0A;
    testCube[19] = 0x0B;
}

    char * testCube = calloc( 20, 1 );
    /* Corners */
    testCube[0] = 0x00;
    testCube[1] = 0x01;
    testCube[2] = 0x02;
    testCube[3] = 0x03;
    testCube[4] = 0x04;
    testCube[5] = 0x05;
    testCube[6] = 0x06;
    testCube[7] = 0x07;

    /* Edges */
    testCube[8] = 0x00;
    testCube[9] = 0x01;
    testCube[10] = 0x02;
    testCube[11] = 0x03;
    testCube[12] = 0x04;
    testCube[13] = 0x05;
    testCube[14] = 0x06;
    testCube[15] = 0x07;
    testCube[16] = 0x08;
    testCube[17] = 0x09;
    testCube[18] = 0x0A;
    testCube[19] = 0x0B;
