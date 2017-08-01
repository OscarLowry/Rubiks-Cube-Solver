/*
 * 3x3cube.h - holds declarations for the 3x3 cube
 * 
 * 
 *
 */

#ifndef 3X3CUBE
#define 3X3CUBE

/*
 * Returns a pointer to a solved cube
 */
void * getSolvedCube();

/*
 * frees up the memory
 */
void freeCube( void * cube );

/* --- Rotations --- */
/* All return a new cube that must be freed */

void * rotateTop( void * incube );

void * rotateBottom( void * incube );

void * rotateFront( void * incube );

void * rotateBack( void * incube );

void * rotateLeft( void * incube );

void * rotateRight( void * incube );
