#include <stdio.h>
#include <time.h>

void print_pattern(int row, int col);
void user_input(int *r, int *c);

int main ()
{
    clock_t start_tm, end_tm;
    start_tm = clock();

    int row, col;
    
    printf("Printing Square matrix of stars\n");

    user_input(&row,&col);
    print_pattern(row,col);    

    end_tm = clock();
    printf("Excecution time: %.2f sec\n",(double)(end_tm-start_tm)/CLOCKS_PER_SEC);
    
}

void print_pattern(int row, int col)
{
    for(int rowCnt  = 0 ; rowCnt < row  ; rowCnt++)
    {
        for(int cloCnt = 0 ; cloCnt < col ; cloCnt++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

void user_input(int* r, int *c)
{
    do
    {
        printf("row count\t:");
        scanf("%d",r);
        printf("column count\t:");
        scanf("%d",c);
        if(*r <= 0 || *c <= 0)
            {
                printf("Enter values other than 0\n");
            }
    } while (*r <= 0 || *c <= 0);
}