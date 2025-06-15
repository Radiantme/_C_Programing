#include <stdio.h>
#include <time.h>

int main ()
{
    clock_t startTime, endTime;
    int cnt,checkPrime,flag;

    startTime = clock();
    printf("Enter no. to check if Prime: ");
    scanf("%d",&checkPrime);
    cnt = 2;
    flag = 1;
    
    while (cnt < checkPrime)
    {
        if(checkPrime % cnt == 0)
        {
            printf("%d is not a prime no.",checkPrime);
            flag = 0;
            break;
        }
        cnt++;
    }
    if (flag != 0)
    {
        printf("%d is a prime no.\n",checkPrime);
    }
    
    endTime = clock();
    printf("\nTotal Excecution Time: %.2f\n",(double)(endTime-startTime)/CLOCKS_PER_SEC);
}