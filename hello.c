#include <stdio.h>
#include <time.h>

int main ()

{     
    clock_t start_tm, end_tm;
    
    //time stampt from start of execution
    start_tm = clock ();
    for (volatile int delayCnt = 0 ; delayCnt <= 100000000 ; delayCnt++); //some delay 

    //Print current time stamp in ISO style
    time_t now;
    struct tm *ts;
    char buf[80];

    now = time(NULL);
    ts = localtime(&now);
    strftime(buf,sizeof(buf),"%a %Y-%m-%d %H:%M:%S %Z",ts); //ISO style
    printf("%s\n",buf);


    printf("\nHello Word!\n");
    //time stampt from end of execution 
    end_tm = clock ();

    printf("\nExcecution clock time: %.2f sec\n",(double)(end_tm - start_tm)/CLOCKS_PER_SEC); 
    //PRINT TIME TAKEN TILL EXCECUTE
    //as using %f format specifier type cast one of the variable to (float) or (double)

}