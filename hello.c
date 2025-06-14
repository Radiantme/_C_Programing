#include <stdio.h>
#include <time.h>

int main ()
{
    clock_t start_tm, end_tm;

    start_tm = clock ();
    for (volatile int delayCnt = 0 ; delayCnt <= 100000000 ; delayCnt++); //some delay 
    printf("\nHello Word!\n");
    end_tm = clock ();

    printf("\nclock time: %.2f sec\n",(double)(end_tm - start_tm)/CLOCKS_PER_SEC); 
    //PRINT TIME TAKEN TILL EXCECUTE
    //as using %f format specifier type cast one of the variable to (float) or (double)

}