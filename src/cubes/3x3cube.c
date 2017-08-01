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
#include "3x3cube.h"

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

void freeCube( void * cube )
{
    free( cube );
}

/* --- Orientation shifting */
/* used solely for the purpose of rotation helpers */

char flipEdge( char edge )
{
}

char rotateCWCorner( char corner )
{
   char result = corner + 0x10;
   if ( result >= 0x30 ){
       result = result - 0x30;
   }

   return result;
}

char rotateCCWCorner( char corner )
{
   char result = corner + 0x20;
   if ( result >= 0x30 ){
       result = result - 0x30;
   }

   return result;
}

/* --- Rotations --- */
/* All return a new cube that must be freed */

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
    cube[8] =  cube[10];
    cube[10] = cube[11];
    cube[11] = cube[9];
    cube[9] =  p;

    return cube;
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

    return cube;
}

void * rotateFront( void * incube )
{
    char * cube = calloc( 20 );
    char * in = incube;
    memcpy( cube, in, 20 );

    char p = cube[0];    //placeholder
    /* Corners */
    cube[0] = rotateCCWCorner( cube[4] );
    cube[4] = rotateCWCorner(  cube[6] );
    cube[6] = rotateCCWCorner( cube[2] );
    cube[2] = rotateCWCorner(  p );

    p = cube[10];    //placeholder
    /* Edges */
    cube[10] = cube[12];
    cube[12] = cube[18];
    cube[18] = flipEdge( cube[14] );
    cube[14] = flipEdge( p );

    return cube;
}

void * rotateBack( void * incube )
{
    char * cube = calloc( 20 );
    char * in = incube;
    memcpy( cube, in, 20 );

    char p = cube[3];    //placeholder
    /* Corners */
    cube[3] = rotateCCWCorner( cube[7] );
    cube[7] = rotateCWCorner(  cube[5] );
    cube[5] = rotateCCWCorner( cube[1] );
    cube[1] = rotateCWCorner(  p );

    p = cube[9];    //placeholder
    /* Edges */
    cube[9] =  cube[15];
    cube[15] = cube[17];
    cube[17] = flipEdge( cube[13] );
    cube[13] = flipEdge( p );

    return cube;
}

void * rotateLeft( void * incube )
{
    char * cube = calloc( 20 );
    char * in = incube;
    memcpy( cube, in, 20 );

    char p = cube[1];    //placeholder
    /* Corners */
    cube[1] = rotateCCWCorner( cube[5] );
    cube[5] = rotateCWCorner(  cube[4] );
    cube[4] = rotateCCWCorner( cube[0] );
    cube[0] = rotateCWCorner(  p );

    p = cube[8];    //placeholder
    /* Edges */
    cube[8] =  cube[13];
    cube[13] = cube[16];
    cube[16] = flipEdge( cube[12] );
    cube[12] = flipEdge( p );

    return cube;
}

void * rotateRight( void * incube )
{
    char * cube = calloc( 20 );
    char * in = incube;
    memcpy( cube, in, 20 );

    char p = cube[2];    //placeholder
    /* Corners */
    cube[2] = rotateCCWCorner( cube[6] );
    cube[6] = rotateCWCorner(  cube[7] );
    cube[7] = rotateCCWCorner( cube[3] );
    cube[3] = rotateCWCorner(  p );

    p = cube[11];    //placeholder
    /* Edges */
    cube[11] =  cube[14];
    cube[14] = cube[19];
    cube[19] = flipEdge( cube[15] );
    cube[15] = flipEdge( p );

    return cube;
}
