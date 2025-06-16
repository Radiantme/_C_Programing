#include <stdio.h>
#include <time.h>

int main ()
{
    clock_t start_tm, end_tm;
    start_tm = clock();

    int row, col;
    
    printf("Printing Square matrix of stars\n");
    do
    {
        printf("row count\t:");
        scanf("%d",&row);
        printf("column count\t:");
        scanf("%d",&col);
        if(row <= 0 || col <= 0)
            {
                printf("Enter values other than 0\n");
            }
    } while (row <= 0 || col <= 0);
    
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