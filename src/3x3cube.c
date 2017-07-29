/*
 * 3x3cube.c - holds implementation for the 3x3 cube
 *
 *
 *
 *
 *
 *
 */

void * getEmptyCube()
{
    char * cube = calloc( 20, 1 );
    return cube;
}

void * getSolvedCube()
{
    char * cube = calloc( 20, 1 );

    // Corners
    cube[0] = 0x00;
    cube[1] = 0x01;
    cube[2] = 0x02;
    cube[3] = 0x03;
    cube[4] = 0x04;
    cube[5] = 0x05;
    cube[6] = 0x06;
    cube[7] = 0x07;

    // Edges
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

