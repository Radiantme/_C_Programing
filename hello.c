#include <stdio.h>
#include <time.h>

int main ()
{
    clock_t tm;
    tm = clock ();
    printf("\nclock time: %d sec\n",tm/CLOCKS_PER_SEC); //PRINT TIME TAKEN TILL EXCECUTE
    printf("\nHello Word!\n");
}