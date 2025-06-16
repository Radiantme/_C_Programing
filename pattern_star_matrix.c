#include <stdio.h>
#include <time.h>

int main ()
{
    clock_t start_tm, end_tm;
    start_tm = clock();
    int row, col;
    row = 5;
    col = 5;

    for(int rowCnt  = 0 ; rowCnt < row  ; rowCnt++)
    {
        for(int cloCnt = 0 ; cloCnt < col ; cloCnt++)
        {
            printf("* ");
        }
        printf("\n");
    }
    end_tm = clock();
    printf("Excecution time: %.2f sec\n",(double)(end_tm-start_tm)/CLOCKS_PER_SEC);
    
}