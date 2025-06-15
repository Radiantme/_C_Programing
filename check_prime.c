#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main ()
{
    clock_t startTime, endTime;
    int cnt,checkPrime;

    startTime = clock();
    printf("Enter no. to check if Prime: ");
    scanf("%d",&checkPrime);
    cnt = 2;
    
    while (cnt < checkPrime)
    {
        if(checkPrime % cnt == 0)
        {
            printf("%d is not a prime no.",checkPrime);
            exit(0);
        }
        cnt++;
    }
    printf("%d is a prime no.",checkPrime);
    endTime = clock();
    printf("\nTotal Excecution Time: %.2f\n",(double)(endTime-startTime)/CLOCKS_PER_SEC);
}