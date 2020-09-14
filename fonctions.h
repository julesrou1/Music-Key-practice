#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>


//notes
typedef char LISchar[7];
//
typedef int LIS[7];
//semitone between
typedef int DIS[8];



//print LIS et LISchar
void printLIS(LIS);
void printLISchar(LISchar);

//shuffle liste of number from 0 to n-1 then if shufflecondition==1 shuffle it.
void shuffle(LIS arr,int n,int shufflecondition);

//create a liste with the note, there place are link with the sequence LIS
void rdnote(LISchar,LIS);


//create the final sequence with Major/minor added and print it, n=1 major n=2 minor n=3 mix of both
void sequence(LISchar,int n);

