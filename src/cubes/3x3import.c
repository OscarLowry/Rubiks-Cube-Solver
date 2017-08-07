/*
 * 3x3import.c - imports a 3x3 cube from a text file
 *
 *
 */
 
#include <stdio.h>
#include <stdlib.h>

importCube( char * file )
{
    /* corner representation */
    char * corner0 = "   ";
    char * corner1 = "   ";
    char * corner2 = "   ";
    char * corner3 = "   ";
    char * corner4 = "   ";
    char * corner5 = "   ";
    char * corner6 = "   ";
    char * corner7 = "   ";

    /* edge representation */
    char * edge0 = "  ";
    char * edge1 = "  ";
    char * edge2 = "  ";
    char * edge3 = "  ";
    char * edge4 = "  ";
    char * edge5 = "  ";
    char * edge6 = "  ";
    char * edge7 = "  ";
    char * edge8 = "  ";
    char * edge9 = "  ";
    char * edge10 = "  ";
    char * edge11 = "  ";

    /* center representation */
    char * center = "      ";

    file = fopen( file, "r" );

    /* top side */
    if ( fscanf( file, "%c%c%c\n", corner1[0], edge1[0],  corner3[0]) \
        != 3 )
    {
        printf( "Error scaning first top row\n" );
        exit( EXIT_FAILURE );
    }

    if ( fscanf( file, "%c%c%c\n", edge0[0], center[0],  edge3[0]) \
        != 3 )
    {
        printf( "Error scaning second top row\n" );
        exit( EXIT_FAILURE );
    }
    
    if ( fscanf( file, "%c%c%c\n", corner0[0], edge2[0],  corner2[0]) \
        != 3 )
    {
        printf( "Error scaning third top row\n" );
        exit( EXIT_FAILURE );
    }
    
    /* Front side */
    if ( fscanf( file, "%c%c%c\n", corner0[1], edge2[1],  corner2[2]) \
        != 3 )
    {
        printf( "Error scaning first front row\n" );
        exit( EXIT_FAILURE );
    }

    if ( fscanf( file, "%c%c%c\n", edge4[1], center[1],  edge6[0]) \
        != 3 )
    {
        printf( "Error scaning second front row\n" );
        exit( EXIT_FAILURE );
    }
    
    if ( fscanf( file, "%c%c%c\n", corner4[2], edge10[1],  corner6[1]) \
        != 3 )
    {
        printf( "Error scaning third front row\n" );
        exit( EXIT_FAILURE );
    }

    /* right side */
    if ( fscanf( file, "%c%c%c\n", corner2[1], edge3[1],  corner3[2]) \
        != 3 )
    {
        printf( "Error scaning first right row\n" );
        exit( EXIT_FAILURE );
    }

    if ( fscanf( file, "%c%c%c\n", edge6[1], center[2],  edge7[0]) \
        != 3 )
    {
        printf( "Error scaning second right row\n" );
        exit( EXIT_FAILURE );
    }
    
    if ( fscanf( file, "%c%c%c\n", corner6[2], edge11[1],  corner7[1]) \
        != 3 )
    {
        printf( "Error scaning third right row\n" );
        exit( EXIT_FAILURE );
    }

    /* back side */
    if ( fscanf( file, "%c%c%c\n", corner3[1], edge1[1],  corner1[2]) \
        != 3 )
    {
        printf( "Error scaning first back row\n" );
        exit( EXIT_FAILURE );
    }

    if ( fscanf( file, "%c%c%c\n", edge7[1], center[3],  edge5[0]) \
        != 3 )
    {
        printf( "Error scaning second back row\n" );
        exit( EXIT_FAILURE );
    }
    
    if ( fscanf( file, "%c%c%c\n", corner7[2], edge9[1],  corner5[1]) \
        != 3 )
    {
        printf( "Error scaning third back row\n" );
        exit( EXIT_FAILURE );
    }

    /* left side */
    if ( fscanf( file, "%c%c%c\n", corner1[1], edge0[1],  corner0[2]) \
        != 3 )
    {
        printf( "Error scaning first left row\n" );
        exit( EXIT_FAILURE );
    }

    if ( fscanf( file, "%c%c%c\n", edge5[1], center[4],  edge4[0]) \
        != 3 )
    {
        printf( "Error scaning second left row\n" );
        exit( EXIT_FAILURE );
    }
    
    if ( fscanf( file, "%c%c%c\n", corner5[2], edge8[1],  corner4[1]) \
        != 3 )
    {
        printf( "Error scaning third left row\n" );
        exit( EXIT_FAILURE );
    }

    /* bottom side */
    if ( fscanf( file, "%c%c%c\n", corner4[0], edge11[0],  corner6[0]) \
        != 3 )
    {
        printf( "Error scaning first bottom row\n" );
        exit( EXIT_FAILURE );
    }

    if ( fscanf( file, "%c%c%c\n", edge8[0], center[5],  edge11[0]) \
        != 3 )
    {
        printf( "Error scaning second bottom row\n" );
        exit( EXIT_FAILURE );
    }
    
    if ( fscanf( file, "%c%c%c\n", corner5[0], edge9[0],  corner7[0]) \
        != 3 )
    {
        printf( "Error scaning third bottom row\n" );
        exit( EXIT_FAILURE );
    }

    fclose( file );
    
}
